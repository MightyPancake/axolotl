/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "axo_gram.y"

  #define test_playground 0
  #define YY_DECL int yylex (YYSTYPE* yylval, struct YYLTYPE* yylloc)
  #include "util/utils.h"
  #include <stdio.h>
  #include <stdlib.h>
  #include "axoc/axo.h"
  #include <time.h>
  //Bison extern
  extern int yylineno;
  extern FILE *yyin;
  extern YYLTYPE yylloc;
  extern YYSTYPE yylval;
  int yylex(YYSTYPE* yylval_param, YYLTYPE* yyloc_param);
  void yyerror(YYLTYPE* loc, const char *, ...);
  int yyparse(void);
  //Axo extern
  extern int (*axo_printf)(const char* fmt, ...);
  //State
  #define top_scope axo_scopes_top(scopes)
  axo_state* state;
  //Scopes
  axo_scopes* scopes;
  int in_loop_count = 0;

  bool rval_now=false;
  bool AXO_RVAL_WAS_VALID;

  int prog_return = 0;                    //Return value of the compiler - 0 if ok, 1 otherwise
  bool axo_code_scope_started = false;    //This indicates that a new codescope is already on top and doesn't need to be added
  #define axo_raise_error prog_return = 1;
  #define axo_is_valid_rval(EXPR) (EXPR.typ.kind!=axo_no_kind)
  #define axo_validate_rval(LOC, EXPR) ({ \
    AXO_RVAL_WAS_VALID=true; \
    if (!axo_is_valid_rval(EXPR)){ \
      AXO_RVAL_WAS_VALID=false; \
      if (EXPR.lval_kind==axo_var_lval_kind) \
        yyerror(LOC, axo_err_msg(axo_undeclared_var_err_code)); \
      else \
        yyerror(LOC, axo_err_msg(axo_invalid_rval_err_code)); \
    } \
    AXO_RVAL_WAS_VALID; \
  }) \

