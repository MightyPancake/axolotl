CC = gcc

ifeq ($(OS), Windows_NT)
	SHOW_FILE_CMD = type
	CLEAR_CMD = cls
	RM_CMD = del
	TARGET_EXT = .exe
else
	SHOW_FILE_CMD = bat
	CLEAR_CMD = clear
	RM_CMD = rm
	TARGET_EXT = 
endif

default: build

compile:
	$(CC) axo_gram.tab.c lex.yy.c src/axo.c src/utils/utils.c src/utils/hashmap/hashmap.c -o axo$(TARGET_EXT) -Wall -g -L./src/lua/src -llua -lm
	@echo [92mCompiler built![0m

gen:
	@echo [96mGenerating lexer...[0m
	@flex --header-file=lex.yy.h -o lex.yy.c -d -R scan.l
	@echo [96mGenerating parser...[0m
	@bison -v --defines -d axo_gram.y -Wcounterexamples -Wconflicts-rr -Wother
	@echo [94mBuilding the compiler... [0m

build:
	@make lua -s
	@make -s gen
	@make -s compile

wasm:
	@make -s gen
	emcc axo_gram.tab.c src/axo.c src/utils/utils.c src/utils/hashmap/hashmap.c lex.yy.c -o playground.js -s WASM=1 --preload-file "modules" -gsource-map -s STACK_SIZE=20971520 -s INITIAL_MEMORY=33554432 -s EXPORTED_RUNTIME_METHODS='["cwrap", "stringToUTF8"]' -s EXPORTED_FUNCTIONS='["_axo_compile_to_c"]'
	@mv ./playground.js docs/playground/playground.js
	@mv ./playground.wasm docs/playground/playground.wasm
	@mv ./playground.wasm.map docs/playground/playground.wasm.map
	@mv ./playground.data docs/playground/playground.data
	@cp -r ./modules ./docs/playground/modules

clear_wasm:
	rm playground.js
	rm playground.wasm
	rm playground.wasm.map
	rm playground.data

run:
	$(CLEAR_CMD)
	@make -s build
	@$(SHOW_FILE_CMD) test.axo
	@./axo$(TARGET_EXT) test.axo
	@$(SHOW_FILE_CMD) test.c
	@echo [92mRunning output program...[0m
	@./test$(TARGET_EXT)
	@make -s clean
	
show:
	@make -s build
	@$(SHOW_FILE_CMD) test.axo
	@$(SHOW_FILE_CMD) test.c

clean:
	@make clean_lua -s
	@$(RM_CMD) axo_gram.tab.c
	@$(RM_CMD) axo_gram.tab.h
	@$(RM_CMD) lex.yy.c
	@$(RM_CMD) lex.yy.h
	@$(RM_CMD) axo$(TARGET_EXT)
	
debug_test:
	@make -s build
	valgrind --track-origins=yes axo test.axo

dbg:
	@clear
	@make -s
	valgrind axo run test.axo

dbgf:
	@clear
	@make -s
	valgrind --leak-check=full axo run test.axo

lua:
	@echo [95mBuilding local lua...[0m
	@cd src/lua/src && make
	@echo [95mLua built sucessfully![0m

clean_lua:
	@echo [95mDeleting local lua[0m
	@cd src/lua/src && make clean -s
	@echo [95mLua deleted![0m


commit:
	@clear
	@echo [96mPreparing commit...[0m
	@make -s
	@make -s clean
	git add .
	@echo [96mDone! Name the commit and push it.[0m
	