#line 116 "axo_gram.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "axo_gram.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_STRING_LITERAL = 3,             /* "string literal"  */
  YYSYMBOL_INTEGER_LITERAL = 4,            /* "integer literal"  */
  YYSYMBOL_FLOAT_LITERAL = 5,              /* "float literal"  */
  YYSYMBOL_IDEN = 6,                       /* "identifier"  */
  YYSYMBOL_RET_KWRD = 7,                   /* "ret"  */
  YYSYMBOL_BREAK_KWRD = 8,                 /* "break"  */
  YYSYMBOL_CONTINUE_KWRD = 9,              /* "continue"  */
  YYSYMBOL_C_INCLUDE_LOCAL = 10,           /* "#include 'local_file'"  */
  YYSYMBOL_C_INCLUDE = 11,                 /* "#include"  */
  YYSYMBOL_C_REGISTER = 12,                /* "#register"  */
  YYSYMBOL_TAG_TYP = 13,                   /* "#typ"  */
  YYSYMBOL_FN_KWRD = 14,                   /* "fn"  */
  YYSYMBOL_WHILE_KWRD = 15,                /* "while"  */
  YYSYMBOL_FOR_KWRD = 16,                  /* "for"  */
  YYSYMBOL_EACH_KWRD = 17,                 /* "each"  */
  YYSYMBOL_IN_KWRD = 18,                   /* "in"  */
  YYSYMBOL_IF_KWRD = 19,                   /* "if"  */
  YYSYMBOL_ELSE_KWRD = 20,                 /* "else"  */
  YYSYMBOL_EQ_OP = 21,                     /* "=="  */
  YYSYMBOL_INEQ_OP = 22,                   /* "!="  */
  YYSYMBOL_EQ_SMLR_OP = 23,                /* ">="  */
  YYSYMBOL_EQ_GRTR_OP = 24,                /* "<="  */
  YYSYMBOL_BIT_OR_OP = 25,                 /* "or"  */
  YYSYMBOL_BIT_AND_OP = 26,                /* "and"  */
  YYSYMBOL_LOGICAL_OR_OP = 27,             /* "||"  */
  YYSYMBOL_LOGICAL_AND_OP = 28,            /* "&&"  */
  YYSYMBOL_LEFT_SHIFT_OP = 29,             /* "<<"  */
  YYSYMBOL_RIGHT_SHIFT_OP = 30,            /* ">>"  */
  YYSYMBOL_TILL_KWRD = 31,                 /* "till"  */
  YYSYMBOL_NULL_KWRD = 32,                 /* "null"  */
  YYSYMBOL_INCR_OP = 33,                   /* "++"  */
  YYSYMBOL_DECR_OP = 34,                   /* "--"  */
  YYSYMBOL_ASSIGN_ADD = 35,                /* "+="  */
  YYSYMBOL_ASSIGN_SUB = 36,                /* "-="  */
  YYSYMBOL_ASSIGN_MUL = 37,                /* "*="  */
  YYSYMBOL_ASSIGN_DIV = 38,                /* "/="  */
  YYSYMBOL_ENUM_KWRD = 39,                 /* "enum"  */
  YYSYMBOL_STRUCT_KWRD = 40,               /* "struct"  */
  YYSYMBOL_USE_KWRD = 41,                  /* "use"  */
  YYSYMBOL_INCLUDE_KWRD = 42,              /* "include"  */
  YYSYMBOL_STRUCT_LITERAL_START = 43,      /* "struct{"  */
  YYSYMBOL_DOT_FIELD = 44,                 /* ".field"  */
  YYSYMBOL_MODULE_KWRD = 45,               /* "module"  */
  YYSYMBOL_ARROW_OP = 46,                  /* "->"  */
  YYSYMBOL_IDENTIFIER_PREC = 47,           /* IDENTIFIER_PREC  */
  YYSYMBOL_48_ = 48,                       /* '$'  */
  YYSYMBOL_EXPR_AS_STATEMENT = 49,         /* EXPR_AS_STATEMENT  */
  YYSYMBOL_50_ = 50,                       /* '='  */
  YYSYMBOL_51_ = 51,                       /* '?'  */
  YYSYMBOL_52_ = 52,                       /* '<'  */
  YYSYMBOL_53_ = 53,                       /* '>'  */
  YYSYMBOL_54_ = 54,                       /* '+'  */
  YYSYMBOL_55_ = 55,                       /* '-'  */
  YYSYMBOL_56_ = 56,                       /* '*'  */
  YYSYMBOL_57_ = 57,                       /* '/'  */
  YYSYMBOL_58_ = 58,                       /* '%'  */
  YYSYMBOL_LOOP_PREC = 59,                 /* LOOP_PREC  */
  YYSYMBOL_60_ = 60,                       /* '.'  */
  YYSYMBOL_61_ = 61,                       /* '('  */
  YYSYMBOL_62_ = 62,                       /* ':'  */
  YYSYMBOL_UMINUS = 63,                    /* UMINUS  */
  YYSYMBOL_64_ = 64,                       /* '@'  */
  YYSYMBOL_65_ = 65,                       /* '^'  */
  YYSYMBOL_66_ = 66,                       /* '!'  */
  YYSYMBOL_CALL_PREC = 67,                 /* CALL_PREC  */
  YYSYMBOL_68_ = 68,                       /* '['  */
  YYSYMBOL_STRUCT_LIT_NAMED_FIELD = 69,    /* STRUCT_LIT_NAMED_FIELD  */
  YYSYMBOL_70_ = 70,                       /* ')'  */
  YYSYMBOL_71_ = 71,                       /* '|'  */
  YYSYMBOL_72_ = 72,                       /* ']'  */
  YYSYMBOL_73_ = 73,                       /* ','  */
  YYSYMBOL_74_ = 74,                       /* '{'  */
  YYSYMBOL_75_ = 75,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 76,                  /* $accept  */
  YYSYMBOL_declarations = 77,              /* declarations  */
  YYSYMBOL_declaration = 78,               /* declaration  */
  YYSYMBOL_struct_def = 79,                /* struct_def  */
  YYSYMBOL_module_info = 80,               /* module_info  */
  YYSYMBOL_statements = 81,                /* statements  */
  YYSYMBOL_index_access = 82,              /* index_access  */
  YYSYMBOL_identifier = 83,                /* identifier  */
  YYSYMBOL_incr_decr_op = 84,              /* incr_decr_op  */
  YYSYMBOL_expr = 85,                      /* expr  */
  YYSYMBOL_stat_arr_literal_start = 86,    /* stat_arr_literal_start  */
  YYSYMBOL_arr_lit_start = 87,             /* arr_lit_start  */
  YYSYMBOL_empty_arr_dims = 88,            /* empty_arr_dims  */
  YYSYMBOL_stat_arr_literal = 89,          /* stat_arr_literal  */
  YYSYMBOL_arr_literal = 90,               /* arr_literal  */
  YYSYMBOL_statement = 91,                 /* statement  */
  YYSYMBOL_matching_statement = 92,        /* matching_statement  */
  YYSYMBOL_if_condition = 93,              /* if_condition  */
  YYSYMBOL_matching_if_statement = 94,     /* matching_if_statement  */
  YYSYMBOL_non_matching_statement = 95,    /* non_matching_statement  */
  YYSYMBOL_non_matching_if_statement = 96, /* non_matching_if_statement  */
  YYSYMBOL_till_loop_start = 97,           /* till_loop_start  */
  YYSYMBOL_while_loop_base = 98,           /* while_loop_base  */
  YYSYMBOL_matching_while = 99,            /* matching_while  */
  YYSYMBOL_non_matching_while = 100,       /* non_matching_while  */
  YYSYMBOL_for_loop_start = 101,           /* for_loop_start  */
  YYSYMBOL_for_loop_init = 102,            /* for_loop_init  */
  YYSYMBOL_for_loop_base = 103,            /* for_loop_base  */
  YYSYMBOL_matching_for_loop = 104,        /* matching_for_loop  */
  YYSYMBOL_non_matching_for_loop = 105,    /* non_matching_for_loop  */
  YYSYMBOL_each_iter_dims = 106,           /* each_iter_dims  */
  YYSYMBOL_each_loop_start = 107,          /* each_loop_start  */
  YYSYMBOL_each_loop_base = 108,           /* each_loop_base  */
  YYSYMBOL_matching_each_loop = 109,       /* matching_each_loop  */
  YYSYMBOL_non_matching_each_loop = 110,   /* non_matching_each_loop  */
  YYSYMBOL_assign_op = 111,                /* assign_op  */
  YYSYMBOL_assignment = 112,               /* assignment  */
  YYSYMBOL_arr_multidim_typ = 113,         /* arr_multidim_typ  */
  YYSYMBOL_arr_typ = 114,                  /* arr_typ  */
  YYSYMBOL_func_typ_start = 115,           /* func_typ_start  */
  YYSYMBOL_func_typ_args = 116,            /* func_typ_args  */
  YYSYMBOL_func_typ = 117,                 /* func_typ  */
  YYSYMBOL_val_typ = 118,                  /* val_typ  */
  YYSYMBOL_c_typ = 119,                    /* c_typ  */
  YYSYMBOL_c_typ_list = 120,               /* c_typ_list  */
  YYSYMBOL_called_expr = 121,              /* called_expr  */
  YYSYMBOL_func_call_start = 122,          /* func_call_start  */
  YYSYMBOL_func_call = 123,                /* func_call  */
  YYSYMBOL_code_scope_start = 124,         /* code_scope_start  */
  YYSYMBOL_code_scope = 125,               /* code_scope  */
  YYSYMBOL_func_def_name = 126,            /* func_def_name  */
  YYSYMBOL_func_def_ret_typ = 127,         /* func_def_ret_typ  */
  YYSYMBOL_func_def_start = 128,           /* func_def_start  */
  YYSYMBOL_struct_literal_start = 129,     /* struct_literal_start  */
  YYSYMBOL_struct_literal = 130,           /* struct_literal  */
  YYSYMBOL_func_def = 131,                 /* func_def  */
  YYSYMBOL_func_arg = 132,                 /* func_arg  */
  YYSYMBOL_func_args = 133,                /* func_args  */
  YYSYMBOL_enum_names = 134                /* enum_names  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1254

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  165
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  306

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,     2,     2,    48,    58,     2,     2,
      61,    70,    56,    54,    73,    55,    60,    57,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    62,     2,
      52,    50,    53,    51,    64,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,    72,    65,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,    71,    75,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    49,    59,    63,    67,    69
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   169,   169,   170,   173,   185,   204,   238,   243,   268,
     271,   274,   278,   290,   303,   311,   326,   343,   346,   371,
     372,   375,   383,   389,   413,   418,   426,   427,   428,   429,
     437,   438,   439,   440,   441,   442,   443,   444,   452,   460,
     461,   510,   524,   525,   534,   543,   552,   561,   570,   579,
     590,   602,   611,   620,   629,   652,   680,   748,   749,   750,
     782,   797,   812,   823,   826,   831,   839,   844,   860,   892,
     907,   936,   936,   938,   944,   962,   965,   977,   990,   997,
    1004,  1005,  1006,  1007,  1010,  1016,  1021,  1022,  1023,  1024,
    1027,  1030,  1035,  1045,  1052,  1061,  1070,  1075,  1080,  1091,
    1102,  1110,  1119,  1128,  1138,  1142,  1147,  1153,  1167,  1181,
    1195,  1211,  1219,  1227,  1232,  1262,  1272,  1278,  1289,  1295,
    1306,  1319,  1328,  1339,  1340,  1343,  1350,  1355,  1356,  1359,
    1360,  1365,  1369,  1374,  1385,  1405,  1463,  1502,  1510,  1526,
    1542,  1557,  1574,  1580,  1588,  1594,  1604,  1637,  1642,  1649,
    1691,  1707,  1728,  1759,  1773,  1783,  1805,  1814,  1829,  1834,
    1839,  1848,  1854,  1863,  1875,  1880
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\"string literal\"",
  "\"integer literal\"", "\"float literal\"", "\"identifier\"", "\"ret\"",
  "\"break\"", "\"continue\"", "\"#include 'local_file'\"", "\"#include\"",
  "\"#register\"", "\"#typ\"", "\"fn\"", "\"while\"", "\"for\"",
  "\"each\"", "\"in\"", "\"if\"", "\"else\"", "\"==\"", "\"!=\"", "\">=\"",
  "\"<=\"", "\"or\"", "\"and\"", "\"||\"", "\"&&\"", "\"<<\"", "\">>\"",
  "\"till\"", "\"null\"", "\"++\"", "\"--\"", "\"+=\"", "\"-=\"", "\"*=\"",
  "\"/=\"", "\"enum\"", "\"struct\"", "\"use\"", "\"include\"",
  "\"struct{\"", "\".field\"", "\"module\"", "\"->\"", "IDENTIFIER_PREC",
  "'$'", "EXPR_AS_STATEMENT", "'='", "'?'", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "LOOP_PREC", "'.'", "'('", "':'", "UMINUS", "'@'",
  "'^'", "'!'", "CALL_PREC", "'['", "STRUCT_LIT_NAMED_FIELD", "')'", "'|'",
  "']'", "','", "'{'", "'}'", "$accept", "declarations", "declaration",
  "struct_def", "module_info", "statements", "index_access", "identifier",
  "incr_decr_op", "expr", "stat_arr_literal_start", "arr_lit_start",
  "empty_arr_dims", "stat_arr_literal", "arr_literal", "statement",
  "matching_statement", "if_condition", "matching_if_statement",
  "non_matching_statement", "non_matching_if_statement", "till_loop_start",
  "while_loop_base", "matching_while", "non_matching_while",
  "for_loop_start", "for_loop_init", "for_loop_base", "matching_for_loop",
  "non_matching_for_loop", "each_iter_dims", "each_loop_start",
  "each_loop_base", "matching_each_loop", "non_matching_each_loop",
  "assign_op", "assignment", "arr_multidim_typ", "arr_typ",
  "func_typ_start", "func_typ_args", "func_typ", "val_typ", "c_typ",
  "c_typ_list", "called_expr", "func_call_start", "func_call",
  "code_scope_start", "code_scope", "func_def_name", "func_def_ret_typ",
  "func_def_start", "struct_literal_start", "struct_literal", "func_def",
  "func_arg", "func_args", "enum_names", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-207)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-145)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -207,   347,  -207,  -207,  -207,  -207,     7,  -207,    53,     1,
    -207,  -207,     8,    21,    29,    42,     6,    -3,   367,   301,
      67,   367,   -15,  -207,  -207,  -207,  -207,   586,    -9,   371,
      65,  -207,  -207,  -207,    82,  -207,    41,   -47,  -207,    38,
     367,   -33,  -207,    78,    -5,   -29,  -207,  -207,  -207,     5,
     120,    87,  -207,    77,  -207,  -207,    10,    51,  -207,  -207,
      68,   367,    52,   788,  -207,    -4,  -207,   123,  -207,   688,
     108,  -207,   123,  -207,  -207,    67,   367,   367,   367,   367,
     367,   367,   367,   367,  -207,  -207,  -207,   118,  -207,   367,
     367,   367,   367,   367,   367,   367,   367,    69,  -207,   126,
    -207,  -207,   367,    67,    90,   367,  -207,   367,   104,   442,
     134,    79,  -207,    67,  -207,  -207,  -207,    67,  -207,   788,
    -207,   367,   -39,    93,   102,  -207,   280,  -207,   391,  -207,
     105,   107,   174,    80,   367,   125,  -207,  -207,  -207,  -207,
    1129,  1129,  1073,  1073,   980,  1028,  1144,  1144,   124,   836,
    1073,  1073,  1177,  1177,  1186,  1186,  1186,    67,   129,   788,
     150,   367,  -207,   884,   788,   271,  -207,   146,  -207,  -207,
    -207,   788,  -207,   200,    80,   367,  -207,  -207,   367,   192,
     367,   152,   189,   637,  -207,  -207,   280,  -207,  -207,  -207,
    -207,   280,  -207,  -207,   280,   138,   280,  -207,  -207,     0,
     280,  -207,  -207,  -207,   165,   788,  -207,    53,  -207,   -20,
     153,   217,  -207,   -19,   788,   222,  -207,   413,   156,  -207,
     367,   788,  -207,   788,   490,  -207,    37,   788,   932,  -207,
    1092,   221,  -207,  -207,    67,  -207,   209,  -207,  -207,  -207,
     367,  -207,  -207,   167,    24,   111,  -207,  -207,   367,  -207,
      46,  -207,   224,   367,   160,  -207,    80,  -207,   129,   588,
    -207,   788,   367,  -207,   184,   186,   280,   538,   367,   788,
     367,   169,   367,    25,   788,  -207,    53,  -207,   788,   367,
    -207,   788,   367,   367,  -207,  -207,   280,   788,   932,   131,
     788,   367,   234,  -207,   788,   738,   788,  -207,   223,   932,
     225,  -207,   367,   367,   932,   932
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    26,    27,    28,    23,     4,     0,     0,
     147,    29,     0,     0,     0,     0,   150,     0,     0,     0,
       0,     0,    63,     7,     8,    40,    58,     0,     0,     0,
       0,    69,    57,    39,     0,   128,     0,     0,   127,     0,
     137,     0,    42,     0,     0,     0,    54,     3,   125,     0,
       0,     0,   129,     0,    14,    15,     0,     0,     9,    10,
      23,     0,    63,   151,    17,     0,    23,    32,   120,     0,
       0,   126,    50,    64,   115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    25,    56,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   134,     0,
      37,    38,     0,     0,     0,     0,    68,     0,    27,     0,
       0,     0,   116,     0,   123,   121,   124,     0,   148,   138,
     141,   140,   125,     0,     0,   142,     0,   157,   154,   156,
       0,     0,     0,   161,     0,     0,    11,    36,   119,   117,
      45,    46,    47,    48,    49,    51,    53,    52,     0,     0,
      43,    44,    30,    31,    33,    34,    35,     0,     0,    21,
      12,     0,    55,   114,    62,     0,    66,     0,    70,   118,
     122,   139,   145,     0,   161,     0,    79,    78,     0,    96,
       0,     0,     0,    73,    19,    71,     0,    80,    72,    86,
      99,     0,    82,    88,     0,     0,     0,    81,    87,     0,
       0,    83,    89,    75,    23,   153,   130,   131,   164,     0,
     125,     0,   162,     0,   152,     0,   136,     0,     0,   135,
       0,    22,    67,    60,     0,   146,     0,    74,    93,   106,
      84,     0,   143,    20,     0,    90,    71,    94,    95,    97,
       0,   100,   101,     0,     0,     0,   111,   112,     0,   132,
       0,     6,     0,     0,   158,    16,     0,    18,    23,    41,
      59,    13,     0,   149,     0,    76,     0,     0,     0,   102,
       0,     0,   105,     0,   155,     5,     0,   165,   159,     0,
     163,    61,     0,     0,    85,    91,     0,   103,   107,     0,
     104,     0,     0,   133,   160,     0,    77,    98,     0,   110,
       0,    92,     0,     0,   108,   109
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -207,  -207,  -207,   236,  -207,  -207,  -207,  -196,  -207,    -1,
    -207,  -207,  -207,  -207,  -207,  -178,  -167,  -207,  -207,  -166,
    -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,
     -23,  -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,    12,  -206,  -207,  -207,  -207,  -207,  -207,   205,
    -207,  -207,  -207,  -207,  -207,  -207,    -2,    84,  -207
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    23,    24,    65,   182,   104,    25,    26,   183,
      28,    29,    30,    31,    32,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     245,   199,   200,   201,   202,   105,    33,    34,    35,    36,
      37,    38,    52,    53,   250,    40,    41,    42,   126,   203,
     124,    43,    44,    45,    46,    47,   212,   213,   209
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,   249,   135,   244,   233,   172,    66,    54,   235,     3,
       4,     5,    60,    39,    56,    63,   239,    67,    69,   236,
      72,  -125,  -144,   116,   237,   238,   117,    57,   109,   241,
     242,    70,    71,   246,   247,    58,    73,   120,    11,   119,
     121,    13,   270,   291,   128,    59,   129,    48,   115,    16,
     251,   255,   118,   252,   256,   123,    74,    75,    64,    48,
      69,    18,    70,   106,   107,   130,   136,    61,   243,   125,
     293,   132,    21,    48,    62,   140,   141,   142,   143,   144,
     145,   146,   147,   131,   122,    48,   210,   139,   149,   150,
     151,   152,   153,   154,   155,   156,   300,   271,   292,   284,
     285,   159,    50,    73,   163,    20,   164,   263,   297,    51,
     256,   114,   133,    49,    50,   160,   275,    20,   134,   276,
     171,    51,   138,   168,   148,   169,    48,   205,    50,   170,
     157,    20,   158,   214,    68,    51,   110,   111,   166,    50,
      50,    50,    20,    20,    20,   211,    51,   167,    51,     3,
       4,     5,    66,   112,   113,   173,    84,    85,    74,    75,
     221,   161,   162,   174,   223,   206,   224,    86,   207,   218,
       3,     4,     5,    66,   227,   -65,   -65,   228,    11,   230,
     208,    50,   272,   273,    20,   216,   211,   215,    51,    16,
     219,   102,     3,     4,     5,    66,   175,   176,   177,    11,
     220,    18,   272,   298,   178,   179,   225,    61,   180,   229,
      16,   240,    21,   231,    62,   248,   259,    74,    75,   261,
     181,    11,    18,   254,   253,   257,   260,   264,    61,   266,
     277,   279,    16,    21,   282,    62,   283,   243,   268,   267,
      66,   302,   269,   303,    18,    55,   265,   274,   289,   127,
      61,     0,   278,     0,   280,    21,     0,    62,   226,     0,
       0,   281,     0,   125,   232,     0,     0,   287,   211,   288,
       0,   290,     0,     0,     3,     4,     5,    66,   294,     0,
       0,   295,   296,     3,     4,     5,    66,   175,   176,   177,
     299,     0,     0,     0,     0,   178,   179,     0,     0,   180,
       0,   304,   305,    11,     3,     4,     5,     6,     0,     0,
       0,   181,    11,     0,    16,    68,     0,     0,     0,     0,
       0,     0,     0,    16,     0,     0,    18,     0,     0,     0,
       0,     0,    61,    11,     0,    18,     0,    21,     0,    62,
       0,    61,     0,   222,    16,     0,    21,     2,    62,     0,
       3,     4,     5,     6,   125,     0,    18,     0,     7,     8,
       9,    10,    19,     0,     0,    20,     0,    21,     0,    22,
       3,     4,     5,    66,     3,   108,     5,    66,     0,    11,
       0,     0,     0,     0,     0,     0,    12,    13,    14,    15,
      16,     0,    17,     0,     3,     4,     5,   204,     0,    11,
       0,     0,    18,    11,     0,     0,     0,     0,    19,     0,
      16,    20,     0,    21,    16,    22,     3,     4,     5,   258,
       0,     0,    18,    11,     0,     0,    18,     0,    61,     0,
       0,     0,    61,    21,    16,    62,     0,    21,     0,    62,
       0,     0,     0,     0,     0,    11,    18,     0,     0,     0,
       0,     0,    61,     0,     0,     0,    16,    21,     0,    62,
       0,     0,     0,    76,    77,    78,    79,     0,    18,    80,
      81,    82,    83,     0,    61,    84,    85,     0,     0,    21,
       0,    62,     0,     0,     0,     0,    86,     0,     0,     0,
      87,     0,    88,    89,    90,    91,    92,    93,    94,    95,
      96,     0,    97,    98,    99,     0,   100,   101,     0,     0,
     102,    76,    77,    78,    79,   165,     0,    80,    81,    82,
      83,     0,     0,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,     0,     0,     0,    87,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,     0,
      97,    98,    99,     0,   100,   101,     0,     0,   102,    76,
      77,    78,    79,   262,     0,    80,    81,    82,    83,     0,
       0,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,     0,     0,     0,    87,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,     0,    97,    98,
      99,     0,   100,   101,     0,     0,   102,    76,    77,    78,
      79,   286,     0,    80,    81,    82,    83,     0,     0,    84,
      85,    84,    85,     0,     0,     0,     0,     0,     0,     0,
      86,     0,    86,     0,    87,     0,    88,    89,    90,    91,
      92,    93,    94,    95,    96,     0,    97,    98,    99,     0,
     100,   101,   100,   101,   102,     0,   102,   103,    76,    77,
      78,    79,     0,     0,    80,    81,    82,    83,     0,     0,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,     0,     0,     0,    87,     0,    88,    89,    90,
      91,    92,    93,    94,    95,    96,     0,    97,    98,    99,
       0,   100,   101,     0,     0,   102,     0,     0,   234,    76,
      77,    78,    79,     0,     0,    80,    81,    82,    83,     0,
       0,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,     0,     0,     0,    87,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,     0,    97,    98,
      99,     0,   100,   101,     0,     0,   102,     0,   137,    76,
      77,    78,    79,     0,     0,    80,    81,    82,    83,     0,
       0,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,     0,     0,     0,    87,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,     0,    97,    98,
      99,     0,   100,   101,     0,     0,   102,     0,   301,    76,
      77,    78,    79,     0,     0,    80,    81,    82,    83,     0,
       0,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,     0,     0,     0,    87,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,     0,    97,    98,
      99,     0,   100,   101,     0,     0,   102,    76,    77,    78,
      79,     0,     0,    80,    81,    82,    83,     0,     0,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86,     0,     0,     0,    87,     0,    88,    89,    90,    91,
      92,    93,    94,    95,    96,     0,    97,    98,   217,     0,
     100,   101,     0,     0,   102,    76,    77,    78,    79,     0,
       0,    80,    81,    82,    83,     0,     0,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    86,     0,
       0,     0,     0,     0,    88,    89,    90,    91,    92,    93,
      94,    95,    96,     0,    97,    98,    99,     0,   100,   101,
       0,     0,   102,    76,    77,    78,    79,     0,     0,    80,
      81,    82,    83,     0,     0,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    86,     0,     0,     0,
      87,     0,    88,    89,    90,    91,    92,     0,    94,    95,
      96,     0,    97,    98,    99,     0,   100,   101,     0,     0,
     102,    76,    77,    78,    79,     0,     0,     0,    81,    82,
      83,     0,     0,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,     0,    90,    91,    92,    93,    94,    95,    96,     0,
      97,    98,    99,     0,   100,   101,     0,     0,   102,    76,
      77,    78,    79,     0,     0,     0,     0,    82,    83,     0,
       0,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,     0,     0,     0,     0,     0,     0,     0,
      90,    91,    92,    93,    94,    95,    96,     0,    97,    98,
      99,     0,   100,   101,    76,    77,   102,     0,     0,     0,
       0,     0,    82,    83,     0,     0,    84,    85,     0,     0,
       0,     0,     0,    76,    77,    78,    79,    86,     0,    80,
      81,    82,    83,     0,     0,    84,    85,    92,    93,    94,
      95,    96,     0,    97,    98,    99,    86,   100,   101,     0,
      87,   102,    88,    89,    90,    91,    92,     0,    94,    95,
      96,     0,    97,     0,    99,     0,   100,   101,    82,    83,
       0,     0,    84,    85,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,     0,     0,     0,    84,    85,     0,
       0,     0,     0,    92,    93,    94,    95,    96,    86,    97,
      98,    99,     0,   100,   101,     0,     0,   102,    92,    93,
      94,    95,    96,     0,    97,    98,    99,     0,   100,   101,
      84,    85,   102,     0,     0,     0,     0,     0,     0,    84,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
      86,     0,     0,    94,    95,    96,     0,    97,    98,    99,
       0,   100,   101,     0,     0,   102,    97,    98,    99,     0,
     100,   101,     0,     0,   102
};

static const yytype_int16 yycheck[] =
{
       1,   207,     6,   199,   182,    44,     6,     6,   186,     3,
       4,     5,     6,     1,     6,    16,   194,    18,    19,   186,
      21,    14,    61,    70,   191,   191,    73,     6,    29,   196,
     196,    19,    20,   200,   200,     6,    51,    70,    32,    40,
      73,    40,    18,    18,    73,     3,    75,     6,    36,    43,
      70,    70,    14,    73,    73,    43,    71,    72,    61,     6,
      61,    55,    50,    72,    73,    60,    70,    61,    68,    74,
     276,    61,    66,     6,    68,    76,    77,    78,    79,    80,
      81,    82,    83,     6,     6,     6,     6,    75,    89,    90,
      91,    92,    93,    94,    95,    96,   292,    73,    73,   266,
     266,   102,    61,    51,   105,    64,   107,    70,   286,    68,
      73,    70,    61,    60,    61,   103,    70,    64,    50,    73,
     121,    68,    14,   111,     6,   113,     6,   128,    61,   117,
      61,    64,     6,   134,    14,    68,    71,    72,     4,    61,
      61,    61,    64,    64,    64,   133,    68,    68,    68,     3,
       4,     5,     6,    71,    72,    62,    33,    34,    71,    72,
     161,    71,    72,    61,   165,    60,   167,    44,    61,   157,
       3,     4,     5,     6,   175,    71,    72,   178,    32,   180,
       6,    61,    71,    72,    64,    61,   174,    62,    68,    43,
      61,    68,     3,     4,     5,     6,     7,     8,     9,    32,
      50,    55,    71,    72,    15,    16,     6,    61,    19,    17,
      43,    73,    66,    61,    68,    50,   217,    71,    72,   220,
      31,    32,    55,     6,    71,     3,    70,     6,    61,    20,
       6,    71,    43,    66,    50,    68,    50,    68,    71,   240,
       6,    18,   243,    18,    55,     9,   234,   248,   271,    44,
      61,    -1,   253,    -1,   256,    66,    -1,    68,   174,    -1,
      -1,   262,    -1,    74,    75,    -1,    -1,   268,   256,   270,
      -1,   272,    -1,    -1,     3,     4,     5,     6,   279,    -1,
      -1,   282,   283,     3,     4,     5,     6,     7,     8,     9,
     291,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    19,
      -1,   302,   303,    32,     3,     4,     5,     6,    -1,    -1,
      -1,    31,    32,    -1,    43,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    61,    32,    -1,    55,    -1,    66,    -1,    68,
      -1,    61,    -1,    72,    43,    -1,    66,     0,    68,    -1,
       3,     4,     5,     6,    74,    -1,    55,    -1,    11,    12,
      13,    14,    61,    -1,    -1,    64,    -1,    66,    -1,    68,
       3,     4,     5,     6,     3,     4,     5,     6,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    -1,    45,    -1,     3,     4,     5,     6,    -1,    32,
      -1,    -1,    55,    32,    -1,    -1,    -1,    -1,    61,    -1,
      43,    64,    -1,    66,    43,    68,     3,     4,     5,     6,
      -1,    -1,    55,    32,    -1,    -1,    55,    -1,    61,    -1,
      -1,    -1,    61,    66,    43,    68,    -1,    66,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    32,    55,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    43,    66,    -1,    68,
      -1,    -1,    -1,    21,    22,    23,    24,    -1,    55,    27,
      28,    29,    30,    -1,    61,    33,    34,    -1,    -1,    66,
      -1,    68,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    -1,    60,    61,    62,    -1,    64,    65,    -1,    -1,
      68,    21,    22,    23,    24,    73,    -1,    27,    28,    29,
      30,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    -1,
      60,    61,    62,    -1,    64,    65,    -1,    -1,    68,    21,
      22,    23,    24,    73,    -1,    27,    28,    29,    30,    -1,
      -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    60,    61,
      62,    -1,    64,    65,    -1,    -1,    68,    21,    22,    23,
      24,    73,    -1,    27,    28,    29,    30,    -1,    -1,    33,
      34,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    44,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    60,    61,    62,    -1,
      64,    65,    64,    65,    68,    -1,    68,    71,    21,    22,
      23,    24,    -1,    -1,    27,    28,    29,    30,    -1,    -1,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    60,    61,    62,
      -1,    64,    65,    -1,    -1,    68,    -1,    -1,    71,    21,
      22,    23,    24,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    60,    61,
      62,    -1,    64,    65,    -1,    -1,    68,    -1,    70,    21,
      22,    23,    24,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    60,    61,
      62,    -1,    64,    65,    -1,    -1,    68,    -1,    70,    21,
      22,    23,    24,    -1,    -1,    27,    28,    29,    30,    -1,
      -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    -1,    60,    61,
      62,    -1,    64,    65,    -1,    -1,    68,    21,    22,    23,
      24,    -1,    -1,    27,    28,    29,    30,    -1,    -1,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    60,    61,    62,    -1,
      64,    65,    -1,    -1,    68,    21,    22,    23,    24,    -1,
      -1,    27,    28,    29,    30,    -1,    -1,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    60,    61,    62,    -1,    64,    65,
      -1,    -1,    68,    21,    22,    23,    24,    -1,    -1,    27,
      28,    29,    30,    -1,    -1,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    -1,    56,    57,
      58,    -1,    60,    61,    62,    -1,    64,    65,    -1,    -1,
      68,    21,    22,    23,    24,    -1,    -1,    -1,    28,    29,
      30,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    -1,
      60,    61,    62,    -1,    64,    65,    -1,    -1,    68,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    29,    30,    -1,
      -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    -1,    60,    61,
      62,    -1,    64,    65,    21,    22,    68,    -1,    -1,    -1,
      -1,    -1,    29,    30,    -1,    -1,    33,    34,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    44,    -1,    27,
      28,    29,    30,    -1,    -1,    33,    34,    54,    55,    56,
      57,    58,    -1,    60,    61,    62,    44,    64,    65,    -1,
      48,    68,    50,    51,    52,    53,    54,    -1,    56,    57,
      58,    -1,    60,    -1,    62,    -1,    64,    65,    29,    30,
      -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    33,    34,    -1,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    44,    60,
      61,    62,    -1,    64,    65,    -1,    -1,    68,    54,    55,
      56,    57,    58,    -1,    60,    61,    62,    -1,    64,    65,
      33,    34,    68,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    56,    57,    58,    -1,    60,    61,    62,
      -1,    64,    65,    -1,    -1,    68,    60,    61,    62,    -1,
      64,    65,    -1,    -1,    68
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    77,     0,     3,     4,     5,     6,    11,    12,    13,
      14,    32,    39,    40,    41,    42,    43,    45,    55,    61,
      64,    66,    68,    78,    79,    83,    84,    85,    86,    87,
      88,    89,    90,   112,   113,   114,   115,   116,   117,   118,
     121,   122,   123,   127,   128,   129,   130,   131,     6,    60,
      61,    68,   118,   119,     6,    79,     6,     6,     6,     3,
       6,    61,    68,    85,    61,    80,     6,    85,    14,    85,
     118,   118,    85,    51,    71,    72,    21,    22,    23,    24,
      27,    28,    29,    30,    33,    34,    44,    48,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    60,    61,    62,
      64,    65,    68,    71,    82,   111,    72,    73,     4,    85,
      71,    72,    71,    72,    70,   118,    70,    73,    14,    85,
      70,    73,     6,   118,   126,    74,   124,   125,    73,    75,
      60,     6,    61,    61,    50,     6,    70,    70,    14,   118,
      85,    85,    85,    85,    85,    85,    85,    85,     6,    85,
      85,    85,    85,    85,    85,    85,    85,    61,     6,    85,
     118,    71,    72,    85,    85,    73,     4,    68,   118,   118,
     118,    85,    44,    62,    61,     7,     8,     9,    15,    16,
      19,    31,    81,    85,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   107,
     108,   109,   110,   125,     6,    85,    60,    61,     6,   134,
       6,   118,   132,   133,    85,    62,    61,    62,   118,    61,
      50,    85,    72,    85,    85,     6,   133,    85,    85,    17,
      85,    61,    75,    91,    71,    91,    92,    92,    95,    91,
      73,    92,    95,    68,    83,   106,    92,    95,    50,   119,
     120,    70,    73,    71,     6,    70,    73,     3,     6,    85,
      70,    85,    73,    70,     6,   118,    20,    85,    71,    85,
      18,    73,    71,    72,    85,    70,    73,     6,    85,    71,
     132,    85,    50,    50,    92,    95,    73,    85,    85,   106,
      85,    18,    73,   119,    85,    85,    85,    91,    72,    85,
      83,    70,    18,    18,    85,    85
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    77,    77,    77,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    78,    79,    80,    80,    81,
      81,    82,    82,    83,    84,    84,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      86,    86,    86,    87,    87,    88,    88,    89,    89,    90,
      90,    91,    91,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    93,    94,    95,    95,    95,    95,
      96,    96,    97,    98,    99,   100,   101,   102,   103,   103,
     104,   105,   106,   106,   106,   106,   107,   108,   108,   108,
     108,   109,   110,   111,   112,   113,   113,   114,   114,   115,
     115,   116,   116,   117,   117,   118,   118,   118,   118,   119,
     119,   120,   120,   120,   121,   121,   121,   122,   122,   122,
     122,   123,   124,   125,   126,   126,   126,   127,   127,   128,
     129,   129,   129,   129,   129,   129,   130,   131,   132,   132,
     132,   133,   133,   133,   134,   134
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     7,     6,     2,     1,     2,
       2,     3,     3,     5,     2,     2,     5,     1,     4,     1,
       2,     2,     3,     1,     2,     2,     1,     1,     1,     1,
       3,     3,     2,     3,     3,     3,     3,     2,     2,     1,
       1,     5,     1,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     1,     3,     2,     1,     1,     5,
       4,     6,     3,     1,     2,     2,     3,     4,     2,     1,
       3,     1,     1,     1,     2,     1,     3,     5,     1,     1,
       1,     1,     1,     1,     2,     4,     1,     1,     1,     1,
       2,     4,     6,     2,     2,     2,     1,     2,     5,     1,
       2,     2,     2,     3,     3,     2,     2,     4,     7,     7,
       5,     2,     2,     1,     3,     2,     2,     3,     3,     3,
       2,     2,     3,     2,     2,     1,     2,     1,     1,     1,
       3,     0,     1,     3,     2,     4,     4,     1,     2,     3,
       2,     2,     1,     3,     1,     2,     3,     1,     2,     5,
       1,     2,     4,     3,     2,     5,     2,     2,     2,     3,
       4,     0,     1,     3,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (&yylloc, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, &yylloc);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* declarations: %empty  */
#line 169 "axo_gram.y"
                           {}
#line 2047 "axo_gram.tab.c"
    break;

  case 3: /* declarations: declarations func_def  */
#line 170 "axo_gram.y"
                          {
    axo_add_decl(state, axo_func_def_to_decl((yyvsp[0].function)));
  }
#line 2055 "axo_gram.tab.c"
    break;

  case 4: /* declarations: declarations "#include"  */
#line 173 "axo_gram.y"
                           {
    if ((yyvsp[0].str)[0] == '<'){
      axo_add_decl(state, (axo_decl){.val = fmtstr("#include %s", (yyvsp[0].str)), .kind=axo_c_include_decl_kind});
    }else{
      char* path = &((yyvsp[0].str)[1]);
      path[strlen((yyvsp[0].str))-2] = '\0';
      // printf("Path of c_include: %s\nResolved path: %s\n", path, axo_resolve_path(path));
      char* res_path = axo_resolve_path(path);
      axo_add_decl(state, (axo_decl){.val = fmtstr("#include \"%s\"", res_path), .kind=axo_c_include_decl_kind});
      free(res_path);
    }
  }
#line 2072 "axo_gram.tab.c"
    break;

  case 5: /* declarations: declarations "#register" c_typ "identifier" '(' c_typ_list ')'  */
#line 185 "axo_gram.y"
                                                          {
    // printf("Starting to register a C function\n");
    axo_func fn;
    fn.name = alloc_str((yyvsp[-3].str));
    fn.f_typ.args_len = (yyvsp[-1].types_list).len;
    fn.f_typ.ret_typ = (yyvsp[-4].typ_type);
    fn.body = NULL; //This is only true for C functions!
    fn.args_names = (char**)malloc(fn.f_typ.args_len*sizeof(char*));
    fn.f_typ.args_defs = (char**)malloc(fn.f_typ.args_len*sizeof(char*));
    fn.f_typ.args_types = (axo_typ*)malloc(fn.f_typ.args_len*sizeof(axo_typ));
    for (int i = 0; i<fn.f_typ.args_len; i++){
      asprintf(&(fn.args_names[i]), "p%d", i+1);
      //FIX: Every type should have default value!
      fn.f_typ.args_defs[i] = (yyvsp[-1].types_list).values[i].def;
      fn.f_typ.args_types[i] = (yyvsp[-1].types_list).values[i];
    }
    axo_set_func(state, fn);
    axo_add_decl(state, (axo_decl){.val=fmtstr("//registered function '%s'", fn.name), .kind=axo_c_register_decl_kind});
  }
#line 2096 "axo_gram.tab.c"
    break;

  case 6: /* declarations: declarations "enum" "identifier" '(' enum_names ')'  */
#line 204 "axo_gram.y"
                                                   {
    new_ptr_one(enm, axo_enum);
    *enm = (yyvsp[-1].enum_type);
    enm->name=alloc_str((yyvsp[-3].str));
    char* decl;
    int decl_sz = 18+(2+(yyvsp[-1].enum_type).len)*strlen((yyvsp[-3].str));  //typedef enum %name{\}name;
    for (int i=0; i<(yyvsp[-1].enum_type).len; i++){
      decl_sz += strlen((yyvsp[-1].enum_type).names[i]) + 2 + 1;
    }
    decl_sz--; //last comma
    decl = (char*)malloc(decl_sz*sizeof(char));
    strcpy(decl, "typedef enum ");
    strcat(decl, (yyvsp[-3].str));
    strcat(decl, "{\n");
    for (int i=0; i<(yyvsp[-1].enum_type).len; i++){
      if(i>0) strcat(decl, ",\n");
      char* field = fmtstr("%s$%s", (yyvsp[-3].str), (yyvsp[-1].enum_type).names[i]);
      strcat(decl, field);
      axo_set_var(state->global_scope, (axo_var){.name=field, .typ=axo_no_typ, .is_const=true});
    }
    strcat(decl, "\n}");
    strcat(decl, (yyvsp[-3].str));
    strcat(decl, ";");
    axo_typ_def td = (axo_typ_def){
      .name=enm->name,
      .typ=(axo_typ){
        .kind=axo_enum_kind,
        .enumerate=enm,
        .def="0"
      },
    };
    axo_set_typ_def(&(yyloc), state, td);
    axo_add_decl(state, (axo_decl){.val=decl, .kind=axo_enum_decl_kind});
  }
#line 2135 "axo_gram.tab.c"
    break;

  case 7: /* declarations: declarations declaration  */
#line 238 "axo_gram.y"
                             {
    axo_add_decl(state, (yyvsp[0].declaration_type));
  }
#line 2143 "axo_gram.tab.c"
    break;

  case 8: /* declaration: struct_def  */
#line 243 "axo_gram.y"
                         { //Fix! Make this use realloc less
    new_ptr_one(strct, axo_struct);
    *strct = (yyvsp[0].struct_type);
    char* decl = empty_str;
    strapnd(&decl, "typedef struct ");
    strapnd(&decl, (yyvsp[0].struct_type).name);
    strapnd(&decl, "{\n");
    for (int i=0; i<(yyvsp[0].struct_type).fields_len; i++){
      strapnd(&decl, axo_name_typ_decl(strct->fields[i].name, strct->fields[i].typ));
      strapnd(&decl, ";\n");
    }
    strapnd(&decl, "}");
    strapnd(&decl, (yyvsp[0].struct_type).name);
    strapnd(&decl, ";");
    axo_typ_def td = (axo_typ_def){
      .name=strct->name,
      .typ=(axo_typ){
        .kind=axo_struct_kind,
        .structure=strct,
        .def="0" //FIX! DEFAULT VALUE!
      },
    };
    axo_set_typ_def(&(yyloc), state, td);
    (yyval.declaration_type) = (axo_decl){.val=decl, .kind=axo_struct_decl_kind};
  }
#line 2173 "axo_gram.tab.c"
    break;

  case 9: /* declaration: "use" "identifier"  */
#line 268 "axo_gram.y"
               {
    (yyval.declaration_type) = axo_use_module(state, &(yylsp[0]), (yyvsp[0].str));
  }
#line 2181 "axo_gram.tab.c"
    break;

  case 10: /* declaration: "include" "string literal"  */
#line 271 "axo_gram.y"
                             {
    (yyval.declaration_type) = axo_include_file(state, &(yylsp[0]), (yyvsp[0].str), true);
  }
#line 2189 "axo_gram.tab.c"
    break;

  case 11: /* declaration: "module" module_info ')'  */
#line 274 "axo_gram.y"
                             {
    axo_load_module_defaults(state, &(yyvsp[-1].module_type));
    (yyval.declaration_type) = axo_add_module(state, (yyvsp[-1].module_type));
  }
#line 2198 "axo_gram.tab.c"
    break;

  case 12: /* declaration: expr '|' val_typ  */
#line 278 "axo_gram.y"
                     {
    if ((yyvsp[-2].expression).lval_kind == axo_var_lval_kind){
      (yyval.declaration_type) = (axo_decl){
        .kind=axo_is_decl_kind,
        .val=axo_name_typ_decl((yyvsp[-2].expression).val, (yyvsp[0].typ_type))
      };
      strapnd(&((yyval.declaration_type).val), ";");
      axo_set_var(top_scope, (axo_var){.name=(yyvsp[-2].expression).val, .typ=axo_clean_typ((yyvsp[0].typ_type)), .is_const=false});
    }else{
      yyerror(&(yylsp[-2]), "Cannot declare non-variable value '%s'.", (yyvsp[-2].expression).val);
    }
  }
#line 2215 "axo_gram.tab.c"
    break;

  case 13: /* declaration: expr '|' val_typ '=' expr  */
#line 290 "axo_gram.y"
                              {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    if ((yyvsp[-4].expression).lval_kind == axo_var_lval_kind){
      (yyval.declaration_type) = (axo_decl){
        .kind=axo_is_decl_kind,
        .val = axo_get_var_decl_assign(&(yyloc), (yyvsp[-4].expression).val, (axo_expr){.typ=(yyvsp[-2].typ_type), .val=(yyvsp[0].expression).val})
      };
      strapnd(&((yyval.declaration_type).val), ";");
      axo_set_var(top_scope, (axo_var){.name=(yyvsp[-4].expression).val, .typ=axo_clean_typ((yyvsp[-2].typ_type)), .is_const=false});
    }else{
      yyerror(&(yylsp[-4]), "Cannot declare non-variable value '%s'.", (yyvsp[-4].expression).val);
    }
  }
#line 2233 "axo_gram.tab.c"
    break;

  case 14: /* declaration: "#typ" "identifier"  */
#line 303 "axo_gram.y"
                {
    char* name = alloc_str((yyvsp[0].str));
    axo_set_typ_def(&(yyloc), state, (axo_typ_def){.name=name, .typ=(axo_typ){.kind=axo_simple_kind, .simple=(axo_simple_t){.name=name, .cname=name}, .def="0"}});
      (yyval.declaration_type) = (axo_decl){
        .kind = axo_typ_def_decl_kind,
        .val = fmtstr("//accepting type %s", (yyvsp[0].str))
      };
  }
#line 2246 "axo_gram.tab.c"
    break;

  case 15: /* declaration: "#typ" struct_def  */
#line 311 "axo_gram.y"
                      {
    axo_struct* strct = alloc_one(axo_struct);
    *strct = (yyvsp[0].struct_type);
    axo_typ_def td = (axo_typ_def){
      .name=(yyvsp[0].struct_type).name,
      .typ=(axo_typ){
        .kind=axo_struct_kind,
        .structure=strct,
        .def="0" //FIX! DEFAULT VALUE!
      },
    };
    axo_set_typ_def(&(yyloc), state, td);
  }
#line 2264 "axo_gram.tab.c"
    break;

  case 16: /* struct_def: "struct" "identifier" '(' func_args ')'  */
#line 326 "axo_gram.y"
                                                {
    axo_struct_field* fields = (axo_struct_field*)malloc((yyvsp[-1].function).f_typ.args_len*sizeof(axo_struct_field));
    for (int i = 0; i<(yyvsp[-1].function).f_typ.args_len; i++){
      fields[i] = (axo_struct_field){
        .name = alloc_str((yyvsp[-1].function).args_names[i]),
        .typ = (yyvsp[-1].function).f_typ.args_types[i],
        .def = (yyvsp[-1].function).f_typ.args_defs[i]
      };
    }
    (yyval.struct_type) = (axo_struct){
      .name=alloc_str((yyvsp[-3].str)),
      .fields=fields,
      .fields_len=(yyvsp[-1].function).f_typ.args_len
    };
  }
#line 2284 "axo_gram.tab.c"
    break;

  case 17: /* module_info: '('  */
#line 343 "axo_gram.y"
                  {
    (yyval.module_type) = axo_new_module();
  }
#line 2292 "axo_gram.tab.c"
    break;

  case 18: /* module_info: module_info "identifier" ':' "string literal"  */
#line 346 "axo_gram.y"
                                        {
    char* str_val = alloc_str(&((yyvsp[0].str)[1]));
    str_val[strlen(str_val)-1] = '\0';
    if (strcmp((yyvsp[-2].str), "name") == 0){
      (yyval.module_type).name = str_val;
    }else if (strcmp((yyvsp[-2].str), "prefix") == 0){
      (yyval.module_type).prefix = str_val;
    }else if (strcmp((yyvsp[-2].str), "version") == 0){
      (yyval.module_type).version = str_val;
    }else if (strcmp((yyvsp[-2].str), "author") == 0){
      (yyval.module_type).author = str_val;
    }else if (strcmp((yyvsp[-2].str), "website") == 0){
      (yyval.module_type).website = str_val;
    }else if (strcmp((yyvsp[-2].str), "license_name") == 0){
      (yyval.module_type).license_name = str_val;
    }else if (strcmp((yyvsp[-2].str), "license") == 0){
      (yyval.module_type).license = str_val;
    }else if (strcmp((yyvsp[-2].str), "description") == 0){
      (yyval.module_type).description = str_val;
    }else
      yyerror(&(yylsp[-2]), "Not a valid module information field.");
    // printf("Setting %s to %s\n", $IDEN, $STRING_LITERAL);
  }
#line 2320 "axo_gram.tab.c"
    break;

  case 19: /* statements: statement  */
#line 371 "axo_gram.y"
                       {axo_add_statement(top_scope, (yyvsp[0].statement_type));}
#line 2326 "axo_gram.tab.c"
    break;

  case 20: /* statements: statements statement  */
#line 372 "axo_gram.y"
                         {axo_add_statement(top_scope, (yyvsp[0].statement_type));}
#line 2332 "axo_gram.tab.c"
    break;

  case 21: /* index_access: '[' expr  */
#line 375 "axo_gram.y"
                        {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.index_access_type) = (axo_index_access){
      .index_count=1,
      .indexes = (axo_expr*)malloc(128*sizeof(axo_expr))
    };
    (yyval.index_access_type).indexes[0] = (yyvsp[0].expression);
  }
#line 2345 "axo_gram.tab.c"
    break;

  case 22: /* index_access: index_access '|' expr  */
#line 383 "axo_gram.y"
                          {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.index_access_type).indexes[(yyval.index_access_type).index_count++] = (yyvsp[0].expression);
  }
#line 2354 "axo_gram.tab.c"
    break;

  case 23: /* identifier: "identifier"  */
#line 389 "axo_gram.y"
                  {
    axo_typ_def* td = axo_get_typ_def(state, (yyvsp[0].str));
    if (td != NULL) {
         (yyval.identifier_type) = (axo_identifier){
        .kind = axo_identifier_typ_kind,
        .data = td
      };
    }else{
      axo_module* mod = axo_get_module(state, (yyvsp[0].str));
      if (mod){
        (yyval.identifier_type) = (axo_identifier){
          .kind = axo_identifier_module_kind,
          .data = mod
        };
      }else{
        (yyval.identifier_type) = (axo_identifier){
          .kind = axo_identifier_var_kind,
          .data = (void*)alloc_str((yyvsp[0].str))
        };
      }
    }
  }
#line 2381 "axo_gram.tab.c"
    break;

  case 24: /* incr_decr_op: expr "++"  */
#line 413 "axo_gram.y"
                            {
    axo_validate_rval(&(yylsp[-1]), (yyvsp[-1].expression));
    (yyval.expression).typ = (yyvsp[-1].expression).typ;
    (yyval.expression).val = fmtstr("%s++", (yyvsp[-1].expression).val);
  }
#line 2391 "axo_gram.tab.c"
    break;

  case 25: /* incr_decr_op: expr "--"  */
#line 418 "axo_gram.y"
                 {
    axo_validate_rval(&(yylsp[-1]), (yyvsp[-1].expression));
    (yyval.expression).typ = (yyvsp[-1].expression).typ;
    (yyval.expression).val = fmtstr("%s--", (yyvsp[-1].expression).val);
  }
#line 2401 "axo_gram.tab.c"
    break;

  case 26: /* expr: "string literal"  */
#line 426 "axo_gram.y"
                      {set_val(&(yyval.expression), axo_str_typ(state), (yyvsp[0].str)); (yyval.expression).kind=axo_expr_normal_kind;}
#line 2407 "axo_gram.tab.c"
    break;

  case 27: /* expr: "integer literal"  */
#line 427 "axo_gram.y"
                    {set_val(&(yyval.expression), axo_int_typ(state), (yyvsp[0].str)); (yyval.expression).kind=axo_expr_normal_kind; (yyval.expression).lval_kind = axo_not_lval_kind;}
#line 2413 "axo_gram.tab.c"
    break;

  case 28: /* expr: "float literal"  */
#line 428 "axo_gram.y"
                  {set_val(&(yyval.expression), axo_float_typ(state), (yyvsp[0].str)); (yyval.expression).kind=axo_expr_normal_kind; (yyval.expression).lval_kind = axo_not_lval_kind;}
#line 2419 "axo_gram.tab.c"
    break;

  case 29: /* expr: "null"  */
#line 429 "axo_gram.y"
           {
    (yyval.expression) = (axo_expr){
      .kind=axo_expr_normal_kind,
      .lval_kind=axo_not_lval_kind,
      .val="((char*)(NULL))",
      .typ=axo_str_typ(state)
    };
  }
#line 2432 "axo_gram.tab.c"
    break;

  case 30: /* expr: expr '+' expr  */
#line 437 "axo_gram.y"
                  {parse_operator(&(yylsp[-1]), &(yyval.expression), (yyvsp[-2].expression), "+", (yyvsp[0].expression)); }
#line 2438 "axo_gram.tab.c"
    break;

  case 31: /* expr: expr '-' expr  */
#line 438 "axo_gram.y"
                  {parse_operator(&(yylsp[-1]), &(yyval.expression), (yyvsp[-2].expression), "-", (yyvsp[0].expression)); }
#line 2444 "axo_gram.tab.c"
    break;

  case 32: /* expr: '-' expr  */
#line 439 "axo_gram.y"
             {asprintf(&((yyval.expression).val), "-%s", (yyvsp[0].expression).val); (yyval.expression).typ = (yyvsp[0].expression).typ; (yyval.expression).kind = axo_expr_normal_kind; }
#line 2450 "axo_gram.tab.c"
    break;

  case 33: /* expr: expr '*' expr  */
#line 440 "axo_gram.y"
                  {parse_operator(&(yylsp[-1]), &(yyval.expression), (yyvsp[-2].expression), "*", (yyvsp[0].expression)); }
#line 2456 "axo_gram.tab.c"
    break;

  case 34: /* expr: expr '/' expr  */
#line 441 "axo_gram.y"
                  {parse_operator(&(yylsp[-1]), &(yyval.expression), (yyvsp[-2].expression), "/", (yyvsp[0].expression)); }
#line 2462 "axo_gram.tab.c"
    break;

  case 35: /* expr: expr '%' expr  */
#line 442 "axo_gram.y"
                  {parse_operator(&(yylsp[-1]), &(yyval.expression), (yyvsp[-2].expression), "%", (yyvsp[0].expression)); }
#line 2468 "axo_gram.tab.c"
    break;

  case 36: /* expr: '(' expr ')'  */
#line 443 "axo_gram.y"
                 {asprintf(&((yyval.expression).val), "(%s)", (yyvsp[-1].expression).val); (yyval.expression).typ = (yyvsp[-1].expression).typ; (yyval.expression).kind = axo_expr_normal_kind; }
#line 2474 "axo_gram.tab.c"
    break;

  case 37: /* expr: expr '@'  */
#line 444 "axo_gram.y"
             { //Referencing
    if ((yyvsp[-1].expression).lval_kind == axo_not_lval_kind)
      yyerror(&(yylsp[-1]), "Cannot reference a non l-value.");
    (yyval.expression).typ.kind = axo_ptr_kind;
    (yyval.expression).typ.subtyp = malloc(sizeof(axo_typ));
    *axo_subtyp((yyval.expression).typ) = (yyvsp[-1].expression).typ;
    asprintf(&((yyval.expression).val), "&%s", (yyvsp[-1].expression).val);
  }
#line 2487 "axo_gram.tab.c"
    break;

  case 38: /* expr: expr '^'  */
#line 452 "axo_gram.y"
             { //Dereferencing
    axo_validate_rval(&(yylsp[-1]), (yyvsp[-1].expression));
    if ((yyvsp[-1].expression).typ.kind != axo_ptr_kind)
      yyerror(&(yylsp[-1]), "Cannot dereference a value of non-pointer type '%s'.", axo_typ_to_str((yyvsp[-1].expression).typ));
    (yyval.expression).typ = *axo_subtyp((yyvsp[-1].expression).typ);
    (yyval.expression).lval_kind=(yyvsp[-1].expression).lval_kind;
    asprintf(&((yyval.expression).val), "(*(%s))", (yyvsp[-1].expression).val);
  }
#line 2500 "axo_gram.tab.c"
    break;

  case 40: /* expr: identifier  */
#line 461 "axo_gram.y"
               {
    char* var_name = "";
    axo_typ_def* td;
    switch((yyvsp[0].identifier_type).kind){
      case axo_identifier_module_kind:
        (yyval.expression) = (axo_expr){
          .val = alloc_str(""),
          .typ = (axo_typ){
            .kind = axo_module_kind,
            .module = (yyvsp[0].identifier_type).data
          },
          .kind = axo_expr_module_kind,
          .lval_kind=axo_not_lval_kind
        };
        break;
      case axo_identifier_var_kind:
        var_name = (char*)((yyvsp[0].identifier_type).data);
        axo_var* var = axo_get_var(top_scope, (char*)((yyvsp[0].identifier_type).data));
        if (var == NULL && rval_now)
          yyerror(&(yylsp[0]), "Variable '%s' undefined before usage.", (char*)((yyvsp[0].identifier_type).data));
        else{
           (yyval.expression) = (axo_expr){
            .val=var_name,
            .typ=(var ? var->typ : axo_no_typ),
            .kind=axo_expr_normal_kind,
            .lval_kind=axo_var_lval_kind
          };
        }
        break;
      case axo_identifier_typ_kind:
        td = (axo_typ_def*)((yyvsp[0].identifier_type).data);
        switch (td->typ.kind){
          case axo_enum_kind:
            (yyval.expression) = (axo_expr){
              .kind=axo_expr_enum_typ_kind,
              .typ=td->typ,
              .val=fmtstr("%s$%s", td->name, ((axo_enum*)(td->typ.enumerate))->names[0])
            };
            break;
          default:
            yyerror(&(yylsp[0]), "Non-enum type '%s' is not an expression.", td->name);
            break;
        }
        break;
      default:
        yyerror(&(yylsp[0]), "Invalid identifier as expression.");
        break;
    }
  }
#line 2554 "axo_gram.tab.c"
    break;

  case 41: /* expr: expr '?' expr ':' expr  */
#line 510 "axo_gram.y"
                           {
    if (axo_validate_rval(&(yylsp[-4]), (yyvsp[-4].expression)) && axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression)) && axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression))){
      if (axo_typ_eq((yyvsp[-2].expression).typ, (yyvsp[0].expression).typ)){
        (yyval.expression) = (axo_expr){
          .kind=axo_expr_normal_kind,
          .lval_kind=axo_not_lval_kind,
          .val=fmtstr("(%s?%s:%s)", (yyvsp[-4].expression).val, (yyvsp[-2].expression).val, (yyvsp[0].expression).val),
          .typ=(yyvsp[-2].expression).typ
        };
      }else{
        yyerror(&(yyloc), "Ternary expression cannot return both '%s' and '%s'.", axo_typ_to_str((yyvsp[-2].expression).typ), axo_typ_to_str((yyvsp[0].expression).typ));
      }
    }
  }
#line 2573 "axo_gram.tab.c"
    break;

  case 42: /* expr: func_call  */
#line 524 "axo_gram.y"
              {(yyval.expression) = axo_call_to_expr((yyvsp[0].function_call));}
#line 2579 "axo_gram.tab.c"
    break;

  case 43: /* expr: expr '<' expr  */
#line 525 "axo_gram.y"
                  {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.expression) = (axo_expr){
      .kind = axo_expr_normal_kind,
      .typ = axo_bool_typ(state),
      .val = fmtstr("%s<%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
    };
  }
#line 2593 "axo_gram.tab.c"
    break;

  case 44: /* expr: expr '>' expr  */
#line 534 "axo_gram.y"
                  {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.expression) = (axo_expr){
      .kind = axo_expr_normal_kind,
      .typ = axo_bool_typ(state),
      .val = fmtstr("%s>%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
    };
  }
#line 2607 "axo_gram.tab.c"
    break;

  case 45: /* expr: expr "==" expr  */
#line 543 "axo_gram.y"
                   {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.expression) = (axo_expr){
      .kind = axo_expr_normal_kind,
      .typ = axo_bool_typ(state),
      .val = fmtstr("%s==%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
    };
  }
#line 2621 "axo_gram.tab.c"
    break;

  case 46: /* expr: expr "!=" expr  */
#line 552 "axo_gram.y"
                   {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.expression) = (axo_expr){
      .kind = axo_expr_normal_kind,
      .typ = axo_bool_typ(state),
      .val = fmtstr("%s!=%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
    };
  }
#line 2635 "axo_gram.tab.c"
    break;

  case 47: /* expr: expr ">=" expr  */
#line 561 "axo_gram.y"
                   {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.expression) = (axo_expr){
      .kind = axo_expr_normal_kind,
      .typ = axo_bool_typ(state),
      .val = fmtstr("%s>=%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
    };
  }
#line 2649 "axo_gram.tab.c"
    break;

  case 48: /* expr: expr "<=" expr  */
#line 570 "axo_gram.y"
                   {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.expression) = (axo_expr){
      .kind = axo_expr_normal_kind,
      .typ = axo_bool_typ(state),
      .val = fmtstr("%s<=%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
    };
  }
#line 2663 "axo_gram.tab.c"
    break;

  case 49: /* expr: expr "||" expr  */
#line 579 "axo_gram.y"
                   {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    if (axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression)) && axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression))){
      (yyval.expression) = (axo_expr){
        .kind = axo_expr_normal_kind,
        .typ = axo_bool_typ(state),
        .val = fmtstr("%s||%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
      };
    }
  }
#line 2679 "axo_gram.tab.c"
    break;

  case 50: /* expr: '!' expr  */
#line 590 "axo_gram.y"
             {
    if (axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression))) {
      (yyval.expression) = (axo_expr){
        .kind = axo_expr_normal_kind,
        .typ = axo_bool_typ(state),
        .val = fmtstr("!(%s)", (yyvsp[0].expression).val),
        .lval_kind = axo_not_lval_kind
      };
      if ((yyvsp[0].expression).typ.kind != axo_simple_kind)
        yyerror(&(yylsp[0]), "Negation can only be used on primitive types (byte, int etc.)");
    }
  }
#line 2696 "axo_gram.tab.c"
    break;

  case 51: /* expr: expr "&&" expr  */
#line 602 "axo_gram.y"
                   {
    if (axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression)) && axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression))){
      (yyval.expression) = (axo_expr){
        .kind = axo_expr_normal_kind,
        .typ = (yyvsp[-2].expression).typ,
        .val = fmtstr("%s&&%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
      };
    }
  }
#line 2710 "axo_gram.tab.c"
    break;

  case 52: /* expr: expr ">>" expr  */
#line 611 "axo_gram.y"
                   {
    if (axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression)) && axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression))){
      (yyval.expression) = (axo_expr){
        .kind = axo_expr_normal_kind,
        .typ = (yyvsp[-2].expression).typ,
        .val = fmtstr("%s>>%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
      };
    }
  }
#line 2724 "axo_gram.tab.c"
    break;

  case 53: /* expr: expr "<<" expr  */
#line 620 "axo_gram.y"
                   {
    if (axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression)) && axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression))){
      (yyval.expression) = (axo_expr){
        .kind = axo_expr_normal_kind,
        .typ = (yyvsp[-2].expression).typ,
        .val = fmtstr("%s<<%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
      };
    }
  }
#line 2738 "axo_gram.tab.c"
    break;

  case 54: /* expr: struct_literal  */
#line 629 "axo_gram.y"
                   {
    (yyval.expression).typ = (yyvsp[0].struct_val_type).typ;
    axo_struct* structure = (axo_struct*)((yyval.expression).typ.structure);
    //size of the string to avoid reallocing: (name){.field1=value1, }
    int v_len = strlen(structure->name) + 5 + 2;
    for (int i=0; i<structure->fields_len; i++){
      v_len+=strlen(structure->fields[i].name)+4+strlen((yyvsp[0].struct_val_type).fields[i]);  //name of a field + 3 cause of .=
    }
    char* v = (char*)malloc(v_len*sizeof(char));
    strcpy(v, "((");
    strcat(v, structure->name);
    strcat(v, "){");
    for (int i=0; i<structure->fields_len; i++){
      if (i!=0) strcat(v, ", ");
      strcat(v, ".");
      strcat(v, structure->fields[i].name);
      strcat(v, "=");
      strcat(v, (yyvsp[0].struct_val_type).fields[i]);
    }
    strcat(v,"})");
    (yyval.expression).val = v;
    (yyval.expression).kind = axo_expr_normal_kind;
  }
#line 2766 "axo_gram.tab.c"
    break;

  case 55: /* expr: expr index_access ']'  */
#line 652 "axo_gram.y"
                         {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    (yylsp[-1]).last_column = (yylsp[0]).last_column;
    axo_arr_typ arr_typ;
    switch((yyvsp[-2].expression).typ.kind){
      case axo_arr_kind:
        arr_typ = axo_get_arr_typ((yyvsp[-2].expression).typ);
        (yylsp[-1]).last_column = (yylsp[0]).last_column;
        if (arr_typ.dim_count != (yyvsp[-1].index_access_type).index_count){
          yyerror(&(yylsp[-1]), "Cannot index %d dimensional array with %d dimensional index.", arr_typ.dim_count, (yyvsp[-1].index_access_type).index_count);
        }else{
          (yyval.expression).val = axo_arr_access_to_str(&(yylsp[-2]), (yyvsp[-2].expression), &(yylsp[-1]), (yyvsp[-1].index_access_type));
          (yyval.expression).typ = arr_typ.subtyp;
          (yyval.expression).lval_kind = ((yyvsp[-2].expression).lval_kind == axo_not_lval_kind ? axo_not_lval_kind : axo_other_lval_kind);
        }
        break;
      case axo_ptr_kind:
        if ((yyvsp[-1].index_access_type).index_count != 1)
          yyerror(&(yylsp[-1]), "Expected a 1 dimensional index to access a pointer, but got %d dimensional index.", (yyvsp[-1].index_access_type).index_count);
        (yyval.expression).typ = *axo_subtyp((yyvsp[-2].expression).typ);
        (yyval.expression).val = fmtstr("%s[%s]", (yyvsp[-2].expression).val, (yyvsp[-1].index_access_type).indexes[0].val);
        break;
      default:
        yyerror(&(yylsp[-2]), "Cannot index an expression of type '%s'.", axo_typ_to_str((yyvsp[-2].expression).typ));
        break;
    }
    (yyval.expression).kind=axo_expr_normal_kind;
  }
#line 2799 "axo_gram.tab.c"
    break;

  case 56: /* expr: expr ".field"  */
#line 680 "axo_gram.y"
                   {
    axo_validate_rval(&(yylsp[-1]), (yyvsp[-1].expression));
    axo_enum* enumerate;
    axo_struct* structure;
    axo_var* var;
    axo_module* mod;
    switch((yyvsp[-1].expression).kind){
      case axo_expr_module_kind:
        mod = (axo_module*)((yyvsp[-1].expression).typ.module);
        var = axo_get_var(state->global_scope, fmt_str(s_str(1024), "%s%s", mod->prefix, (yyvsp[0].str)));        
        if (var == NULL && rval_now)
          yyerror(&(yylsp[0]), "Module '%s' doesn't have variable '%s'.", mod->name, (yyvsp[0].str));
        (yyval.expression) = (axo_expr){
          .val = fmtstr("%s%s", mod->prefix, (yyvsp[0].str)),
          .typ=(var ? var->typ : axo_no_typ),
          .kind = axo_expr_normal_kind,
          .lval_kind = axo_var_lval_kind
        };
        break;
      case axo_expr_enum_typ_kind:
        enumerate = (axo_enum*)((yyvsp[-1].expression).typ.enumerate);
        int index = -1;
        for (int i=0; i<enumerate->len; i++){
          if (strcmp(enumerate->names[i], (yyvsp[0].str))==0){
            index = i;
            break;
          }
        }
        if (index<0)
         yyerror(&(yyloc), "Enum '%s' doesn't have a field named '%s'.", enumerate->name, (yyvsp[0].str));
        else{
          (yyval.expression) = (axo_expr){
            .kind=axo_expr_normal_kind,
            .typ=(yyvsp[-1].expression).typ,
            .val=fmtstr("%s$%s", enumerate->name, enumerate->names[index])
          };
        }
        break;
      default:
        switch((yyvsp[-1].expression).typ.kind){
          case axo_struct_kind:
            structure = (axo_struct*)((yyvsp[-1].expression).typ.structure);
            int index = -1;
            for (int i=0;i<structure->fields_len; i++){
              if (strcmp(structure->fields[i].name, (yyvsp[0].str))==0){
                index = i;
                break;
              }
            }
            if (index<0) yyerror(&(yyloc), "Struct '%s' doesn't have a field named '%s'.", structure->name, (yyvsp[0].str));
            else{
              (yyval.expression) = (axo_expr){
                .kind=axo_expr_normal_kind,
                .val=fmtstr("%s.%s", (yyvsp[-1].expression).val, (yyvsp[0].str)),
                .typ=structure->fields[index].typ
              };
            }
            break;
          case axo_arr_kind: //.len, .data, .dims
            (yyval.expression) = axo_get_array_field(state, &(yylsp[-1]), &(yylsp[0]), (yyvsp[-1].expression), (yyvsp[0].str));
            break;
          default:
            yyerror(&(yylsp[-1]), "Cannot get field of type '%s'", axo_typ_to_str((yyvsp[-1].expression).typ));
          break;
        }
        break;
    }
  }
#line 2872 "axo_gram.tab.c"
    break;

  case 59: /* expr: expr '.' '(' val_typ ')'  */
#line 750 "axo_gram.y"
                             {
    axo_validate_rval(&(yylsp[-4]), (yyvsp[-4].expression));
    switch((yyvsp[-4].expression).typ.kind){
      case axo_simple_kind:
        if ((yyvsp[-1].typ_type).kind != axo_simple_kind)
          yyerror(&(yyloc), "Cannot cast type '%s' to '%s'.", axo_typ_to_str((yyvsp[-4].expression).typ), axo_typ_to_str((yyvsp[-1].typ_type)));
        else
          (yyval.expression) = (axo_expr){
            .typ=(yyvsp[-1].typ_type),
            .val=fmtstr("((%s)(%s))", axo_typ_to_c_str((yyvsp[-1].typ_type)), (yyvsp[-4].expression).val),
            .kind=axo_expr_normal_kind,
            .lval_kind=(yyvsp[-4].expression).lval_kind
          };
        break;
      case axo_ptr_kind:
        if ((yyvsp[-1].typ_type).kind != axo_ptr_kind)
          yyerror(&(yyloc), "Cannot cast type '%s' to '%s'.", axo_typ_to_str((yyvsp[-4].expression).typ), axo_typ_to_str((yyvsp[-1].typ_type)));
        else
          (yyval.expression) = (axo_expr){
            .typ=(yyvsp[-1].typ_type),
            .val=fmtstr("((%s)(%s))", axo_typ_to_c_str((yyvsp[-1].typ_type)), (yyvsp[-4].expression).val),
            .kind=axo_expr_normal_kind,
            .lval_kind=(yyvsp[-4].expression).lval_kind
          };
        break;
      default:
          yyerror(&(yyloc), "Cannot cast type '%s' to '%s'.", axo_typ_to_str((yyvsp[-4].expression).typ), axo_typ_to_str((yyvsp[-1].typ_type)));
        break;
    }
  }
#line 2907 "axo_gram.tab.c"
    break;

  case 60: /* stat_arr_literal_start: arr_lit_start expr ',' expr  */
#line 782 "axo_gram.y"
                                                     {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    if (!axo_typ_eq((yyvsp[-2].expression).typ, (yyvsp[0].expression).typ)){
            yyerror(&(yylsp[0]), "A '%s' value cannot be an element of a '%s' array.", axo_typ_to_str((yyvsp[0].expression).typ), axo_typ_to_str((yyvsp[-2].expression).typ));
    }
    (yyval.arr_lit_type) = (axo_arr_lit){
      .dynamic=(yyvsp[-3].bool_type),
      .len=(int[]){0},
      .dim_count=1,
      .count=2,
      .val=fmtstr("%s,%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val),
      .typ=(yyvsp[-2].expression).typ
    };
  }
#line 2927 "axo_gram.tab.c"
    break;

  case 61: /* stat_arr_literal_start: empty_arr_dims ']' '[' expr ',' expr  */
#line 797 "axo_gram.y"
                                         {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    if (!axo_typ_eq((yyvsp[-2].expression).typ, (yyvsp[0].expression).typ)){
            yyerror(&(yylsp[0]), "A '%s' value cannot be an element of a '%s' array.", axo_typ_to_str((yyvsp[0].expression).typ), axo_typ_to_str((yyvsp[-2].expression).typ));
    }
    (yyval.arr_lit_type) = (axo_arr_lit){
      .dynamic=(yyvsp[-5].empty_arr_lit_type).dynamic,
      .len=(yyvsp[-5].empty_arr_lit_type).len,
      .dim_count=(yyvsp[-5].empty_arr_lit_type).dim_count,
      .count=2,
      .val= fmtstr("%s, %s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val),
      .typ=(yyvsp[-2].expression).typ
    };
  }
#line 2947 "axo_gram.tab.c"
    break;

  case 62: /* stat_arr_literal_start: stat_arr_literal_start ',' expr  */
#line 812 "axo_gram.y"
                                    {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    if (!axo_typ_eq((yyval.arr_lit_type).typ, (yyvsp[0].expression).typ)){
            yyerror(&(yylsp[0]), "A '%s' value cannot be an element of a '%s' array.", axo_typ_to_str((yyvsp[0].expression).typ), axo_typ_to_str((yyval.arr_lit_type).typ));
    }
    strapnd(&(yyval.arr_lit_type).val, ",");
    strapnd(&(yyval.arr_lit_type).val, (yyvsp[0].expression).val);
    (yyval.arr_lit_type).count++;
  }
#line 2961 "axo_gram.tab.c"
    break;

  case 63: /* arr_lit_start: '['  */
#line 823 "axo_gram.y"
                    {
    (yyval.bool_type) = false;
  }
#line 2969 "axo_gram.tab.c"
    break;

  case 64: /* arr_lit_start: '[' '?'  */
#line 826 "axo_gram.y"
            {
    (yyval.bool_type) = true;
  }
#line 2977 "axo_gram.tab.c"
    break;

  case 65: /* empty_arr_dims: arr_lit_start "integer literal"  */
#line 831 "axo_gram.y"
                                               {
    (yyval.empty_arr_lit_type) = (axo_empty_arr_lit){
      .dynamic=(yyvsp[-1].bool_type),
      .len=malloc(axo_empty_arr_lit_cap),
      .dim_count=1
    };
    (yyval.empty_arr_lit_type).len[0] = atoi((yyvsp[0].str));
  }
#line 2990 "axo_gram.tab.c"
    break;

  case 66: /* empty_arr_dims: empty_arr_dims '|' "integer literal"  */
#line 839 "axo_gram.y"
                                       {
    (yyval.empty_arr_lit_type).len[(yyval.empty_arr_lit_type).dim_count++] = atoi((yyvsp[0].str));
  }
#line 2998 "axo_gram.tab.c"
    break;

  case 67: /* stat_arr_literal: arr_lit_start expr ',' ']'  */
#line 844 "axo_gram.y"
                                              {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    axo_typ subtyp[1] = {(yyvsp[-2].expression).typ};
    (yyval.arr_lit_type) = (axo_arr_lit){
      .dynamic=(yyvsp[-3].bool_type),
      .len=(int[]){1},
      .dim_count=1,
      .count=1,
      .val= (yyvsp[-3].bool_type) ?
          fmtstr("axo_arr_new_dyn(axo_dyn_bytes_cpy(%s, (%s){%s}, sizeof(%s)), axo_dyn_bytes_cpy(axo_arr_dim_t*, (axo_arr_dim_t[]){1}, sizeof(axo_arr_dim_t)))",
          axo_typ_to_c_str((axo_typ){.kind=axo_ptr_kind, .subtyp=subtyp}), axo_c_arr_of_typ((yyvsp[-2].expression).typ, "1"), (yyvsp[-2].expression).val, axo_typ_to_c_str((yyvsp[-2].expression).typ))
          : fmtstr("axo_arr_new_stat((%s){%s}, ((axo_arr_dim_t[]){1}))",
          axo_c_arr_of_typ((yyvsp[-2].expression).typ, "1"), (yyvsp[-2].expression).val),
      .typ=(yyvsp[-2].expression).typ
    };
  }
#line 3019 "axo_gram.tab.c"
    break;

  case 68: /* stat_arr_literal: stat_arr_literal_start ']'  */
#line 860 "axo_gram.y"
                               {
    char* data_str = (yyval.arr_lit_type).val;
    (yyval.arr_lit_type).val = NULL;
    if ((yyval.arr_lit_type).len[0] != 0){
      unsigned expected = 1;
      for (int i=0; i<(yyval.arr_lit_type).dim_count; i++)
        expected *= (yyval.arr_lit_type).len[i];
      if (expected != (yyval.arr_lit_type).count)
        yyerror(&(yyloc), "Expected %u elements, but provided %u.", expected, (yyval.arr_lit_type).count);
    }else{
      (yyval.arr_lit_type).len = (int[]){(yyval.arr_lit_type).count};
      (yyval.arr_lit_type).dim_count = 1;
    }
    char* len_str = alloc_str("{");
    char hlpr[128];
    for (int i=0; i<(yyval.arr_lit_type).dim_count; i++){
      if (i>0) strapnd(&len_str, ",");
      sprintf(hlpr, "%d", (yyval.arr_lit_type).len[i]);
      strapnd(&len_str, hlpr);
    }
    axo_typ subtyp[1] = {(yyval.arr_lit_type).typ};
    char count_str[16] = "";
    sprintf(count_str, "%d", (yyval.arr_lit_type).count);
    (yyval.arr_lit_type).val= (yyval.arr_lit_type).dynamic ?
      fmtstr("axo_arr_new_dyn(axo_dyn_bytes_cpy(%s, ((%s){%s}), %u*sizeof(%s)), axo_dyn_bytes_cpy(axo_arr_dim_t*, ((axo_arr_dim_t[])%s}), %d*sizeof(axo_arr_dim_t)))",
      axo_typ_to_c_str((axo_typ){.kind=axo_ptr_kind, .subtyp=subtyp}), axo_c_arr_of_typ((yyval.arr_lit_type).typ, count_str), data_str, (yyval.arr_lit_type).count, axo_typ_to_c_str((yyval.arr_lit_type).typ), len_str, (yyval.arr_lit_type).dim_count)
      : fmtstr("axo_arr_new_stat(((%s){%s}), ((axo_arr_dim_t[])%s}))",
      axo_c_arr_of_typ((yyval.arr_lit_type).typ, ""), data_str, len_str);
    free(len_str);
  }
#line 3054 "axo_gram.tab.c"
    break;

  case 69: /* arr_literal: stat_arr_literal  */
#line 892 "axo_gram.y"
                               {
    (yyval.expression)=(axo_expr){
      .kind=axo_expr_normal_kind,
      .lval_kind=axo_not_lval_kind,
      .val=(yyvsp[0].arr_lit_type).val,
    };
    axo_arr_typ* arr_typ = alloc_one(axo_arr_typ);
    arr_typ->subtyp = (yyvsp[0].arr_lit_type).typ;
    arr_typ->dim_count = (yyvsp[0].arr_lit_type).dim_count;
    (yyval.expression).typ = (axo_typ){
      .kind=axo_arr_kind,
      .arr=arr_typ,
      .def=NULL
    };
  }
#line 3074 "axo_gram.tab.c"
    break;

  case 70: /* arr_literal: empty_arr_dims ']' val_typ  */
#line 907 "axo_gram.y"
                               {
    char* dims_str = empty_str;
    unsigned total_sz = 1;
    for (int i=0; i<(yyvsp[-2].empty_arr_lit_type).dim_count; i++){
      total_sz *= (yyvsp[-2].empty_arr_lit_type).len[i];
      if (i>0) strapnd(&dims_str, ",");
      asprintf(&dims_str, "%s%d", dims_str, (yyvsp[-2].empty_arr_lit_type).len[i]);
    }
    strapnd(&dims_str, "");
    axo_typ typ = (axo_typ){
      .kind=axo_arr_kind,
      .arr=malloc(sizeof(axo_arr_typ)),
      .def=NULL
    };
    axo_get_arr_typ(typ).subtyp = (yyvsp[0].typ_type);
    axo_get_arr_typ(typ).dim_count = (yyvsp[-2].empty_arr_lit_type).dim_count;
    char sz_str[128];
    sprintf(sz_str, "%u", total_sz);
    (yyval.expression)=(axo_expr){
      .kind=axo_expr_normal_kind,
      .lval_kind=axo_not_lval_kind,
      .val= (yyvsp[-2].empty_arr_lit_type).dynamic ?
          fmtstr("axo_arr_new_dyn(malloc((%u)*sizeof(%s)), axo_dyn_bytes_cpy(axo_arr_dim_t*, (axo_arr_dim_t[]){%s}, (%d)*sizeof(axo_arr_dim_t)))", total_sz, axo_typ_to_c_str(axo_get_arr_typ(typ).subtyp), dims_str, (yyvsp[-2].empty_arr_lit_type).dim_count)
          : fmtstr("axo_arr_new_stat((%s){}, ((axo_arr_dim_t[]){%s}))", axo_c_arr_of_typ((yyvsp[0].typ_type), sz_str), dims_str),
      .typ=typ
    };
  }
#line 3106 "axo_gram.tab.c"
    break;

  case 73: /* matching_statement: expr  */
#line 938 "axo_gram.y"
                          {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.statement_type).val = (yyvsp[0].expression).val;
    strapnd(&((yyval.statement_type).val), ";");
    (yyval.statement_type).kind = axo_call_statement_kind;
  }
#line 3117 "axo_gram.tab.c"
    break;

  case 74: /* matching_statement: "ret" expr  */
#line 944 "axo_gram.y"
               {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.statement_type).val=fmtstr("return %s;", (yyvsp[0].expression).val);
    (yyval.statement_type).kind = axo_ret_statement_kind;
    axo_var* parent_func = (axo_var*)(top_scope->parent_func);
    if (parent_func){
      axo_typ* ret_typ = &(((axo_func_typ*)(parent_func->typ.func_typ))->ret_typ);
      if (axo_is_no_typ(*ret_typ)){
        *ret_typ = (yyvsp[0].expression).typ;
      }else if(!axo_typ_eq(*ret_typ, (yyvsp[0].expression).typ)){
        char hlpr[64] = "";
        strcpy(hlpr, axo_typ_to_str(*ret_typ));
        yyerror(&(yylsp[0]), "Cannot return %s type, expected %s type to be returned.", axo_typ_to_str((yyvsp[0].expression).typ), hlpr);
      }
    }else{
      yyerror(&(yylsp[-1]), "Couldn't return outside of a function body.");
    }
  }
#line 3140 "axo_gram.tab.c"
    break;

  case 75: /* matching_statement: code_scope  */
#line 962 "axo_gram.y"
               {
    (yyval.statement_type) = axo_scope_to_statement((yyvsp[0].scope));
  }
#line 3148 "axo_gram.tab.c"
    break;

  case 76: /* matching_statement: expr '|' val_typ  */
#line 965 "axo_gram.y"
                     {
    if ((yyvsp[-2].expression).lval_kind == axo_var_lval_kind){
      (yyval.statement_type) = (axo_statement){
        .kind=axo_var_is_decl_statement_kind,
        .val=axo_name_typ_decl((yyvsp[-2].expression).val, (yyvsp[0].typ_type))
      };
      strapnd(&((yyval.statement_type).val), ";");
      axo_set_var(top_scope, (axo_var){.name=(yyvsp[-2].expression).val, .typ=axo_clean_typ((yyvsp[0].typ_type)), .is_const=false});
    }else{
      yyerror(&(yylsp[-2]), "Cannot declare non-variable value '%s'.", (yyvsp[-2].expression).val);
    }
  }
#line 3165 "axo_gram.tab.c"
    break;

  case 77: /* matching_statement: expr '|' val_typ '=' expr  */
#line 977 "axo_gram.y"
                              {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    if ((yyvsp[-4].expression).lval_kind == axo_var_lval_kind){
      (yyval.statement_type) = (axo_statement){
        .kind=axo_assignment_statement_kind,
        .val = axo_get_var_decl_assign(&(yyloc), (yyvsp[-4].expression).val, (axo_expr){.typ=(yyvsp[-2].typ_type), .val=(yyvsp[0].expression).val})
      };
      strapnd(&((yyval.statement_type).val), ";");
      axo_set_var(top_scope, (axo_var){.name=(yyvsp[-4].expression).val, .typ=axo_clean_typ((yyvsp[-2].typ_type)), .is_const=false});
    }else{
      yyerror(&(yylsp[-4]), "Cannot declare non-variable value '%s'.", (yyvsp[-4].expression).val);
    }
  }
#line 3183 "axo_gram.tab.c"
    break;

  case 78: /* matching_statement: "continue"  */
#line 990 "axo_gram.y"
               {
    if (in_loop_count<=0) yyerror(&(yylsp[0]), "No loop to continue.");
    (yyval.statement_type) = (axo_statement){
      .kind = axo_continue_statement_kind,
      .val = "continue;"
    };
  }
#line 3195 "axo_gram.tab.c"
    break;

  case 79: /* matching_statement: "break"  */
#line 997 "axo_gram.y"
            {
    if (in_loop_count<=0) yyerror(&(yylsp[0]), "No loop to break out of.");
    (yyval.statement_type) = (axo_statement){
      .kind = axo_break_statement_kind,
      .val = "break;"
    };
  }
#line 3207 "axo_gram.tab.c"
    break;

  case 84: /* if_condition: "if" expr  */
#line 1010 "axo_gram.y"
                            {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 3216 "axo_gram.tab.c"
    break;

  case 85: /* matching_if_statement: if_condition matching_statement "else" matching_statement  */
#line 1016 "axo_gram.y"
                                                                                     {
    (yyval.statement_type).val = fmtstr("if(%s)%s\nelse\n%s", (yyvsp[-3].expression).val, (yyvsp[-2].statement_type).val, (yyvsp[0].statement_type).val);
  }
#line 3224 "axo_gram.tab.c"
    break;

  case 90: /* non_matching_if_statement: if_condition statement  */
#line 1027 "axo_gram.y"
                                                   {
    (yyval.statement_type).val = fmtstr("if(%s)\n%s", (yyvsp[-1].expression).val, (yyvsp[0].statement_type).val);
  }
#line 3232 "axo_gram.tab.c"
    break;

  case 91: /* non_matching_if_statement: if_condition matching_statement "else" non_matching_statement  */
#line 1030 "axo_gram.y"
                                                                     {
    (yyval.statement_type).val = fmtstr("if(%s)\n%s\nelse\n%s", (yyvsp[-3].expression).val, (yyvsp[-2].statement_type).val, (yyvsp[0].statement_type).val);
  }
#line 3240 "axo_gram.tab.c"
    break;

  case 92: /* till_loop_start: "till" '(' "identifier" '=' expr ')'  */
#line 1035 "axo_gram.y"
                                                   {
    (yyval.till_loop_type).iter = (yyvsp[-3].str);
    (yyval.till_loop_type).start = "0";
    (yyval.till_loop_type).lim = (yyvsp[-1].expression);
    printf("till iter %s created scope\n", (yyval.till_loop_type).iter);
    axo_push_scope(scopes, axo_new_scope(top_scope));
    axo_set_var(top_scope, (axo_var){.typ=state->int_def->typ, .name=(yyval.till_loop_type).iter, .is_const=false});
  }
#line 3253 "axo_gram.tab.c"
    break;

  case 93: /* while_loop_base: "while" expr  */
#line 1045 "axo_gram.y"
                               {
    if (axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression)))
      (yyval.str) = alloc_str((yyvsp[0].expression).val);
    in_loop_count++;
  }
#line 3263 "axo_gram.tab.c"
    break;

  case 94: /* matching_while: while_loop_base matching_statement  */
#line 1052 "axo_gram.y"
                                                    {
    (yyval.statement_type) = (axo_statement){
      .kind=axo_while_statement_kind,
      .val=fmtstr("while(%s)\n%s", (yyvsp[-1].str), (yyvsp[0].statement_type).val),
    };
    in_loop_count--;
  }
#line 3275 "axo_gram.tab.c"
    break;

  case 95: /* non_matching_while: while_loop_base non_matching_statement  */
#line 1061 "axo_gram.y"
                                                            {
    (yyval.statement_type) = (axo_statement){
      .kind=axo_while_statement_kind,
      .val=fmtstr("while(%s)\n%s", (yyvsp[-1].str), (yyvsp[0].statement_type).val),
    };
    in_loop_count--;
  }
#line 3287 "axo_gram.tab.c"
    break;

  case 96: /* for_loop_start: "for"  */
#line 1070 "axo_gram.y"
                       {
    axo_push_scope(scopes, axo_new_scope(top_scope));
  }
#line 3295 "axo_gram.tab.c"
    break;

  case 97: /* for_loop_init: for_loop_start statement  */
#line 1075 "axo_gram.y"
                                         {
    (yyval.for_loop_type).start = (yyvsp[0].statement_type).val;
  }
#line 3303 "axo_gram.tab.c"
    break;

  case 98: /* for_loop_base: for_loop_init ',' expr ',' statement  */
#line 1080 "axo_gram.y"
                                                     {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    char* iter = (yyvsp[0].statement_type).val;
    iter[strlen(iter)-1] = '\0';
    (yyval.for_loop_type) = (axo_for_loop){
      .start = (yyvsp[-4].for_loop_type).start,
      .condition = (yyvsp[-2].expression).val,
      .iteration = iter,
    };
    in_loop_count++;
  }
#line 3319 "axo_gram.tab.c"
    break;

  case 99: /* for_loop_base: till_loop_start  */
#line 1091 "axo_gram.y"
                    {
    (yyval.for_loop_type) = (axo_for_loop){
      .start = fmtstr("int %s=%s;", (yyvsp[0].till_loop_type).iter, (yyvsp[0].till_loop_type).start),
      .condition = fmtstr("%s<%s", (yyvsp[0].till_loop_type).iter, (yyvsp[0].till_loop_type).lim.val),
      .iteration = fmtstr("%s++", (yyvsp[0].till_loop_type).iter),
    };
    in_loop_count++;
  }
#line 3332 "axo_gram.tab.c"
    break;

  case 100: /* matching_for_loop: for_loop_base matching_statement  */
#line 1102 "axo_gram.y"
                                                     {
    (yyvsp[-1].for_loop_type).body = (yyvsp[0].statement_type).val;
    (yyval.statement_type).kind = axo_for_statement_kind;
    (yyval.statement_type).val=axo_for_loop_to_str((yyvsp[-1].for_loop_type));
    scopes->len--;
    in_loop_count--;
  }
#line 3344 "axo_gram.tab.c"
    break;

  case 101: /* non_matching_for_loop: for_loop_base non_matching_statement  */
#line 1110 "axo_gram.y"
                                                             {
    (yyvsp[-1].for_loop_type).body = (yyvsp[0].statement_type).val;
    (yyval.statement_type).kind = axo_for_statement_kind;
    (yyval.statement_type).val=axo_for_loop_to_str((yyvsp[-1].for_loop_type));
    scopes->len--;
    in_loop_count--;
  }
#line 3356 "axo_gram.tab.c"
    break;

  case 102: /* each_iter_dims: '[' expr  */
#line 1119 "axo_gram.y"
                          {
    (yyval.each_loop_type) = (axo_each_loop){
      .dim_count=1,
      .dim_iters=(axo_expr*)malloc(128*sizeof(axo_expr)),
      .locs=(YYLTYPE*)malloc(128*sizeof(YYLTYPE))
    };
    (yyval.each_loop_type).dim_iters[0] = (yyvsp[0].expression);
    ((YYLTYPE*)((yyval.each_loop_type).locs))[3] = (yylsp[0]);
  }
#line 3370 "axo_gram.tab.c"
    break;

  case 103: /* each_iter_dims: '[' '|' expr  */
#line 1128 "axo_gram.y"
                 {
    (yyval.each_loop_type) = (axo_each_loop){
      .dim_count=2,
      .dim_iters=(axo_expr*)malloc(128*sizeof(axo_expr)),
      .locs=(YYLTYPE*)malloc(128*sizeof(YYLTYPE))
    };
    (yyval.each_loop_type).dim_iters[0] = (axo_expr){.val=NULL};
    (yyval.each_loop_type).dim_iters[1] = (yyvsp[0].expression);
    ((YYLTYPE*)((yyval.each_loop_type).locs))[4] = (yylsp[0]);
  }
#line 3385 "axo_gram.tab.c"
    break;

  case 104: /* each_iter_dims: each_iter_dims '|' expr  */
#line 1138 "axo_gram.y"
                            {
    (yyval.each_loop_type).dim_iters[(yyval.each_loop_type).dim_count] = (yyvsp[0].expression);
    ((YYLTYPE*)((yyval.each_loop_type).locs))[3+(yyval.each_loop_type).dim_count++] = (yylsp[0]);
  }
#line 3394 "axo_gram.tab.c"
    break;

  case 105: /* each_iter_dims: each_iter_dims '|'  */
#line 1142 "axo_gram.y"
                       {
    (yyval.each_loop_type).dim_iters[(yyval.each_loop_type).dim_count++] = (axo_expr){.val=NULL};
  }
#line 3402 "axo_gram.tab.c"
    break;

  case 106: /* each_loop_start: "for" "each"  */
#line 1147 "axo_gram.y"
                               {
    axo_push_scope(scopes, axo_new_scope(top_scope));
    in_loop_count++;
  }
#line 3411 "axo_gram.tab.c"
    break;

  case 107: /* each_loop_base: each_loop_start identifier "in" expr  */
#line 1153 "axo_gram.y"
                                                     {
    (yyval.each_loop_type) = (axo_each_loop){
      .dim_count=axo_get_arr_typ((yyvsp[0].expression).typ).dim_count,
      .dim_iters=malloc(axo_get_arr_typ((yyvsp[0].expression).typ).dim_count*sizeof(axo_expr)),
      .value_iter=(yyvsp[-2].identifier_type),
      .collection=(yyvsp[0].expression),
      .locs=malloc(3*sizeof(YYLTYPE*))
    };
    for (int i=0; i<(yyval.each_loop_type).dim_count; i++)
      (yyval.each_loop_type).dim_iters[i].val = NULL;
    ((YYLTYPE*)((yyval.each_loop_type).locs))[0] = (yylsp[-2]);
    ((YYLTYPE*)((yyval.each_loop_type).locs))[2] = (yylsp[0]);
    axo_parse_each_loop(&(yyval.each_loop_type), state, top_scope, in_loop_count);
  }
#line 3430 "axo_gram.tab.c"
    break;

  case 108: /* each_loop_base: each_loop_start identifier ',' each_iter_dims ']' "in" expr  */
#line 1167 "axo_gram.y"
                                                                {
    (yylsp[-3]).last_column = (yylsp[-2]).last_column;
    (yyval.each_loop_type) = (axo_each_loop){
      .dim_count=(yyvsp[-3].each_loop_type).dim_count,
      .dim_iters=(yyvsp[-3].each_loop_type).dim_iters,
      .value_iter=(axo_identifier){.kind=axo_no_identifier_kind, .data=NULL},
      .collection=(yyvsp[0].expression),
      .locs=(yyvsp[-3].each_loop_type).locs
    };
    ((YYLTYPE*)((yyval.each_loop_type).locs))[0] = (yylsp[-5]);
    ((YYLTYPE*)((yyval.each_loop_type).locs))[1] = (yylsp[-3]);
    ((YYLTYPE*)((yyval.each_loop_type).locs))[2] = (yylsp[0]);
    axo_parse_each_loop(&(yyval.each_loop_type), state, top_scope, in_loop_count);
  }
#line 3449 "axo_gram.tab.c"
    break;

  case 109: /* each_loop_base: each_loop_start each_iter_dims ']' ',' identifier "in" expr  */
#line 1181 "axo_gram.y"
                                                                {
    (yylsp[-5]).last_column = (yylsp[-4]).last_column;
    (yyval.each_loop_type) = (axo_each_loop){
      .dim_count=(yyvsp[-5].each_loop_type).dim_count,
      .dim_iters=(yyvsp[-5].each_loop_type).dim_iters,
      .value_iter=(yyvsp[-2].identifier_type),
      .collection=(yyvsp[0].expression),
      .locs=(yyvsp[-5].each_loop_type).locs
    };
    ((YYLTYPE*)((yyval.each_loop_type).locs))[0] = (yylsp[-2]);
    ((YYLTYPE*)((yyval.each_loop_type).locs))[1] = (yylsp[-5]);
    ((YYLTYPE*)((yyval.each_loop_type).locs))[2] = (yylsp[0]);
    axo_parse_each_loop(&(yyval.each_loop_type), state, top_scope, in_loop_count);
  }
#line 3468 "axo_gram.tab.c"
    break;

  case 110: /* each_loop_base: each_loop_start each_iter_dims ']' "in" expr  */
#line 1195 "axo_gram.y"
                                                 {
    (yylsp[-3]).last_column = (yylsp[-2]).last_column;
    (yyval.each_loop_type) = (axo_each_loop){
      .dim_count=(yyvsp[-3].each_loop_type).dim_count,
      .dim_iters=(yyvsp[-3].each_loop_type).dim_iters,
      .value_iter=(axo_identifier){.kind=axo_no_identifier_kind, .data=NULL},
      .collection=(yyvsp[0].expression),
      .locs=(yyvsp[-3].each_loop_type).locs
    };
    ((YYLTYPE*)((yyval.each_loop_type).locs))[1] = (yylsp[-3]);
    ((YYLTYPE*)((yyval.each_loop_type).locs))[2] = (yylsp[0]);
    axo_parse_each_loop(&(yyval.each_loop_type), state, top_scope, in_loop_count);
  }
#line 3486 "axo_gram.tab.c"
    break;

  case 111: /* matching_each_loop: each_loop_base matching_statement  */
#line 1211 "axo_gram.y"
                                                       {
    (yyvsp[-1].each_loop_type).body = (yyvsp[0].statement_type).val;
    (yyval.statement_type) = axo_each_to_statement((yyvsp[-1].each_loop_type));
    scopes->len--;
    in_loop_count--;
  }
#line 3497 "axo_gram.tab.c"
    break;

  case 112: /* non_matching_each_loop: each_loop_base non_matching_statement  */
#line 1219 "axo_gram.y"
                                                               {
    (yyvsp[-1].each_loop_type).body = (yyvsp[0].statement_type).val;
    (yyval.statement_type) = axo_each_to_statement((yyvsp[-1].each_loop_type));
    scopes->len--;
    in_loop_count--;
  }
#line 3508 "axo_gram.tab.c"
    break;

  case 113: /* assign_op: '='  */
#line 1227 "axo_gram.y"
                {
    rval_now = true;
  }
#line 3516 "axo_gram.tab.c"
    break;

  case 114: /* assignment: expr assign_op expr  */
#line 1232 "axo_gram.y"
                                 {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.expression).kind=axo_expr_normal_kind;
    axo_typ l_typ = (yyvsp[-2].expression).typ;
    switch((yyvsp[-2].expression).lval_kind){
      case axo_var_lval_kind:
        if ((yyvsp[-2].expression).typ.kind == axo_no_kind){
          l_typ = axo_clean_typ((yyvsp[0].expression).typ);
          (yyval.expression).val = axo_get_var_decl_assign(&(yyloc), (yyvsp[-2].expression).val, (axo_expr){.typ=l_typ, .val=(yyvsp[0].expression).val});
          axo_set_var(top_scope, (axo_var){.typ = l_typ, .name = (yyvsp[-2].expression).val, .is_const=false});
        }else{
          (yyval.expression).val = fmtstr("%s=%s",(yyvsp[-2].expression).val, (yyvsp[0].expression).val);
        }
        break;
      case axo_not_lval_kind:
        yyerror(&(yylsp[-2]), "Cannot assign to a non-lvalue");
        break;
      default:
        if (!axo_typ_eq(l_typ, (yyvsp[0].expression).typ))
          yyerror(&(yyloc), "Cannot assign '%s' to '%s'.", axo_typ_to_str((yyvsp[0].expression).typ), axo_typ_to_str(l_typ));
        else{
          (yyval.expression).val = fmtstr("%s=%s",(yyvsp[-2].expression).val, (yyvsp[0].expression).val);
        }
        break;
    }
    (yyval.expression).typ = l_typ;
    rval_now=false;
  }
#line 3549 "axo_gram.tab.c"
    break;

  case 115: /* arr_multidim_typ: '[' '|'  */
#line 1262 "axo_gram.y"
                           {
    axo_arr_typ* arr_typ = alloc_one(axo_arr_typ);
    *arr_typ = (axo_arr_typ){
      .dim_count=2
    };
    (yyval.typ_type) = (axo_typ){
      .kind=axo_arr_kind,
      .arr=arr_typ
    };
  }
#line 3564 "axo_gram.tab.c"
    break;

  case 116: /* arr_multidim_typ: arr_multidim_typ '|'  */
#line 1272 "axo_gram.y"
                         {
    (yyval.typ_type)=(yyvsp[-1].typ_type);
    axo_get_arr_typ((yyval.typ_type)).dim_count++;
  }
#line 3573 "axo_gram.tab.c"
    break;

  case 117: /* arr_typ: '[' ']' val_typ  */
#line 1278 "axo_gram.y"
                          {
    axo_arr_typ* arr_typ = alloc_one(axo_arr_typ);
    *arr_typ = (axo_arr_typ){
      .subtyp=(yyvsp[0].typ_type),
      .dim_count=1
    };
    (yyval.typ_type) = (axo_typ){
      .kind=axo_arr_kind,
      .arr=arr_typ
    };
  }
#line 3589 "axo_gram.tab.c"
    break;

  case 118: /* arr_typ: arr_multidim_typ ']' val_typ  */
#line 1289 "axo_gram.y"
                                 {
    (yyval.typ_type) = (yyvsp[-2].typ_type);
    axo_get_arr_typ((yyval.typ_type)).subtyp = (yyvsp[0].typ_type);
  }
#line 3598 "axo_gram.tab.c"
    break;

  case 119: /* func_typ_start: '(' val_typ "fn"  */
#line 1295 "axo_gram.y"
                                     {
    axo_func_typ* func_typ = alloc_one(axo_func_typ);
    func_typ->args_len=0;
    func_typ->args_types=NULL;
    func_typ->args_defs=NULL;
    func_typ->ret_typ=(yyvsp[-1].typ_type);
    (yyval.typ_type) = (axo_typ){
      .kind = axo_func_kind,
      .func_typ=func_typ
    };
  }
#line 3614 "axo_gram.tab.c"
    break;

  case 120: /* func_typ_start: '(' "fn"  */
#line 1306 "axo_gram.y"
                {
    axo_func_typ* func_typ = alloc_one(axo_func_typ);
    func_typ->args_len=0;
    func_typ->args_types=NULL;
    func_typ->args_defs=NULL;
    func_typ->ret_typ=axo_no_typ;
    (yyval.typ_type) = (axo_typ){
      .kind = axo_func_kind,
      .func_typ=func_typ
    };
  }
#line 3630 "axo_gram.tab.c"
    break;

  case 121: /* func_typ_args: func_typ_start val_typ  */
#line 1319 "axo_gram.y"
                                       {
    (yyval.typ_type)=(yyvsp[-1].typ_type);
    axo_func_typ* func_typ = (axo_func_typ*)((yyval.typ_type).func_typ);
    func_typ->args_types = (axo_typ*)malloc(axo_func_args_cap*sizeof(axo_typ));
    func_typ->args_defs = (char**)malloc(axo_func_args_cap*sizeof(char*));
    func_typ->args_types[0] = (yyvsp[0].typ_type);
    func_typ->args_defs[0] = axo_typ_def_val((yyvsp[0].typ_type));
    func_typ->args_len++;
  }
#line 3644 "axo_gram.tab.c"
    break;

  case 122: /* func_typ_args: func_typ_args ',' val_typ  */
#line 1328 "axo_gram.y"
                              {
    (yyval.typ_type)=(yyvsp[-2].typ_type);
    axo_func_typ* func_typ = (axo_func_typ*)((yyval.typ_type).func_typ);
    resize_dyn_arr_if_needed(axo_typ, func_typ->args_types, func_typ->args_len, axo_func_args_cap);
    resize_dyn_arr_if_needed(char*, func_typ->args_defs, func_typ->args_len, axo_func_args_cap);
    func_typ->args_types[func_typ->args_len] = (yyvsp[0].typ_type);
    func_typ->args_defs[func_typ->args_len] = axo_typ_def_val((yyvsp[0].typ_type));
    func_typ->args_len++;
  }
#line 3658 "axo_gram.tab.c"
    break;

  case 123: /* func_typ: func_typ_start ')'  */
#line 1339 "axo_gram.y"
                              {(yyval.typ_type)=(yyvsp[-1].typ_type);}
#line 3664 "axo_gram.tab.c"
    break;

  case 124: /* func_typ: func_typ_args ')'  */
#line 1340 "axo_gram.y"
                      {(yyval.typ_type)=(yyvsp[-1].typ_type);}
#line 3670 "axo_gram.tab.c"
    break;

  case 125: /* val_typ: "identifier"  */
#line 1343 "axo_gram.y"
               {
    axo_typ_def* def = axo_get_typ_def(state, (yyvsp[0].str));
    if (def==NULL)
      yyerror(&(yylsp[0]), "Type '%s' isn't defined.", (yyvsp[0].str));
    else
      (yyval.typ_type)=def->typ;
  }
#line 3682 "axo_gram.tab.c"
    break;

  case 126: /* val_typ: '@' val_typ  */
#line 1350 "axo_gram.y"
                {
    (yyval.typ_type).kind = axo_ptr_kind;
    (yyval.typ_type).subtyp = malloc(sizeof(axo_typ));
    *axo_subtyp((yyval.typ_type))=(yyvsp[0].typ_type);
  }
#line 3692 "axo_gram.tab.c"
    break;

  case 130: /* c_typ: '.' '.' '.'  */
#line 1360 "axo_gram.y"
                {
    (yyval.typ_type).kind = axo_c_arg_list_kind;
  }
#line 3700 "axo_gram.tab.c"
    break;

  case 131: /* c_typ_list: %empty  */
#line 1365 "axo_gram.y"
                           {
    (yyval.types_list).len = 0;
    (yyval.types_list).values = NULL;
  }
#line 3709 "axo_gram.tab.c"
    break;

  case 132: /* c_typ_list: c_typ  */
#line 1369 "axo_gram.y"
          {
    (yyval.types_list).values = (axo_typ*)malloc(axo_func_args_cap*sizeof(axo_typ));
    (yyval.types_list).values[0] = (yyvsp[0].typ_type);
    (yyval.types_list).len = 1;
  }
#line 3719 "axo_gram.tab.c"
    break;

  case 133: /* c_typ_list: c_typ_list ',' c_typ  */
#line 1374 "axo_gram.y"
                         {
    if ((yyvsp[-2].types_list).values[(yyvsp[-2].types_list).len-1].kind == axo_c_arg_list_kind)
      yyerror(&(yylsp[-2]), "The C v_args argument has to be the last one.");
    (yyval.types_list) = (yyvsp[-2].types_list);
    if ((yyval.types_list).len % axo_func_args_cap == 0)
      (yyval.types_list).values = (axo_typ*)realloc((yyval.types_list).values, ((yyval.types_list).len+axo_func_args_cap)*sizeof(axo_typ));
    (yyval.types_list).values[(yyval.types_list).len] = (yyvsp[0].typ_type);
    (yyval.types_list).len++;
  }
#line 3733 "axo_gram.tab.c"
    break;

  case 134: /* called_expr: expr '('  */
#line 1385 "axo_gram.y"
                       {
    if (axo_validate_rval(&(yylsp[-1]), (yyvsp[-1].expression))){
      switch((yyvsp[-1].expression).typ.kind){
        case axo_func_kind:
          (yyval.function_call) = (axo_func_call){
            .typ = (yyvsp[-1].expression).typ,
            .called_val = (yyvsp[-1].expression).val,
            .params_len=0,
            .params=NULL
          };
          break;
        default:
          yyerror(&(yylsp[-1]), "Cannot call an expression of non-function type '%s'.", axo_typ_to_str((yyvsp[-1].expression).typ));
          break;
      }
    }else{
      yyerror(&(yylsp[-1]), "Cannot call an invalid rval.");
    }
    // printf("ret_typ: %s\n", axo_typ_to_str(((axo_func*)($$.typ.func_typ))->f_typ.ret_typ));
  }
#line 3758 "axo_gram.tab.c"
    break;

  case 135: /* called_expr: expr ':' "identifier" '('  */
#line 1405 "axo_gram.y"
                      {
    axo_validate_rval(&(yylsp[-3]), (yyvsp[-3].expression));
    axo_expr passed_expr;
    switch((yyvsp[-3].expression).typ.kind){
      case axo_enum_kind:
      case axo_simple_kind:
      case axo_struct_kind:
        if ((yyvsp[-3].expression).lval_kind == axo_not_lval_kind){
          yyerror(&(yylsp[-3]), "Cannot reference a non-lvalue expression to call a method.");
        }else{
          char* fn_name = fmtstr("met_%s_%s", axo_typ_to_str((yyvsp[-3].expression).typ), (yyvsp[-1].str));
          axo_var* var = axo_get_var(top_scope, fn_name);
          if (var == NULL && rval_now)
            yyerror(&(yylsp[-3]), "Method '%s' undefined before usage.", (yyvsp[-1].str));
          else{
            if (var->typ.kind != axo_func_kind){
              yyerror(&(yylsp[-1]), "Attempted to call a non-function method. (Naming clash?)");  
            }else{
              passed_expr = (axo_expr){
                .kind=axo_expr_normal_kind,
                .lval_kind=axo_not_lval_kind,
                .val=fmtstr("(&(%s))", (yyvsp[-3].expression).val),
                .typ=(axo_typ){
                  .kind=axo_ptr_kind,
                  .subtyp=alloc_one(axo_typ)
                }
              };
              *axo_subtyp(passed_expr.typ) = (yyvsp[-3].expression).typ;
              (yyval.function_call) = (axo_func_call){
                .typ = var->typ,
                .called_val = fn_name,
                .params_len=1,
                .params=(axo_expr*)malloc(axo_func_args_cap*sizeof(axo_expr))
              };
              (yyval.function_call).params[0] = passed_expr;
            }
          }
        }        
        break;
        case axo_arr_kind:
          passed_expr = (axo_expr){
            .kind=axo_expr_normal_kind,
            .lval_kind=axo_not_lval_kind,
            .val=fmtstr("(&(%s))", (yyvsp[-3].expression).val),
            .typ=(axo_typ){
              .kind=axo_ptr_kind,
              .subtyp=alloc_one(axo_typ)
            }
          };
          *axo_subtyp(passed_expr.typ) = (yyvsp[-3].expression).typ;
          (yyval.function_call) = axo_get_array_method(state, &(yylsp[-3]), &(yylsp[-1]), passed_expr, (yyvsp[-1].str));
          break;
      default:
        yyerror(&(yylsp[-3]), "Methods can only operate on simple types (primitives, enums or structures), not '%s'.", axo_typ_to_str((yyvsp[-3].expression).typ));
        break;
    }
  
  }
#line 3821 "axo_gram.tab.c"
    break;

  case 136: /* called_expr: expr '$' "identifier" '('  */
#line 1463 "axo_gram.y"
                      {
    axo_validate_rval(&(yylsp[-3]), (yyvsp[-3].expression));
    if ((yyvsp[-3].expression).typ.kind != axo_ptr_kind){
      yyerror(&(yylsp[-3]), "Methods cannot operate on '%s', only on pointers to simple types (primitives, enums or structures).", axo_typ_to_str((yyvsp[-3].expression).typ));
    }else{
      axo_typ subtyp = *axo_subtyp((yyvsp[-3].expression).typ);
      char* fn_name = fmtstr("met_%s_%s", axo_typ_to_str(subtyp), (yyvsp[-1].str));
      axo_var* var = axo_get_var(top_scope, fn_name);
      switch(subtyp.kind){
        case axo_enum_kind:
        case axo_simple_kind:
        case axo_struct_kind:
          if (var == NULL && rval_now)
            yyerror(&(yylsp[-3]), "Method '%s' undefined before usage.", (yyvsp[-1].str));
          else{
            if (var->typ.kind != axo_func_kind){
              yyerror(&(yylsp[-1]), "Attempted to call a non-function method. (Naming clash?)");  
            }else{
              (yyval.function_call) = (axo_func_call){
                .typ = var->typ,
                .called_val = fn_name,
                .params_len=1,
                .params=(axo_expr*)malloc(axo_func_args_cap*sizeof(axo_expr))
              };
              (yyval.function_call).params[0] = (yyvsp[-3].expression);
            }
          }
          break;
        case axo_arr_kind:
          (yyval.function_call) = axo_get_array_method(state, &(yylsp[-3]), &(yylsp[-1]), (yyvsp[-3].expression), (yyvsp[-1].str));
          break;
        default:
          yyerror(&(yylsp[-3]), "Methods cannot operate on '%s', only on pointers to simple types (primitives, enums or structures).", axo_typ_to_str((yyvsp[-3].expression).typ));
          break;
      }
    }
  }
#line 3863 "axo_gram.tab.c"
    break;

  case 137: /* func_call_start: called_expr  */
#line 1502 "axo_gram.y"
                              {
    axo_func_typ* fnt = (axo_func_typ*)((yyvsp[0].function_call).typ.func_typ);
    if ((yyval.function_call).params_len<fnt->args_len){
      resize_dyn_arr_if_needed(axo_expr, (yyval.function_call).params, (yyval.function_call).params_len, axo_func_args_cap);
      (yyval.function_call).params[(yyval.function_call).params_len].val = fnt->args_defs[(yyval.function_call).params_len];
      (yyval.function_call).params_len++;
    }
  }
#line 3876 "axo_gram.tab.c"
    break;

  case 138: /* func_call_start: called_expr expr  */
#line 1510 "axo_gram.y"
                     {
    if (axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression))) {
      axo_func_typ* fnt = (axo_func_typ*)((yyvsp[-1].function_call).typ.func_typ);
      if ((yyval.function_call).params_len <= fnt->args_len){
        if (!axo_typ_eq(fnt->args_types[(yyval.function_call).params_len], (yyvsp[0].expression).typ))
          yyerror(&(yylsp[0]), "Expected value of type "axo_underline_start"%s"axo_reset_style axo_red_fgs " for argument #%d, got type "axo_underline_start"%s"axo_reset_style axo_red_fgs" instead.", axo_typ_to_str(fnt->args_types[(yyval.function_call).params_len]), (yyval.function_call).params_len+1, axo_typ_to_str((yyvsp[0].expression).typ));
        else{
          resize_dyn_arr_if_needed(axo_expr, (yyval.function_call).params, (yyval.function_call).params_len, axo_func_args_cap);
          (yyval.function_call).params[(yyval.function_call).params_len++] = (yyvsp[0].expression);
        }
      }else{
        if (fnt->args_types[0].kind != axo_c_arg_list_kind)
          yyerror(&(yylsp[-1]), "Too many parameters for function type '%s'", axo_typ_to_str((yyvsp[-1].function_call).typ));
      }
    }
  }
#line 3897 "axo_gram.tab.c"
    break;

  case 139: /* func_call_start: func_call_start ',' expr  */
#line 1526 "axo_gram.y"
                             {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    axo_func_typ* fnt = (axo_func_typ*)((yyvsp[-2].function_call).typ.func_typ);
    resize_dyn_arr_if_needed(axo_expr, (yyval.function_call).params, (yyval.function_call).params_len, axo_func_args_cap);
    int i = (yyval.function_call).params_len;
    if (fnt->args_types[fnt->args_len-1].kind != axo_c_arg_list_kind){
      if (i < fnt->args_len){
        if (!axo_typ_eq(fnt->args_types[i], (yyvsp[0].expression).typ))
          yyerror(&(yylsp[0]), "Expected value of type "axo_underline_start"%s"axo_reset_style axo_red_fgs " for argument #%d, got type "axo_underline_start"%s"axo_reset_style axo_red_fgs" instead.", axo_typ_to_str(fnt->args_types[i]), i, axo_typ_to_str((yyvsp[0].expression).typ));
      }else{
          yyerror(&(yylsp[0]), "Too many parameters for function type '%s'", axo_typ_to_str((yyvsp[-2].function_call).typ));
      }
    }
    (yyval.function_call).params[i] = (yyvsp[0].expression);
    (yyval.function_call).params_len++;
  }
#line 3918 "axo_gram.tab.c"
    break;

  case 140: /* func_call_start: func_call_start ','  */
#line 1542 "axo_gram.y"
                        {
    (yyval.function_call) = (yyvsp[-1].function_call);
    axo_func_typ* fnt = (axo_func_typ*)((yyvsp[-1].function_call).typ.func_typ);
    char** defaults = fnt->args_defs;
    resize_dyn_arr_if_needed(axo_expr, (yyval.function_call).params, (yyval.function_call).params_len, axo_func_args_cap);
    int i = (yyval.function_call).params_len;
    if (i >= fnt->args_len-1 && fnt->args_types[fnt->args_len-1].kind == axo_c_arg_list_kind)
        yyerror(&(yylsp[0]), "Cannot generate a default param for '...'.");
    else if (i >= fnt->args_len)
        yyerror(&(yylsp[0]), "Too many parameters for function type '%s'", axo_typ_to_str((yyvsp[-1].function_call).typ));
    (yyval.function_call).params[i].val = defaults[i];
    (yyval.function_call).params_len++;
  }
#line 3936 "axo_gram.tab.c"
    break;

  case 141: /* func_call: func_call_start ')'  */
#line 1557 "axo_gram.y"
                                {
    (yyval.function_call)=(yyvsp[-1].function_call);
    axo_func_typ* fnt = (axo_func_typ*)((yyvsp[-1].function_call).typ.func_typ);
    if (fnt->args_len>(yyval.function_call).params_len){
      (yyval.function_call).params=(axo_expr*)realloc((yyval.function_call).params, fnt->args_len*sizeof(axo_expr));
      for (int i=(yyvsp[-1].function_call).params_len; i<fnt->args_len-1; i++){ //Fill with defaults up until pre-last arg!
        (yyval.function_call).params[i] = (axo_expr){.typ=fnt->args_types[i], .val=fnt->args_defs[i]};
      }
      (yyval.function_call).params_len=fnt->args_len-1;
      if (fnt->args_types[fnt->args_len-1].kind != axo_c_arg_list_kind){
        (yyval.function_call).params[fnt->args_len-1] = (axo_expr){.typ=fnt->args_types[fnt->args_len-1], .val=fnt->args_defs[fnt->args_len-1]};
        (yyval.function_call).params_len++;
      }
    }
  }
#line 3956 "axo_gram.tab.c"
    break;

  case 142: /* code_scope_start: '{'  */
#line 1574 "axo_gram.y"
                       {
    if (!axo_code_scope_started) axo_push_scope(scopes, axo_new_scope(top_scope));
    axo_code_scope_started = false;
  }
#line 3965 "axo_gram.tab.c"
    break;

  case 143: /* code_scope: code_scope_start statements '}'  */
#line 1580 "axo_gram.y"
                                             {
    (yyval.scope) = top_scope;
    scopes->len--;
    if ((yyval.scope)->statements_len == 0)
      yyerror(&(yyloc), "Code scopes cannot be empty.");
  }
#line 3976 "axo_gram.tab.c"
    break;

  case 144: /* func_def_name: "identifier"  */
#line 1588 "axo_gram.y"
                     {
    (yyval.function) = (axo_func){
      .name=alloc_str((yyvsp[0].str)),
      .args_names=NULL
    };
  }
#line 3987 "axo_gram.tab.c"
    break;

  case 145: /* func_def_name: "identifier" ".field"  */
#line 1594 "axo_gram.y"
                   {
    axo_module* mod = axo_get_module(state, (yyvsp[-1].str));
    if (!mod)
      yyerror(&(yylsp[-1]), "Module doesn't exist.");
    else
      (yyval.function) = (axo_func){
        .name=fmtstr("%s%s", mod->prefix, (yyvsp[0].str)),
        .args_names=NULL
      };
  }
#line 4002 "axo_gram.tab.c"
    break;

  case 146: /* func_def_name: val_typ ':' "identifier"  */
#line 1604 "axo_gram.y"
                     {
    axo_typ* subtyp = alloc_one(axo_typ);
    *subtyp = (yyvsp[-2].typ_type);
    axo_typ typ = (axo_typ){
      .kind=axo_ptr_kind,
      .subtyp=subtyp,
      .def=alloc_str("NULL")
    };
    switch((yyvsp[-2].typ_type).kind){
      case axo_simple_kind:
      case axo_struct_kind:
      case axo_enum_kind:
        (yyval.function) = (axo_func){
          .name=fmtstr("met_%s_%s", axo_typ_to_str((yyvsp[-2].typ_type)), (yyvsp[0].str)),
          .args_names = (char**)malloc(sizeof(char*)),
          .f_typ = (axo_func_typ){
            .args_len = 1,
            .args_defs = (char**)malloc(sizeof(char*)),
            .args_types = (axo_typ*)malloc(sizeof(axo_typ)),
          }
        };
        (yyval.function).f_typ.args_defs[0] = typ.def;
        (yyval.function).f_typ.args_types[0] = typ;
        (yyval.function).args_names[0] = alloc_str("self");
        break;
      default:
        free(subtyp);
        yyerror(&(yylsp[-2]), "Method are only allowed for structs, enums and primitives, but got %s.", axo_typ_kind_to_str((yyvsp[-2].typ_type).kind));
        break;
    }
  }
#line 4038 "axo_gram.tab.c"
    break;

  case 147: /* func_def_ret_typ: "fn"  */
#line 1637 "axo_gram.y"
                        {
    axo_push_scope(scopes, axo_new_scope(top_scope));
    axo_code_scope_started = true;
    (yyval.typ_type) = axo_no_typ;
  }
#line 4048 "axo_gram.tab.c"
    break;

  case 148: /* func_def_ret_typ: val_typ "fn"  */
#line 1642 "axo_gram.y"
                 {
    axo_push_scope(scopes, axo_new_scope(top_scope));
    axo_code_scope_started = true;
    (yyval.typ_type) = (yyvsp[-1].typ_type);
  }
#line 4058 "axo_gram.tab.c"
    break;

  case 149: /* func_def_start: func_def_ret_typ func_def_name '(' func_args ')'  */
#line 1649 "axo_gram.y"
                                                                  {
    int args_len = (yyvsp[-1].function).f_typ.args_len;
    (yyval.function) = (axo_func){
      .name=(yyvsp[-3].function).name
    };
    if ((yyvsp[-3].function).args_names){
      args_len += (yyvsp[-3].function).f_typ.args_len;
      (yyval.function).args_names = (char**)malloc(args_len*sizeof(char*));
      (yyval.function).f_typ = (axo_func_typ){
        .args_len = 0,
        .args_types=(axo_typ*)malloc(args_len*sizeof(axo_typ)),
        .args_defs=(char**)malloc(args_len*sizeof(char*)),
      };
      for (int i=0; i<(yyvsp[-3].function).f_typ.args_len; i++){
        (yyval.function).args_names[(yyval.function).f_typ.args_len] = (yyvsp[-3].function).args_names[i];
        (yyval.function).f_typ.args_types[(yyval.function).f_typ.args_len] = (yyvsp[-3].function).f_typ.args_types[i];
        (yyval.function).f_typ.args_defs[(yyval.function).f_typ.args_len++] = (yyvsp[-3].function).f_typ.args_defs[i];
      }
      for (int i=0; i<(yyvsp[-1].function).f_typ.args_len; i++){
        (yyval.function).args_names[(yyval.function).f_typ.args_len] = (yyvsp[-1].function).args_names[i];
        (yyval.function).f_typ.args_types[(yyval.function).f_typ.args_len] = (yyvsp[-1].function).f_typ.args_types[i];
        (yyval.function).f_typ.args_defs[(yyval.function).f_typ.args_len++] = (yyvsp[-1].function).f_typ.args_defs[i];
      }
    }else{
      (yyval.function).args_names = (yyvsp[-1].function).args_names;
      (yyval.function).f_typ.args_defs = (yyvsp[-1].function).f_typ.args_defs;
      (yyval.function).f_typ.args_types = (yyvsp[-1].function).f_typ.args_types;
      (yyval.function).f_typ.args_len = args_len;
    }
    (yyval.function).f_typ.ret_typ = (yyvsp[-4].typ_type);
    for (int i = 0; i<(yyval.function).f_typ.args_len; i++)
      axo_set_var(top_scope, (axo_var){.name=(yyval.function).args_names[i], .typ=(yyval.function).f_typ.args_types[i], .is_const=true});
    //Set the function
    axo_typ typ = (axo_typ){
      .kind=axo_func_kind,
      .func_typ=alloc_one(axo_func_typ)
    };
    *((axo_func_typ*)(typ.func_typ)) = (yyval.function).f_typ;
    top_scope->parent_func = axo_set_var(state->global_scope, (axo_var){.name=(yyval.function).name, .typ=typ, .is_const=true});
  }
#line 4103 "axo_gram.tab.c"
    break;

  case 150: /* struct_literal_start: "struct{"  */
#line 1691 "axo_gram.y"
                                            {
    axo_typ_def* td = axo_get_typ_def(state, (yyvsp[0].str));
    if (td==NULL){
      yyerror(&(yylsp[0]), "Structure '%s' undefined before usage.", (yyvsp[0].str));
    }else if (td->typ.kind!=axo_struct_kind){
      yyerror(&(yylsp[0]), "Type '%s' is not a struture.", (yyvsp[0].str));
    }else{
    int total_field_count = ((axo_struct*)(td->typ.structure))->fields_len;
    (yyval.struct_val_type) = (axo_struct_val){
      .typ=td->typ,
      .fields=(char**)malloc(total_field_count*sizeof(char*)),
      .fields_count=1 //Yes, that's correct
    };
    for (int i=0;i<total_field_count;i++) (yyval.struct_val_type).fields[i]=NULL;
    }
  }
#line 4124 "axo_gram.tab.c"
    break;

  case 151: /* struct_literal_start: "struct{" expr  */
#line 1707 "axo_gram.y"
                              {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    axo_typ_def* td = axo_get_typ_def(state, (yyvsp[-1].str));
    if (td==NULL){
      yyerror(&(yylsp[-1]), "Structure type '%s' undefined before usage.", (yyvsp[-1].str));
    }else if (td->typ.kind!=axo_struct_kind){
      yyerror(&(yylsp[-1]), "Type '%s' is not a struture.", (yyvsp[-1].str));
    }else if (!axo_typ_eq(((axo_struct*)(td->typ.structure))->fields[0].typ, (yyvsp[0].expression).typ)){
      axo_struct* structure = ((axo_struct*)(td->typ.structure));
      yyerror(&(yylsp[0]),"Expected type '%s' in field '%s' of struct '%s', but got '%s'.", axo_typ_to_str(structure->fields[0].typ), structure->fields[0].name, structure->name, axo_typ_to_str((yyvsp[0].expression).typ));
    }else{
      int total_field_count = ((axo_struct*)(td->typ.structure))->fields_len;
      (yyval.struct_val_type) = (axo_struct_val){
        .typ=td->typ,
        .fields=(char**)malloc(((axo_struct*)(td->typ.structure))->fields_len*sizeof(char*)),
        .fields_count=1
      };
      for (int i=1;i<total_field_count;i++) (yyval.struct_val_type).fields[i]=NULL;
      (yyval.struct_val_type).fields[0] = (yyvsp[0].expression).val;
    }
  }
#line 4150 "axo_gram.tab.c"
    break;

  case 152: /* struct_literal_start: "struct{" "identifier" '=' expr  */
#line 1728 "axo_gram.y"
                                       {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    axo_typ_def* td = axo_get_typ_def(state, (yyvsp[-3].str));
    axo_struct* structure = (axo_struct*)(td->typ.structure);
    if (td==NULL){
      yyerror(&(yylsp[-3]), "Structure type '%s' undefined before usage.", (yyvsp[-3].str));
    }else if (td->typ.kind!=axo_struct_kind){
      yyerror(&(yylsp[-3]), "Type '%s' is not a structure.", (yyvsp[-3].str));
    }else{
      (yyval.struct_val_type) = (axo_struct_val){
        .typ=td->typ,
        .fields=(char**)malloc(((axo_struct*)(td->typ.structure))->fields_len*sizeof(char*)),
        .fields_count=0
      };
      int total_field_count = ((axo_struct*)(td->typ.structure))->fields_len;
      for (int i=0;i<total_field_count;i++) (yyval.struct_val_type).fields[i]=NULL;
      int index = -1;
      for (int i=0;i<structure->fields_len; i++){
        if (strcmp(structure->fields[i].name, (yyvsp[-2].str))==0){
          index = i;
          break;
        }
      }
      if (index<0) yyerror(&(yylsp[-2]), "Structure '%s' doesn't have '%s' field.", structure->name, (yyvsp[-2].str));
      else if (!axo_typ_eq(structure->fields[index].typ, (yyvsp[0].expression).typ)){
        yyerror(&(yylsp[0]),"Expected type '%s' in field '%s' of struct '%s', but got '%s'.", axo_typ_to_str(structure->fields[index].typ), structure->fields[index].name, structure->name, axo_typ_to_str((yyvsp[0].expression).typ));
      }else{
        (yyval.struct_val_type).fields[index] = (yyvsp[0].expression).val;
      }
    }
  }
#line 4186 "axo_gram.tab.c"
    break;

  case 153: /* struct_literal_start: struct_literal_start ',' expr  */
#line 1759 "axo_gram.y"
                                  {
    (yyval.struct_val_type)=(yyvsp[-2].struct_val_type);
    axo_struct* structure = (axo_struct*)((yyval.struct_val_type).typ.structure);
    if ((yyval.struct_val_type).fields_count==structure->fields_len){
      yyerror(&(yylsp[0]), "Too many fields provided to structure '%s'.", structure->name);
    }else if (!axo_typ_eq(structure->fields[(yyval.struct_val_type).fields_count].typ, (yyvsp[0].expression).typ)){
        yyerror(&(yylsp[0]),"Expected type '%s' in field '%s' of struct '%s', but got '%s'.", axo_typ_to_str(structure->fields[(yyval.struct_val_type).fields_count].typ), structure->fields[(yyval.struct_val_type).fields_count].name, structure->name, axo_typ_to_str((yyvsp[0].expression).typ));
    }else if ((yyval.struct_val_type).fields[(yyval.struct_val_type).fields_count]==NULL){
      (yyval.struct_val_type).fields[(yyval.struct_val_type).fields_count] = (yyvsp[0].expression).val;
      (yyval.struct_val_type).fields_count++;
    }else{
      yyerror(&(yylsp[0]), "Structure field '%s' was arleady assigned a value.", ((axo_struct*)((yyval.struct_val_type).typ.structure))->fields[(yyval.struct_val_type).fields_count].name);    
    }
  }
#line 4205 "axo_gram.tab.c"
    break;

  case 154: /* struct_literal_start: struct_literal_start ','  */
#line 1773 "axo_gram.y"
                             {
    (yyval.struct_val_type)=(yyvsp[-1].struct_val_type);
    axo_struct* structure = (axo_struct*)((yyval.struct_val_type).typ.structure);
    if ((yyval.struct_val_type).fields_count==structure->fields_len){
      yyerror(&(yylsp[0]), "Too many fields provided to structure '%s'.", structure->name);
    }else if ((yyval.struct_val_type).fields[(yyval.struct_val_type).fields_count]==NULL){
      (yyval.struct_val_type).fields[(yyval.struct_val_type).fields_count] = ((axo_struct*)((yyvsp[-1].struct_val_type).typ.structure))->fields[(yyval.struct_val_type).fields_count].def;
      (yyval.struct_val_type).fields_count++;
    }
  }
#line 4220 "axo_gram.tab.c"
    break;

  case 155: /* struct_literal_start: struct_literal_start ',' "identifier" '=' expr  */
#line 1783 "axo_gram.y"
                                           {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.struct_val_type)=(yyvsp[-4].struct_val_type);
    axo_struct* structure = (axo_struct*)((yyval.struct_val_type).typ.structure);
    int index = -1;
    for (int i=0;i<structure->fields_len; i++){
      if (strcmp(structure->fields[i].name, (yyvsp[-2].str))==0){
        index = i;
        break;
      }
    }
    if (index<0) yyerror(&(yylsp[-2]), "Structure '%s' doesn't have '%s' field.", structure->name, (yyvsp[-2].str));
    else if (!axo_typ_eq(structure->fields[index].typ, (yyvsp[0].expression).typ)){
        yyerror(&(yylsp[0]),"Expected type '%s' in field '%s' of struct '%s', but got '%s'.", axo_typ_to_str(structure->fields[index].typ), structure->fields[index].name, structure->name, axo_typ_to_str((yyvsp[0].expression).typ));
    }else if ((yyval.struct_val_type).fields[index]==NULL){
      (yyval.struct_val_type).fields[index] = (yyvsp[0].expression).val;
    }else{
      yyerror(&(yylsp[-2]), "Structure field '%s' was arleady assigned a value.", ((axo_struct*)((yyval.struct_val_type).typ.structure))->fields[index].name);    
    }
  }
#line 4245 "axo_gram.tab.c"
    break;

  case 156: /* struct_literal: struct_literal_start '}'  */
#line 1805 "axo_gram.y"
                                          {
    (yyval.struct_val_type)=(yyvsp[-1].struct_val_type);
    axo_struct* structure = ((axo_struct*)(yyval.struct_val_type).typ.structure);
    for(int i=0; i<structure->fields_len; i++){
      if((yyval.struct_val_type).fields[i] == NULL) (yyval.struct_val_type).fields[i] = structure->fields[i].def;
    }
  }
#line 4257 "axo_gram.tab.c"
    break;

  case 157: /* func_def: func_def_start code_scope  */
#line 1814 "axo_gram.y"
                                     {
    axo_var* fn_var = axo_get_var(state->global_scope, (yyvsp[-1].function).name);
    if (fn_var){
      (yyval.function) = (axo_func){
        .name = (yyvsp[-1].function).name,
        .args_names = (yyvsp[-1].function).args_names,
        .f_typ = *((axo_func_typ*)(fn_var->typ.func_typ)),
        .body = (yyvsp[0].scope)
      };
    }else{
      yyerror(NULL, "This should never happen.");
    }
  }
#line 4275 "axo_gram.tab.c"
    break;

  case 158: /* func_arg: val_typ "identifier"  */
#line 1829 "axo_gram.y"
                        {
    (yyval.function_argument).name = alloc_str((yyvsp[0].str));
    (yyval.function_argument).typ = (yyvsp[-1].typ_type);
    (yyval.function_argument).def = (yyvsp[-1].typ_type).def;
  }
#line 4285 "axo_gram.tab.c"
    break;

  case 159: /* func_arg: "identifier" '|' expr  */
#line 1834 "axo_gram.y"
                  {
    (yyval.function_argument).name = alloc_str((yyvsp[-2].str));
    (yyval.function_argument).typ = (yyvsp[0].expression).typ;
    (yyval.function_argument).typ.def = (yyvsp[0].expression).val;
  }
#line 4295 "axo_gram.tab.c"
    break;

  case 160: /* func_arg: val_typ "identifier" '|' expr  */
#line 1839 "axo_gram.y"
                          {
    if (axo_typ_eq((yyvsp[-3].typ_type), (yyvsp[0].expression).typ))
      yyerror(&(yylsp[0]), "Default value doesn't match type.");
    (yyval.function_argument).name = alloc_str((yyvsp[-2].str));
    (yyval.function_argument).typ = (yyvsp[-3].typ_type);
    (yyval.function_argument).typ.def = (yyvsp[0].expression).val;
  }
#line 4307 "axo_gram.tab.c"
    break;

  case 161: /* func_args: %empty  */
#line 1848 "axo_gram.y"
                            {
    (yyval.function).args_names = NULL;
    (yyval.function).f_typ.args_defs = NULL;
    (yyval.function).f_typ.args_types = NULL;
    (yyval.function).f_typ.args_len = 0;
  }
#line 4318 "axo_gram.tab.c"
    break;

  case 162: /* func_args: func_arg  */
#line 1854 "axo_gram.y"
             {
    (yyval.function).args_names = (char**)malloc(axo_func_args_cap*sizeof(char*));
    (yyval.function).f_typ.args_defs = (char**)malloc(axo_func_args_cap*sizeof(char*));
    (yyval.function).f_typ.args_types = (axo_typ*)malloc(axo_func_args_cap*sizeof(axo_typ));
    (yyval.function).args_names[0] = (yyvsp[0].function_argument).name;
    (yyval.function).f_typ.args_defs[0] = axo_get_typ_default((yyvsp[0].function_argument).typ);
    (yyval.function).f_typ.args_types[0] = (yyvsp[0].function_argument).typ;
    (yyval.function).f_typ.args_len = 1;
  }
#line 4332 "axo_gram.tab.c"
    break;

  case 163: /* func_args: func_args ',' func_arg  */
#line 1863 "axo_gram.y"
                           {
    (yyval.function) = (yyvsp[-2].function);
    resize_dyn_arr_if_needed(char*, (yyval.function).args_names, (yyval.function).f_typ.args_len, axo_func_args_cap);
    resize_dyn_arr_if_needed(char*, (yyval.function).f_typ.args_defs, (yyval.function).f_typ.args_len, axo_func_args_cap);
    resize_dyn_arr_if_needed(axo_typ, (yyval.function).f_typ.args_types, (yyval.function).f_typ.args_len, axo_func_args_cap);
    (yyval.function).args_names[(yyval.function).f_typ.args_len] = (yyvsp[0].function_argument).name;
    (yyval.function).f_typ.args_defs[(yyval.function).f_typ.args_len] = axo_get_typ_default((yyvsp[0].function_argument).typ);
    (yyval.function).f_typ.args_types[(yyval.function).f_typ.args_len] = (yyvsp[0].function_argument).typ;
    (yyval.function).f_typ.args_len++;
  }
#line 4347 "axo_gram.tab.c"
    break;

  case 164: /* enum_names: "identifier"  */
#line 1875 "axo_gram.y"
                  {
    (yyval.enum_type).names = (char**)malloc(axo_enum_names_cap*sizeof(char*));
    (yyval.enum_type).names[0] = alloc_str((yyvsp[0].str));
    (yyval.enum_type).len = 1;
  }
#line 4357 "axo_gram.tab.c"
    break;

  case 165: /* enum_names: enum_names ',' "identifier"  */
#line 1880 "axo_gram.y"
                        {
    (yyval.enum_type) = (yyvsp[-2].enum_type);
    if ((yyval.enum_type).len % axo_enum_names_cap == 0)
    (yyval.enum_type).names = (char**)realloc((yyval.enum_type).names, ((yyval.enum_type).len+axo_enum_names_cap)*sizeof(char*));
    (yyval.enum_type).names[(yyval.enum_type).len] = alloc_str((yyvsp[0].str));
    (yyval.enum_type).len++;
  }
#line 4369 "axo_gram.tab.c"
    break;


#line 4373 "axo_gram.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (&yylloc, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1889 "axo_gram.y"


void yyerror(YYLTYPE* loc, const char * fmt, ...){
  if (prog_return==0)
    printf(axo_cyan_bg axo_magenta_fg "\aClick an error to learn more."axo_reset_style"\n");
  prog_return = 1;
  axo_raise_error;
  va_list args;
  if (loc==NULL){
    printf(axo_red_fg "Error: ");
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);
    printf(axo_reset_style"\n");
  }else{
    va_start(args, fmt);
    char* msg;
    vasprintf(&msg, fmt, args);
    char* err_msg = axo_error_with_loc(state, loc, msg);
    va_end(args);
    printf("%s\n", err_msg);
    free(err_msg);
  }
}

void overwrite_file_with_string(char *filepath, char *string) {
  FILE *fp = fopen(filepath, "w");
  if (fp != NULL){
    fwrite(string, 1 , strlen(string) , fp);
    fclose(fp);
  }
}

int playground(){
  int len;
  long long int* msg = axo_encode_easter("Talking to your compiler? That's no good... How about finding some friends instead!", &len);
  printf("Message: %s\n{", axo_decode_easter(msg));
  for (int i=0; i<len; i++){
    if (i>0) printf(", ");
    printf("%lld", msg[i]);
  }
  printf("}\n");
  long long int new_msg[] = {2334956330867777876, 7885630463268646772, 5197223730545977712, 8391735949001783151, 7453010313414796832, 8243311787948077856, 7955925896704976233, 36715014485107};
  
  printf("New message: %s\n", axo_decode_easter(new_msg));
  if (strcmp(axo_decode_easter(msg), axo_decode_easter(new_msg)) == 0)
    printf(axo_green_fg"Matched!"axo_reset_style"\n");
  else
    printf(axo_red_fg"Not matched!"axo_reset_style"\n");
  
  return 0;
}

int main(int argc, char** argv) {
  //Seed the pseudo random number generator
  srand(time(NULL));
  //Start timing the event
  clock_t start, end;
  double cpu_time_used;
  if (test_playground) return playground();
  
  //Get the root path (the path where the axo compiler lays)
  char* root_p = axo_get_parent_dir(axo_get_exec_path((char[512]){}, 512));
  // printf("Root: %s\n", root_p);
  
  //Initialize state
  state = axo_new_state(root_p);
  //Save the original working dir
  char* orig_cwd = axo_cwd((char[axo_max_path_len]){}, axo_max_path_len);
  // printf("orig_cwd: %s\n", orig_cwd);
  
  //Load config from axo.config
  // axo_bytes_to_file("axo.config", (char*)(&(state->config)), sizeof(axo_compiler_config));
  size_t cfg_sz;
  axo_compiler_config* cfg = (axo_compiler_config*)axo_file_to_bytes(fmt_str((char[axo_max_path_len]){}, "%s"axo_dir_sep"axo.config", state->root_path), &cfg_sz);
  state->config = *cfg;
  bool measure_time = state->config.timer;
  if (measure_time){
    start = clock();
  }
  char* cmd = argv[1];
  if (strcmp(cmd, "info")==0){
      prog_return = axo_info_cmd(state, argc, argv);
  }else if (strcmp(cmd, "set")==0){
    prog_return = axo_set_cmd(state, argc, argv);
  }else{
    axo_handle_args(state, argc, argv, 1);
    axo_printf = state->silenced ?  axo_no_printf : printf;
    if (state->entry_file){
      //Load default args where needed
      char* input_file_path = state->entry_file;
      state->output_c_file = state->output_c_file ? state->output_c_file : axo_swap_file_extension(input_file_path, ".c");
      state->output_file = state->output_file ? state->output_file : axo_swap_file_extension(input_file_path, AXO_BIN_EXT);
      state->entry_point = state->entry_point ? state->entry_point : alloc_str("axo__main");
      //Scopes table
      scopes = alloc_one(axo_scopes);
      scopes->scopes = NULL;
      scopes->len = 0;
      axo_push_scope(scopes, state->global_scope);
      axo_new_source(state, state->entry_file);
    }else{
      yyerror(NULL, "Entry file wasn't provided.\nUsage: axo <file> |options|");
      return 1;
    }
    axo_add_decl(state, axo_use_module(state, NULL, "core"));
    state->in_core = true;
    //Set entry point
    axo_add_decl(state, (axo_decl){
      .kind=axo_other_decl_kind,
      .val=empty_str
    });
    //Parse
    yyparse();
    // axo_printf("Parsing done.\n");
    //Check if the entry point is present
    axo_var* var = axo_get_var(top_scope, (strcmp("axo__main", state->entry_point) == 0) ? "main" : state->entry_point);
    if (var == NULL){
      yyerror(NULL, "Entry point function '%s' doesn't exist.", state->entry_point);
    }else{
      axo_func_typ f_typ = *((axo_func_typ*)(var->typ.func_typ));
      if (f_typ.args_len == 0){
        state->decls[1].val=fmtstr("#define AXO_DEFINE_ENTRY_POINT int %s();\n#define AXO_MAIN_ENTRY_POINT %s\n#define AXO_MAIN_ENTRY_NO_ARGS 1\n", state->entry_point, state->entry_point);
      }else{
        axo_typ expected_typ = (axo_typ){
          .kind=axo_arr_kind,
          .arr=&(axo_arr_typ){
            .dim_count=1,
            .subtyp=(axo_typ){
              .kind=axo_arr_kind,
              .arr=&(axo_arr_typ){
                .dim_count=1,
                .subtyp=(axo_byte_typ(state))
              }
            }
          }
        };
        if (f_typ.args_len > 1 || !axo_typ_eq(f_typ.args_types[0], expected_typ)) {
          yyerror(NULL, "Entry point has to be of type (int fn) or (int fn [][]byte), but is of type '%s'.", axo_typ_to_str(var->typ));
        }else{
          state->decls[1].val=fmtstr("#define AXO_DEFINE_ENTRY_POINT int %s(axo__arr args);\n#define AXO_MAIN_ENTRY_POINT %s", state->entry_point, state->entry_point);
        }
      }
    }
    //Handle produced C code
    //change the working dir back to original
    axo_chdir(orig_cwd);
    if (!prog_return){
      char* code = axo_get_code(state);
      overwrite_file_with_string(state->output_c_file, code);
      free(code);
      //Compile program
      char* compiler_cmd;
      int res = 1;
      switch(state->config.cc){
        case axo_gcc_cc_kind:
          compiler_cmd = fmtstr("gcc %s -o %s -g", state->output_c_file, state->output_file);
          res = system(compiler_cmd) >> 8;
          break;
        default:
          fprintf(stderr, "This C compiler is not yet supported!\n");
          break;
      }
      if (res != 0)
        printf("Error while compiling the output C file! D:\n");
      prog_return = prog_return||res;
      if (prog_return) return prog_return;
      if (state->run){
        #ifdef _WIN32
          prog_return = system(fmt_str((char[512]){}, "%s", state->output_file)) >> 8;
        #else
          prog_return = system(fmt_str((char[512]){}, "./%s", state->output_file)) >> 8;
        #endif
        remove(state->output_file);
        remove(state->output_c_file);
      }else if (!(state->config.keep_c)){
        remove(state->output_c_file);
      }
    }
    // printf("\n\n%s\n", axo_axelotl_str);
  }
  //Time the action if the according option was and is true
  if (state->config.timer && measure_time && !(state->silenced)){
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    axo_lolprintf(state->config.color_support, rand(), "Took: %fs\n", cpu_time_used);
  }
  // printf("Returning: %d\n", prog_return);
  return prog_return;
}
