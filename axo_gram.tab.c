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
  #include "src/utils/utils.h"
  #include <stdint.h>
  #include "src/axo.h"
  #include "axo_gram.tab.h"
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
  int axo_no_printf(const char* fmt, ...){
    return 0;
  }
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
  #define axo_is_valid_rval(EXPR) (((EXPR).typ.kind!=axo_no_kind) && ((EXPR).kind!=axo_expr_assigned_declaration_kind))
  #define axo_validate_rval(LOC, EXPR) ({ \
    AXO_RVAL_WAS_VALID=true; \
    if (!axo_is_valid_rval(EXPR)){ \
      AXO_RVAL_WAS_VALID=false; \
      if ((EXPR).kind == axo_expr_assigned_declaration_kind) \
        yyerror(LOC, axo_err_msg(axo_undeclared_assignment_expr_err_code)); \
      else if (EXPR.lval_kind==axo_var_lval_kind) \
        yyerror(LOC, axo_err_msg(axo_undeclared_var_err_code)); \
      else \
        yyerror(LOC, axo_err_msg(axo_invalid_rval_err_code)); \
    } \
    AXO_RVAL_WAS_VALID; \
  })

  #define axo_is_valid_expr_as_statement(EXPR) (((EXPR).typ.kind!=axo_no_kind))
  #define axo_validate_expr_as_statement(LOC, EXPR) ({ \
    AXO_RVAL_WAS_VALID=true; \
    if (!axo_is_valid_expr_as_statement(EXPR)){ \
      AXO_RVAL_WAS_VALID=false; \
      if (EXPR.lval_kind==axo_var_lval_kind) \
        yyerror(LOC, axo_err_msg(axo_undeclared_var_err_code)); \
      else \
        yyerror(LOC, axo_err_msg(axo_invalid_rval_err_code)); \
    } \
    AXO_RVAL_WAS_VALID; \
  })
  
  #define axo_none_check(T) ((T).kind == axo_none_kind)

#line 135 "axo_gram.tab.c"

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
  YYSYMBOL_TAG_TYP = 12,                   /* "#typ"  */
  YYSYMBOL_PROVIDED_TAG = 13,              /* "#provided"  */
  YYSYMBOL_FN_KWRD = 14,                   /* "fn"  */
  YYSYMBOL_WHILE_KWRD = 15,                /* "while"  */
  YYSYMBOL_SWITCH_KWRD = 16,               /* "switch"  */
  YYSYMBOL_CASE_KWRD = 17,                 /* "case"  */
  YYSYMBOL_FOR_KWRD = 18,                  /* "for"  */
  YYSYMBOL_EACH_KWRD = 19,                 /* "each"  */
  YYSYMBOL_IN_KWRD = 20,                   /* "in"  */
  YYSYMBOL_IF_KWRD = 21,                   /* "if"  */
  YYSYMBOL_ELSE_KWRD = 22,                 /* "else"  */
  YYSYMBOL_EQ_OP = 23,                     /* "=="  */
  YYSYMBOL_INEQ_OP = 24,                   /* "!="  */
  YYSYMBOL_EQ_SMLR_OP = 25,                /* ">="  */
  YYSYMBOL_EQ_GRTR_OP = 26,                /* "<="  */
  YYSYMBOL_BIT_OR_OP = 27,                 /* "or"  */
  YYSYMBOL_BIT_AND_OP = 28,                /* "and"  */
  YYSYMBOL_LOGICAL_OR_OP = 29,             /* "||"  */
  YYSYMBOL_LOGICAL_AND_OP = 30,            /* "&&"  */
  YYSYMBOL_LEFT_SHIFT_OP = 31,             /* "<<"  */
  YYSYMBOL_RIGHT_SHIFT_OP = 32,            /* ">>"  */
  YYSYMBOL_TILL_KWRD = 33,                 /* "till"  */
  YYSYMBOL_NULL_KWRD = 34,                 /* "null"  */
  YYSYMBOL_INCR_OP = 35,                   /* "++"  */
  YYSYMBOL_DECR_OP = 36,                   /* "--"  */
  YYSYMBOL_ASSIGN_ADD = 37,                /* "+="  */
  YYSYMBOL_ASSIGN_SUB = 38,                /* "-="  */
  YYSYMBOL_ASSIGN_MUL = 39,                /* "*="  */
  YYSYMBOL_ASSIGN_DIV = 40,                /* "/="  */
  YYSYMBOL_ASSIGN_MOD = 41,                /* "%="  */
  YYSYMBOL_ASSIGN_AND_CALL_ERROR = 42,     /* "?="  */
  YYSYMBOL_WALRUS_OP = 43,                 /* ":="  */
  YYSYMBOL_ENUM_KWRD = 44,                 /* "enum"  */
  YYSYMBOL_STRUCT_KWRD = 45,               /* "struct"  */
  YYSYMBOL_USE_KWRD = 46,                  /* "use"  */
  YYSYMBOL_INCLUDE_KWRD = 47,              /* "include"  */
  YYSYMBOL_STRUCT_LITERAL_START = 48,      /* "struct{"  */
  YYSYMBOL_DOT_FIELD = 49,                 /* ".field"  */
  YYSYMBOL_MODULE_KWRD = 50,               /* "module"  */
  YYSYMBOL_ARROW_OP = 51,                  /* "->"  */
  YYSYMBOL_NONE_KWRD = 52,                 /* "none"  */
  YYSYMBOL_BYTE_LITERAL = 53,              /* "byte literal"  */
  YYSYMBOL_SZ_OF_KWRD = 54,                /* "sz_of"  */
  YYSYMBOL_TYPE_SZ_KWRD = 55,              /* "type_sz"  */
  YYSYMBOL_DEFER_KWRD = 56,                /* "defer"  */
  YYSYMBOL_LINE_TAG = 57,                  /* "#line"  */
  YYSYMBOL_COLUMN_TAG = 58,                /* "#column"  */
  YYSYMBOL_FILE_TAG = 59,                  /* "#file"  */
  YYSYMBOL_FLAG_TAG = 60,                  /* "#flag"  */
  YYSYMBOL_SOURCE_TAG = 61,                /* "#source"  */
  YYSYMBOL_C_TAG = 62,                     /* "#C"  */
  YYSYMBOL_CONST_KWRD = 63,                /* "const"  */
  YYSYMBOL_MODULE_ACCESS = 64,             /* "::"  */
  YYSYMBOL_VOLATILE_KWRD = 65,             /* "volatile"  */
  YYSYMBOL_COMPTIME_VAR = 66,              /* COMPTIME_VAR  */
  YYSYMBOL_COMPTIME_CALL = 67,             /* COMPTIME_CALL  */
  YYSYMBOL_MACRO_GLUE = 68,                /* MACRO_GLUE  */
  YYSYMBOL_IDENTIFIER_PREC = 69,           /* IDENTIFIER_PREC  */
  YYSYMBOL_70_ = 70,                       /* '$'  */
  YYSYMBOL_EXPR_AS_STATEMENT = 71,         /* EXPR_AS_STATEMENT  */
  YYSYMBOL_72_ = 72,                       /* '='  */
  YYSYMBOL_73_ = 73,                       /* '?'  */
  YYSYMBOL_74_ = 74,                       /* '<'  */
  YYSYMBOL_75_ = 75,                       /* '>'  */
  YYSYMBOL_76_ = 76,                       /* '+'  */
  YYSYMBOL_77_ = 77,                       /* '-'  */
  YYSYMBOL_78_ = 78,                       /* '*'  */
  YYSYMBOL_79_ = 79,                       /* '/'  */
  YYSYMBOL_80_ = 80,                       /* '%'  */
  YYSYMBOL_LOOP_PREC = 81,                 /* LOOP_PREC  */
  YYSYMBOL_82_ = 82,                       /* '.'  */
  YYSYMBOL_83_ = 83,                       /* '!'  */
  YYSYMBOL_84_ = 84,                       /* '('  */
  YYSYMBOL_85_ = 85,                       /* ':'  */
  YYSYMBOL_UMINUS = 86,                    /* UMINUS  */
  YYSYMBOL_87_ = 87,                       /* '@'  */
  YYSYMBOL_88_ = 88,                       /* '^'  */
  YYSYMBOL_CALL_PREC = 89,                 /* CALL_PREC  */
  YYSYMBOL_90_ = 90,                       /* '['  */
  YYSYMBOL_STRUCT_LIT_NAMED_FIELD = 91,    /* STRUCT_LIT_NAMED_FIELD  */
  YYSYMBOL_TYPE_Q_PREC = 92,               /* TYPE_Q_PREC  */
  YYSYMBOL_93_ = 93,                       /* ')'  */
  YYSYMBOL_94_ = 94,                       /* ';'  */
  YYSYMBOL_95_ = 95,                       /* '{'  */
  YYSYMBOL_96_ = 96,                       /* '}'  */
  YYSYMBOL_97_ = 97,                       /* '|'  */
  YYSYMBOL_98_ = 98,                       /* ']'  */
  YYSYMBOL_99_ = 99,                       /* ','  */
  YYSYMBOL_YYACCEPT = 100,                 /* $accept  */
  YYSYMBOL_declarations = 101,             /* declarations  */
  YYSYMBOL_declaration = 102,              /* declaration  */
  YYSYMBOL_c_code = 103,                   /* c_code  */
  YYSYMBOL_global_code_scope_start = 104,  /* global_code_scope_start  */
  YYSYMBOL_global_code_scope = 105,        /* global_code_scope  */
  YYSYMBOL_struct_def = 106,               /* struct_def  */
  YYSYMBOL_module_info = 107,              /* module_info  */
  YYSYMBOL_statements = 108,               /* statements  */
  YYSYMBOL_index_access = 109,             /* index_access  */
  YYSYMBOL_identifier = 110,               /* identifier  */
  YYSYMBOL_incr_decr_op = 111,             /* incr_decr_op  */
  YYSYMBOL_comptime_expr = 112,            /* comptime_expr  */
  YYSYMBOL_expr = 113,                     /* expr  */
  YYSYMBOL_stat_arr_literal_start = 114,   /* stat_arr_literal_start  */
  YYSYMBOL_arr_lit_start = 115,            /* arr_lit_start  */
  YYSYMBOL_empty_arr_dims = 116,           /* empty_arr_dims  */
  YYSYMBOL_stat_arr_literal = 117,         /* stat_arr_literal  */
  YYSYMBOL_arr_literal = 118,              /* arr_literal  */
  YYSYMBOL_statement = 119,                /* statement  */
  YYSYMBOL_matching_statement = 120,       /* matching_statement  */
  YYSYMBOL_switch_statement_start = 121,   /* switch_statement_start  */
  YYSYMBOL_switch_statement = 122,         /* switch_statement  */
  YYSYMBOL_switch_body = 123,              /* switch_body  */
  YYSYMBOL_switch_branch = 124,            /* switch_branch  */
  YYSYMBOL_switch_case = 125,              /* switch_case  */
  YYSYMBOL_switch_expr_list = 126,         /* switch_expr_list  */
  YYSYMBOL_if_condition = 127,             /* if_condition  */
  YYSYMBOL_matching_if_statement = 128,    /* matching_if_statement  */
  YYSYMBOL_non_matching_statement = 129,   /* non_matching_statement  */
  YYSYMBOL_non_matching_if_statement = 130, /* non_matching_if_statement  */
  YYSYMBOL_till_loop_start = 131,          /* till_loop_start  */
  YYSYMBOL_while_loop_base = 132,          /* while_loop_base  */
  YYSYMBOL_matching_while = 133,           /* matching_while  */
  YYSYMBOL_non_matching_while = 134,       /* non_matching_while  */
  YYSYMBOL_for_loop_start = 135,           /* for_loop_start  */
  YYSYMBOL_for_loop_init = 136,            /* for_loop_init  */
  YYSYMBOL_for_loop_base = 137,            /* for_loop_base  */
  YYSYMBOL_matching_for_loop = 138,        /* matching_for_loop  */
  YYSYMBOL_non_matching_for_loop = 139,    /* non_matching_for_loop  */
  YYSYMBOL_matching_each_loop = 140,       /* matching_each_loop  */
  YYSYMBOL_non_matching_each_loop = 141,   /* non_matching_each_loop  */
  YYSYMBOL_each_iter_dims = 142,           /* each_iter_dims  */
  YYSYMBOL_each_loop_base = 143,           /* each_loop_base  */
  YYSYMBOL_assign_op = 144,                /* assign_op  */
  YYSYMBOL_assignment = 145,               /* assignment  */
  YYSYMBOL_special_assignment = 146,       /* special_assignment  */
  YYSYMBOL_arr_multidim_typ = 147,         /* arr_multidim_typ  */
  YYSYMBOL_arr_typ = 148,                  /* arr_typ  */
  YYSYMBOL_func_typ_start = 149,           /* func_typ_start  */
  YYSYMBOL_func_typ_args = 150,            /* func_typ_args  */
  YYSYMBOL_func_typ = 151,                 /* func_typ  */
  YYSYMBOL_no_q_typ = 152,                 /* no_q_typ  */
  YYSYMBOL_val_typ = 153,                  /* val_typ  */
  YYSYMBOL_type_qualifier = 154,           /* type_qualifier  */
  YYSYMBOL_typ_q = 155,                    /* typ_q  */
  YYSYMBOL_called_expr = 156,              /* called_expr  */
  YYSYMBOL_func_call_start = 157,          /* func_call_start  */
  YYSYMBOL_func_call = 158,                /* func_call  */
  YYSYMBOL_code_scope_start = 159,         /* code_scope_start  */
  YYSYMBOL_code_scope = 160,               /* code_scope  */
  YYSYMBOL_func_def_name = 161,            /* func_def_name  */
  YYSYMBOL_func_def_ret_typ = 162,         /* func_def_ret_typ  */
  YYSYMBOL_func_def_start = 163,           /* func_def_start  */
  YYSYMBOL_struct_literal_start = 164,     /* struct_literal_start  */
  YYSYMBOL_struct_literal = 165,           /* struct_literal  */
  YYSYMBOL_func_def = 166,                 /* func_def  */
  YYSYMBOL_func_arg = 167,                 /* func_arg  */
  YYSYMBOL_func_args = 168,                /* func_args  */
  YYSYMBOL_enum_names = 169                /* enum_names  */
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
#define YYLAST   1814

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  100
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  201
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  367

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   330


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
       2,     2,     2,    83,     2,     2,    70,    80,     2,     2,
      84,    93,    78,    76,    99,    77,    82,    79,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    85,    94,
      74,    72,    75,    73,    87,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    90,     2,    98,    88,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    95,    97,    96,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    71,    81,    86,    89,    91,
      92
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   213,   213,   214,   218,   236,   270,   275,   302,   337,
     344,   347,   350,   354,   362,   376,   380,   393,   400,   406,
     420,   427,   434,   440,   460,   463,   489,   490,   496,   505,
     511,   527,   532,   539,   555,   557,   566,   567,   568,   569,
     577,   593,   594,   595,   596,   597,   598,   599,   605,   615,
     624,   625,   626,   664,   681,   682,   693,   704,   715,   726,
     737,   748,   757,   768,   777,   786,   795,   818,   847,   851,
     860,   869,   877,   885,   893,   894,   895,   926,   941,   956,
     971,   982,   985,   990,   999,  1005,  1021,  1053,  1068,  1097,
    1097,  1099,  1105,  1111,  1130,  1147,  1151,  1165,  1172,  1179,
    1182,  1190,  1207,  1208,  1209,  1210,  1213,  1223,  1233,  1241,
    1248,  1252,  1255,  1269,  1277,  1283,  1289,  1294,  1295,  1296,
    1297,  1300,  1303,  1308,  1318,  1325,  1334,  1343,  1349,  1354,
    1364,  1374,  1382,  1391,  1399,  1407,  1416,  1426,  1430,  1435,
    1449,  1463,  1478,  1483,  1515,  1518,  1521,  1524,  1527,  1532,
    1542,  1548,  1561,  1569,  1580,  1593,  1602,  1613,  1614,  1617,
    1625,  1633,  1636,  1637,  1638,  1646,  1650,  1657,  1658,  1666,
    1669,  1674,  1694,  1700,  1708,  1724,  1740,  1755,  1778,  1784,
    1790,  1796,  1806,  1840,  1845,  1852,  1897,  1913,  1934,  1965,
    1979,  1989,  2011,  2020,  2038,  2045,  2052,  2066,  2072,  2081,
    2093,  2098
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
  "\"#typ\"", "\"#provided\"", "\"fn\"", "\"while\"", "\"switch\"",
  "\"case\"", "\"for\"", "\"each\"", "\"in\"", "\"if\"", "\"else\"",
  "\"==\"", "\"!=\"", "\">=\"", "\"<=\"", "\"or\"", "\"and\"", "\"||\"",
  "\"&&\"", "\"<<\"", "\">>\"", "\"till\"", "\"null\"", "\"++\"", "\"--\"",
  "\"+=\"", "\"-=\"", "\"*=\"", "\"/=\"", "\"%=\"", "\"?=\"", "\":=\"",
  "\"enum\"", "\"struct\"", "\"use\"", "\"include\"", "\"struct{\"",
  "\".field\"", "\"module\"", "\"->\"", "\"none\"", "\"byte literal\"",
  "\"sz_of\"", "\"type_sz\"", "\"defer\"", "\"#line\"", "\"#column\"",
  "\"#file\"", "\"#flag\"", "\"#source\"", "\"#C\"", "\"const\"", "\"::\"",
  "\"volatile\"", "COMPTIME_VAR", "COMPTIME_CALL", "MACRO_GLUE",
  "IDENTIFIER_PREC", "'$'", "EXPR_AS_STATEMENT", "'='", "'?'", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "LOOP_PREC", "'.'", "'!'",
  "'('", "':'", "UMINUS", "'@'", "'^'", "CALL_PREC", "'['",
  "STRUCT_LIT_NAMED_FIELD", "TYPE_Q_PREC", "')'", "';'", "'{'", "'}'",
  "'|'", "']'", "','", "$accept", "declarations", "declaration", "c_code",
  "global_code_scope_start", "global_code_scope", "struct_def",
  "module_info", "statements", "index_access", "identifier",
  "incr_decr_op", "comptime_expr", "expr", "stat_arr_literal_start",
  "arr_lit_start", "empty_arr_dims", "stat_arr_literal", "arr_literal",
  "statement", "matching_statement", "switch_statement_start",
  "switch_statement", "switch_body", "switch_branch", "switch_case",
  "switch_expr_list", "if_condition", "matching_if_statement",
  "non_matching_statement", "non_matching_if_statement", "till_loop_start",
  "while_loop_base", "matching_while", "non_matching_while",
  "for_loop_start", "for_loop_init", "for_loop_base", "matching_for_loop",
  "non_matching_for_loop", "matching_each_loop", "non_matching_each_loop",
  "each_iter_dims", "each_loop_base", "assign_op", "assignment",
  "special_assignment", "arr_multidim_typ", "arr_typ", "func_typ_start",
  "func_typ_args", "func_typ", "no_q_typ", "val_typ", "type_qualifier",
  "typ_q", "called_expr", "func_call_start", "func_call",
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

#define YYPACT_NINF (-131)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-181)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -131,   311,  -131,   -23,  -131,     3,   171,  -131,    26,    36,
      47,    58,    -9,  -131,    61,    77,    79,  -131,  -131,    15,
     299,   171,   -80,  -131,  -131,  -131,  -131,  -131,  -131,     2,
    -131,   222,   -54,  -131,  -131,    71,   171,  -131,   421,    18,
    -131,   171,  -131,  -131,  -131,   124,    63,    65,  -131,  -131,
    -131,     1,  -131,  -131,  -131,    70,  -131,   149,  -131,  -131,
     171,   560,  -131,   171,  -131,  -131,  -131,   171,  -131,  -131,
    -131,   -50,    82,    80,  -131,  -131,  -131,  -131,  -131,   162,
     425,    85,  -131,  -131,  -131,  -131,  -131,  -131,  -131,   108,
     909,  -131,  -131,   943,   943,  -131,   943,    89,  -131,   977,
    -131,    92,    94,   875,  -131,  -131,  -131,  -131,  -131,   943,
     943,   943,   115,  -131,  -131,  -131,  -131,  -131,  1463,    12,
    1011,    19,  -131,  -131,  -131,  -131,   100,  -131,   875,  -131,
    -131,  -131,  -131,   875,  -131,  -131,   782,    90,   875,  -131,
    -131,  -131,  -131,   875,  -131,  -131,     0,   943,   -49,  -131,
    -131,   -42,  -131,  -131,  -131,   190,   199,   425,   654,  -131,
     -44,   135,   202,  -131,   -41,   207,   206,  -131,  1531,  1620,
    1531,  1641,   210,   -37,  1531,   943,   171,  -131,   875,   875,
     875,   875,   -11,   130,  1348,  -131,   943,   943,   943,   943,
     943,   943,   943,   943,  -131,  -131,   943,   943,   943,   943,
     943,  -131,   169,   943,   943,   943,   943,   943,   943,   943,
     943,   140,  -131,   219,  -131,   943,    42,   943,  -131,   943,
      57,  1135,   223,   469,   943,  -131,   208,  -131,  -131,   139,
     138,  -131,   943,  -131,  -131,  -131,  -131,  -131,   159,  1531,
    -131,   943,  -131,  1045,  -131,  -131,    -4,  -131,  -131,   226,
     943,   161,  -131,   425,  -131,  -131,  -131,   167,   943,  1370,
     147,   220,  -131,   258,   258,  1724,  1724,   744,  1709,    66,
      66,  1531,  1531,  1531,  1531,  1531,   171,  1552,  1724,  1724,
     505,   505,   -13,   -13,   -13,   171,   163,  1531,   943,  -131,
    1531,  1531,   408,  -131,   362,  -131,  1531,   688,   875,   191,
      -7,   875,   465,    62,   139,   943,  1206,   943,  1531,   -31,
    1531,   151,  -131,  1531,   943,  -131,   943,  1531,  -131,  -131,
     875,  -131,  1079,   153,  -131,  1531,  -131,  1531,  1277,  -131,
     875,  -131,   241,  -131,   943,  -131,  -131,   943,  1531,   943,
     230,    64,  1620,   875,  1531,   943,  -131,  1531,  1441,   -38,
     -20,  -131,   943,  -131,  -131,  1531,  1531,  1531,   943,   231,
    -131,  1531,  -131,  1531,  1620,   943,  1620
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,   159,     4,     0,     0,   183,     0,     0,
       0,     0,     0,   161,     0,     0,     0,   169,   170,     0,
       0,     0,     0,    21,     6,    18,    26,    15,     7,     0,
     163,     0,     0,   162,   165,     0,     0,   167,     0,     0,
       3,     0,    13,    14,   159,     0,     0,     0,    10,    11,
      24,     0,    17,    16,    20,     0,   154,     0,   160,   149,
       0,     0,   150,     0,   157,   155,   158,     0,   184,   166,
     168,   159,     0,     0,   178,    26,   193,    19,     9,     0,
     197,     0,    12,   164,   153,   151,    34,    35,    36,    30,
       0,    98,    97,     0,     0,   127,     0,     0,    39,   186,
      38,     0,     0,     0,    71,    72,    73,    33,    77,     0,
       0,     0,    81,    92,    22,    52,    75,    37,    91,     0,
       0,     0,    87,    74,    27,    89,     0,    99,     0,   102,
      90,   117,   130,     0,   104,   119,     0,     0,     0,   103,
     118,   105,   120,     0,    50,    51,     0,   173,     0,    54,
      95,     0,    66,   152,   156,     0,     0,   197,     0,   200,
       0,   159,     0,   198,     0,     0,     0,    94,    93,   124,
     106,   115,     0,    30,   187,     0,     0,   100,     0,     0,
       0,     0,    43,    62,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,     0,     0,     0,     0,
       0,    68,   142,     0,     0,     0,     0,     0,     0,     0,
       0,    49,   171,     0,    48,     0,     0,     0,    86,     0,
      35,     0,     0,     0,     0,   121,    89,   125,   126,     0,
      52,   128,     0,   131,   132,   133,   134,    30,     0,   174,
     177,   176,   192,   190,   181,   182,     0,   179,     5,     0,
       0,   194,    23,     0,    25,    40,   142,     0,     0,     0,
       0,     0,    47,    57,    58,    59,    60,    61,    63,    65,
      64,   144,   145,   146,   147,   148,     0,     0,    55,    56,
      41,    42,    44,    45,    46,     0,     0,    28,     0,    67,
     143,    80,     0,    84,     0,    88,   113,     0,     0,   111,
       0,     0,     0,     0,     0,     0,     0,     0,   175,    30,
     189,   185,   201,   195,     0,   199,     0,   188,    69,    70,
       0,    96,     0,     0,   172,    29,    85,    78,     0,   107,
       0,   108,     0,   112,     0,   116,   122,     0,   135,   138,
       0,     0,   139,     0,   101,     0,     8,   196,     0,    30,
      53,    76,     0,   109,   110,   114,   136,   137,     0,     0,
     129,   191,   123,    79,   141,     0,   140
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -131,  -131,  -131,  -131,  -131,  -131,   251,  -131,   182,  -131,
    -125,  -131,  -131,    -6,  -131,  -131,  -131,  -131,  -131,  -124,
     -47,  -131,  -131,  -131,   -35,  -131,  -131,   -72,  -131,  -130,
    -131,  -131,   -56,  -131,  -131,  -131,  -131,   -52,  -131,  -131,
    -131,  -131,   -45,   -43,  -131,  -131,  -131,  -131,  -131,  -131,
    -131,  -131,   227,    -1,   -60,   -34,  -131,  -131,  -131,  -131,
     228,  -131,  -131,  -131,  -131,  -131,  -131,    13,   112,  -131
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    24,    25,    26,    27,    28,    51,    61,   216,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   297,   298,   299,   300,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   303,   143,   217,   144,   145,    29,    30,    31,
      32,    33,    34,   162,    36,    37,   147,   148,   149,    75,
     150,    73,    38,    39,   151,   152,    40,   163,   164,   160
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      35,   146,    70,   228,   225,    45,   237,    81,   234,    42,
     333,   230,   231,   236,   155,   194,   195,    59,    60,    57,
      58,   238,   194,   195,   194,   195,   166,   166,    41,   201,
      65,   178,    46,   166,  -180,   258,   201,    72,   201,    66,
      77,   345,    47,   146,   240,    67,   324,   179,     9,   248,
     241,   180,   252,    48,   242,   249,   177,   243,   253,    85,
     181,    49,   153,    17,    52,    18,   154,   214,   146,   211,
     215,   212,   213,   146,   214,    50,   146,   215,   146,   215,
      53,   226,    54,   146,   168,    68,   227,   169,   170,   311,
     171,   233,   334,   174,    82,   253,   235,    55,   146,    62,
      63,   194,   195,   182,   183,   184,   178,   178,   178,   178,
     218,   219,    70,    74,   221,   201,   222,   223,   146,   146,
     146,   146,   179,   179,   179,   179,   180,   180,   180,   180,
      78,   261,   227,   233,   235,   181,   181,   181,   181,   288,
     289,   239,   206,   207,   208,   209,   210,    79,   211,    80,
     212,   213,    83,   214,   -83,   -83,   215,   304,   305,   339,
     340,   339,   359,    84,   157,   194,   195,   156,   159,   259,
     165,   336,   166,   172,   331,   260,   175,    44,   176,   201,
     263,   264,   265,   266,   267,   268,   269,   270,   185,   232,
     271,   272,   273,   274,   275,   224,   244,   277,   278,   279,
     280,   281,   282,   283,   284,   245,   353,   250,   251,   287,
     254,   290,   255,   291,   212,   213,   257,   214,   296,   360,
     215,   276,   295,    13,   285,   286,   306,   293,    44,   302,
     301,   307,   312,   314,    17,   308,    18,   310,   146,   316,
     319,   146,   320,   332,   313,   346,   351,   324,   178,   354,
     358,   365,   317,    19,   335,    20,    43,   158,    21,   341,
     146,    22,   330,    69,   179,     0,   315,    76,   180,   246,
     146,     0,     0,   335,    13,   321,     0,   181,     0,     0,
       0,     0,   325,   146,   323,    17,   327,    18,   328,   192,
     193,   296,     0,   194,   195,     0,   338,     0,     0,   342,
       0,   344,     0,     0,    19,    44,    20,   201,   347,    21,
     348,     2,    22,    56,     0,    64,   350,     3,     0,     0,
       0,     0,     4,     5,     6,     7,     0,     0,   355,     0,
       0,   356,     0,   357,   206,   207,   208,   209,   210,   361,
     211,     0,   212,   213,     0,   214,   363,     0,   215,     0,
       0,    13,   364,     0,     0,     8,     9,    10,    11,   366,
       0,    12,    17,    13,    18,    86,    87,    88,    89,     0,
       0,    14,    15,    16,    17,     0,    18,     0,     0,     0,
       0,    19,     0,    20,     0,     0,    21,     0,     0,    22,
       0,     0,     0,    19,     0,    20,    98,     0,    21,     0,
       0,    22,     0,     0,     0,     0,    23,     0,     0,     0,
      99,    86,    87,    88,    89,   100,   101,   102,     0,   104,
     105,   106,     0,     0,     0,     0,     0,    71,   107,     0,
       0,   161,   108,     0,     0,     0,     0,     0,     0,   109,
       0,     0,    98,     0,     0,   110,   111,     0,     0,     0,
       0,     0,   112,     0,     0,     0,    99,     0,     0,    59,
      60,   100,   101,   102,     0,   104,   105,   106,    86,    87,
      88,    89,     0,    13,   107,    44,     0,    13,   108,     0,
       0,     0,     0,     0,    17,   109,    18,     0,    17,     0,
      18,   110,   111,     0,     0,     0,     0,     0,   112,    98,
       0,     0,     0,    19,     0,    20,   326,    19,    21,    20,
       0,    22,    21,    99,     0,    22,     0,     0,   100,   101,
     102,    13,   104,   105,   106,     0,     0,     0,     0,     0,
       0,   107,    17,     0,    18,   108,     0,     0,     0,     0,
     194,   195,   109,     0,     0,     0,     0,     0,   110,   111,
       0,    19,     0,    20,   201,   112,    21,     0,     0,   294,
       0,     0,   337,    86,    87,    88,    89,    90,    91,    92,
       0,     0,     0,     0,     0,    93,    94,     0,    95,     0,
       0,    96,     0,   208,   209,   210,     0,   211,     0,   212,
     213,     0,   214,    97,    98,   215,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    99,     0,
       0,     0,     0,   100,   101,   102,   103,   104,   105,   106,
       0,     0,     0,    17,     0,    18,   107,     0,     0,     0,
     108,     0,     0,     0,     0,     0,     0,   109,     0,     0,
       0,     0,     0,   110,   111,     0,     0,     0,     0,     0,
     112,     0,     0,     0,   113,    74,   114,    86,    87,    88,
      89,    90,    91,    92,     0,     0,     0,     0,     0,    93,
      94,     0,    95,     0,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,    98,     0,
       0,    86,    87,    88,    89,     0,     0,     0,     0,     0,
       0,     0,    99,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,   106,     0,     0,     0,    17,     0,    18,
     107,     0,    98,     0,   108,     0,     0,     0,     0,     0,
       0,   109,     0,     0,     0,     0,    99,   110,   111,     0,
       0,   100,   101,   102,   112,   104,   105,   106,   113,    74,
     247,     0,     0,     0,   107,     0,     0,     0,   108,     0,
       0,     0,     0,     0,     0,   109,     0,   186,   187,   188,
     189,   110,   111,     0,   191,   192,   193,     0,   112,   194,
     195,     0,     0,     0,   329,    86,    87,    88,    89,    90,
      91,    92,     0,   201,     0,     0,     0,    93,    94,     0,
      95,   229,     0,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,    98,     0,   204,   205,
     206,   207,   208,   209,   210,     0,   211,     0,   212,   213,
      99,   214,     0,     0,   215,   100,   101,   102,   103,   104,
     105,   106,     0,     0,     0,    17,     0,    18,   107,     0,
       0,     0,   108,     0,     0,     0,     0,     0,     0,   109,
       0,     0,     0,     0,     0,   110,   111,     0,     0,     0,
       0,     0,   112,     0,     0,     0,   113,    74,    86,    87,
      88,    89,    90,    91,    92,     0,     0,     0,     0,     0,
      93,    94,     0,    95,     0,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,    98,
       0,     0,    86,    87,    88,    89,     0,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,   106,     0,     0,     0,    17,     0,
      18,   107,     0,    98,     0,   108,    86,    87,    88,    89,
       0,     0,   109,     0,     0,     0,     0,    99,   110,   111,
       0,     0,   100,   101,   102,   112,   104,   105,   106,   113,
      74,     0,     0,     0,     0,   107,     0,    98,     0,   108,
      86,    87,    88,   173,     0,     0,   109,     0,     0,     0,
       0,    99,   110,   111,     0,     0,   100,   101,   102,   112,
     104,   105,   106,   167,     0,     0,     0,     0,     0,   107,
       0,    98,     0,   108,    86,   220,    88,    89,     0,     0,
     109,     0,     0,     0,     0,    99,   110,   111,     0,     0,
     100,   101,   102,   112,   104,   105,   106,     0,     0,     0,
       0,     0,     0,   107,     0,    98,     0,   108,    86,    87,
      88,   309,     0,     0,   109,     0,     0,     0,     0,    99,
     110,   111,     0,     0,   100,   101,   102,   112,   104,   105,
     106,     0,     0,     0,     0,     0,     0,   107,     0,    98,
       0,   108,    86,    87,    88,   349,     0,     0,   109,     0,
       0,     0,     0,    99,   110,   111,     0,     0,   100,   101,
     102,   112,   104,   105,   106,     0,     0,     0,     0,     0,
       0,   107,     0,    98,     0,   108,     0,     0,     0,     0,
       0,     0,   109,     0,     0,     0,     0,    99,   110,   111,
       0,     0,   100,   101,   102,   112,   104,   105,   106,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,   108,
       0,     0,     0,     0,     0,     0,   109,     0,   186,   187,
     188,   189,   110,   111,   190,   191,   192,   193,     0,   112,
     194,   195,   196,   197,   198,   199,   200,     0,     0,     0,
       0,     0,     0,     0,   201,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   256,   203,   204,
     205,   206,   207,   208,   209,   210,     0,   211,     0,   212,
     213,     0,   214,     0,     0,   215,     0,     0,     0,   186,
     187,   188,   189,     0,   292,   190,   191,   192,   193,     0,
       0,   194,   195,   196,   197,   198,   199,   200,     0,     0,
       0,     0,     0,     0,     0,   201,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   256,   203,
     204,   205,   206,   207,   208,   209,   210,     0,   211,     0,
     212,   213,     0,   214,     0,     0,   215,     0,     0,     0,
     186,   187,   188,   189,     0,   343,   190,   191,   192,   193,
       0,     0,   194,   195,   196,   197,   198,   199,   200,     0,
       0,     0,     0,     0,     0,     0,   201,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   256,
     203,   204,   205,   206,   207,   208,   209,   210,     0,   211,
       0,   212,   213,     0,   214,     0,     0,   215,     0,     0,
       0,   186,   187,   188,   189,     0,   352,   190,   191,   192,
     193,     0,     0,   194,   195,   196,   197,   198,   199,   200,
       0,     0,     0,   186,   187,   188,   189,   201,     0,   190,
     191,   192,   193,     0,     0,   194,   195,   196,   197,   198,
     199,   200,     0,     0,     0,     0,     0,     0,     0,   201,
     256,   203,   204,   205,   206,   207,   208,   209,   210,     0,
     211,     0,   212,   213,     0,   214,     0,     0,   215,     0,
       0,   262,   256,   203,   204,   205,   206,   207,   208,   209,
     210,     0,   211,     0,   212,   213,     0,   214,     0,     0,
     215,     0,     0,   318,   186,   187,   188,   189,     0,     0,
     190,   191,   192,   193,     0,     0,   194,   195,   196,   197,
     198,   199,   200,     0,     0,     0,   186,   187,   188,   189,
     201,     0,   190,   191,   192,   193,     0,     0,   194,   195,
     196,   197,   198,   199,   200,     0,     0,     0,     0,     0,
       0,     0,   201,   256,   203,   204,   205,   206,   207,   208,
     209,   210,     0,   211,     0,   212,   213,     0,   214,     0,
       0,   215,     0,     0,   362,   202,   203,   204,   205,   206,
     207,   208,   209,   210,     0,   211,     0,   212,   213,     0,
     214,     0,     0,   215,   186,   187,   188,   189,     0,     0,
     190,   191,   192,   193,     0,     0,   194,   195,   196,   197,
     198,   199,   200,     0,     0,   186,   187,   188,   189,     0,
     201,   190,   191,   192,   193,     0,     0,   194,   195,   196,
     197,   198,   199,   200,     0,     0,     0,     0,     0,     0,
       0,   201,     0,   256,   203,   204,   205,   206,   207,   208,
     209,   210,     0,   211,     0,   212,   213,     0,   214,     0,
       0,   215,     0,     0,   256,   203,   204,   205,   206,   207,
     208,   209,   210,     0,   211,     0,   212,   322,     0,   214,
       0,     0,   215,   186,   187,   188,   189,     0,     0,   190,
     191,   192,   193,     0,     0,   194,   195,   196,   197,   198,
     199,   200,     0,     0,   186,   187,   188,   189,     0,   201,
     190,   191,   192,   193,     0,     0,   194,   195,   196,   197,
     198,   199,   200,     0,     0,     0,     0,     0,     0,     0,
     201,     0,   256,   203,   204,   205,   206,     0,   208,   209,
     210,     0,   211,     0,   212,   213,     0,   214,     0,     0,
     215,     0,     0,   256,   203,   204,   205,   206,     0,   208,
     209,   210,     0,   211,     0,     0,   213,     0,   214,     0,
       0,   215,   186,   187,   188,   189,     0,     0,     0,     0,
     192,   193,     0,     0,   194,   195,     0,   186,   187,     0,
       0,     0,     0,     0,     0,   192,   193,     0,   201,   194,
     195,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   201,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   204,   205,   206,   207,   208,   209,   210,
       0,   211,     0,   212,   213,     0,   214,     0,     0,   215,
     206,   207,   208,   209,   210,     0,   211,     0,   212,   213,
       0,   214,     0,     0,   215
};

static const yytype_int16 yycheck[] =
{
       1,    61,    36,   133,   128,     6,     6,     6,   138,     6,
      17,   136,   136,   143,    64,    35,    36,    97,    98,    20,
      21,   146,    35,    36,    35,    36,    64,    64,    51,    49,
      31,   103,     6,    64,    84,    72,    49,    38,    49,    93,
      41,    72,     6,   103,    93,    99,    84,   103,    45,    93,
      99,   103,    93,     6,    96,    99,   103,    99,    99,    60,
     103,     3,    63,    63,     3,    65,    67,    87,   128,    82,
      90,    84,    85,   133,    87,    84,   136,    90,   138,    90,
       3,   128,     3,   143,    90,    14,   133,    93,    94,    93,
      96,   138,    99,    99,    93,    99,   143,    82,   158,    97,
      98,    35,    36,   109,   110,   111,   178,   179,   180,   181,
      98,    99,   146,    95,   120,    49,    97,    98,   178,   179,
     180,   181,   178,   179,   180,   181,   178,   179,   180,   181,
       6,   178,   179,   180,   181,   178,   179,   180,   181,    97,
      98,   147,    76,    77,    78,    79,    80,    84,    82,    84,
      84,    85,    82,    87,    97,    98,    90,    19,    20,    97,
      98,    97,    98,    14,    84,    35,    36,    85,     6,   175,
      85,   301,    64,    84,   298,   176,    84,     6,    84,    49,
     186,   187,   188,   189,   190,   191,   192,   193,    73,    99,
     196,   197,   198,   199,   200,    95,     6,   203,   204,   205,
     206,   207,   208,   209,   210,     6,   330,    72,     6,   215,
       3,   217,     6,   219,    84,    85,     6,    87,   224,   343,
      90,    52,   223,    52,    84,     6,   232,     4,     6,    90,
      22,    72,     6,    72,    63,   241,    65,   243,   298,    72,
      93,   301,    22,    52,   250,    94,    93,    84,   320,     8,
      20,    20,   258,    82,   301,    84,     5,    75,    87,   304,
     320,    90,   297,    36,   320,    -1,   253,    39,   320,   157,
     330,    -1,    -1,   320,    52,   276,    -1,   320,    -1,    -1,
      -1,    -1,   288,   343,   285,    63,   292,    65,   294,    31,
      32,   297,    -1,    35,    36,    -1,   302,    -1,    -1,   305,
      -1,   307,    -1,    -1,    82,     6,    84,    49,   314,    87,
     316,     0,    90,    14,    -1,    93,   322,     6,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    -1,    -1,   334,    -1,
      -1,   337,    -1,   339,    76,    77,    78,    79,    80,   345,
      82,    -1,    84,    85,    -1,    87,   352,    -1,    90,    -1,
      -1,    52,   358,    -1,    -1,    44,    45,    46,    47,   365,
      -1,    50,    63,    52,    65,     3,     4,     5,     6,    -1,
      -1,    60,    61,    62,    63,    -1,    65,    -1,    -1,    -1,
      -1,    82,    -1,    84,    -1,    -1,    87,    -1,    -1,    90,
      -1,    -1,    -1,    82,    -1,    84,    34,    -1,    87,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,
      48,     3,     4,     5,     6,    53,    54,    55,    -1,    57,
      58,    59,    -1,    -1,    -1,    -1,    -1,     6,    66,    -1,
      -1,     6,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    34,    -1,    -1,    83,    84,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    48,    -1,    -1,    97,
      98,    53,    54,    55,    -1,    57,    58,    59,     3,     4,
       5,     6,    -1,    52,    66,     6,    -1,    52,    70,    -1,
      -1,    -1,    -1,    -1,    63,    77,    65,    -1,    63,    -1,
      65,    83,    84,    -1,    -1,    -1,    -1,    -1,    90,    34,
      -1,    -1,    -1,    82,    -1,    84,    98,    82,    87,    84,
      -1,    90,    87,    48,    -1,    90,    -1,    -1,    53,    54,
      55,    52,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    63,    -1,    65,    70,    -1,    -1,    -1,    -1,
      35,    36,    77,    -1,    -1,    -1,    -1,    -1,    83,    84,
      -1,    82,    -1,    84,    49,    90,    87,    -1,    -1,    90,
      -1,    -1,    97,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    18,    -1,
      -1,    21,    -1,    78,    79,    80,    -1,    82,    -1,    84,
      85,    -1,    87,    33,    34,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    63,    -1,    65,    66,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    83,    84,    -1,    -1,    -1,    -1,    -1,
      90,    -1,    -1,    -1,    94,    95,    96,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    18,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    58,    59,    -1,    -1,    -1,    63,    -1,    65,
      66,    -1,    34,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    48,    83,    84,    -1,
      -1,    53,    54,    55,    90,    57,    58,    59,    94,    95,
      96,    -1,    -1,    -1,    66,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    23,    24,    25,
      26,    83,    84,    -1,    30,    31,    32,    -1,    90,    35,
      36,    -1,    -1,    -1,    96,     3,     4,     5,     6,     7,
       8,     9,    -1,    49,    -1,    -1,    -1,    15,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    74,    75,
      76,    77,    78,    79,    80,    -1,    82,    -1,    84,    85,
      48,    87,    -1,    -1,    90,    53,    54,    55,    56,    57,
      58,    59,    -1,    -1,    -1,    63,    -1,    65,    66,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    83,    84,    -1,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    94,    95,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      15,    16,    -1,    18,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    63,    -1,
      65,    66,    -1,    34,    -1,    70,     3,     4,     5,     6,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    48,    83,    84,
      -1,    -1,    53,    54,    55,    90,    57,    58,    59,    94,
      95,    -1,    -1,    -1,    -1,    66,    -1,    34,    -1,    70,
       3,     4,     5,     6,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    48,    83,    84,    -1,    -1,    53,    54,    55,    90,
      57,    58,    59,    94,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    34,    -1,    70,     3,     4,     5,     6,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    48,    83,    84,    -1,    -1,
      53,    54,    55,    90,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    34,    -1,    70,     3,     4,
       5,     6,    -1,    -1,    77,    -1,    -1,    -1,    -1,    48,
      83,    84,    -1,    -1,    53,    54,    55,    90,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    34,
      -1,    70,     3,     4,     5,     6,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    48,    83,    84,    -1,    -1,    53,    54,
      55,    90,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    34,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    48,    83,    84,
      -1,    -1,    53,    54,    55,    90,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    23,    24,
      25,    26,    83,    84,    29,    30,    31,    32,    -1,    90,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    82,    -1,    84,
      85,    -1,    87,    -1,    -1,    90,    -1,    -1,    -1,    23,
      24,    25,    26,    -1,    99,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    -1,    82,    -1,
      84,    85,    -1,    87,    -1,    -1,    90,    -1,    -1,    -1,
      23,    24,    25,    26,    -1,    99,    29,    30,    31,    32,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    82,
      -1,    84,    85,    -1,    87,    -1,    -1,    90,    -1,    -1,
      -1,    23,    24,    25,    26,    -1,    99,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    23,    24,    25,    26,    49,    -1,    29,
      30,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      82,    -1,    84,    85,    -1,    87,    -1,    -1,    90,    -1,
      -1,    93,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    82,    -1,    84,    85,    -1,    87,    -1,    -1,
      90,    -1,    -1,    93,    23,    24,    25,    26,    -1,    -1,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    23,    24,    25,    26,
      49,    -1,    29,    30,    31,    32,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    82,    -1,    84,    85,    -1,    87,    -1,
      -1,    90,    -1,    -1,    93,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    82,    -1,    84,    85,    -1,
      87,    -1,    -1,    90,    23,    24,    25,    26,    -1,    -1,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    23,    24,    25,    26,    -1,
      49,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    82,    -1,    84,    85,    -1,    87,    -1,
      -1,    90,    -1,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    -1,    82,    -1,    84,    85,    -1,    87,
      -1,    -1,    90,    23,    24,    25,    26,    -1,    -1,    29,
      30,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    23,    24,    25,    26,    -1,    49,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    72,    73,    74,    75,    76,    -1,    78,    79,
      80,    -1,    82,    -1,    84,    85,    -1,    87,    -1,    -1,
      90,    -1,    -1,    72,    73,    74,    75,    76,    -1,    78,
      79,    80,    -1,    82,    -1,    -1,    85,    -1,    87,    -1,
      -1,    90,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    -1,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    49,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    78,    79,    80,
      -1,    82,    -1,    84,    85,    -1,    87,    -1,    -1,    90,
      76,    77,    78,    79,    80,    -1,    82,    -1,    84,    85,
      -1,    87,    -1,    -1,    90
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   101,     0,     6,    11,    12,    13,    14,    44,    45,
      46,    47,    50,    52,    60,    61,    62,    63,    65,    82,
      84,    87,    90,    95,   102,   103,   104,   105,   106,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   162,   163,
     166,    51,     6,   106,     6,   153,     6,     6,     6,     3,
      84,   107,     3,     3,     3,    82,    14,   153,   153,    97,
      98,   108,    97,    98,    93,   153,    93,    99,    14,   152,
     155,     6,   153,   161,    95,   159,   160,   153,     6,    84,
      84,     6,    93,    82,    14,   153,     3,     4,     5,     6,
       7,     8,     9,    15,    16,    18,    21,    33,    34,    48,
      53,    54,    55,    56,    57,    58,    59,    66,    70,    77,
      83,    84,    90,    94,    96,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   143,   145,   146,   154,   156,   157,   158,
     160,   164,   165,   153,   153,    64,    85,    84,   108,     6,
     169,     6,   153,   167,   168,    85,    64,    94,   113,   113,
     113,   113,    84,     6,   113,    84,    84,   120,   127,   132,
     137,   143,   113,   113,   113,    73,    23,    24,    25,    26,
      29,    30,    31,    32,    35,    36,    37,    38,    39,    40,
      41,    49,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    82,    84,    85,    87,    90,   109,   144,    98,    99,
       4,   113,    97,    98,    95,   119,   120,   120,   129,    19,
     110,   119,    99,   120,   129,   120,   129,     6,   110,   113,
      93,    99,    96,    99,     6,     6,   168,    96,    93,    99,
      72,     6,    93,    99,     3,     6,    72,     6,    72,   113,
     153,   120,    93,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,    52,   113,   113,   113,
     113,   113,   113,   113,   113,    84,     6,   113,    97,    98,
     113,   113,    99,     4,    90,   153,   113,   123,   124,   125,
     126,    22,    90,   142,    19,    20,   113,    72,   113,     6,
     113,    93,     6,   113,    72,   167,    72,   113,    93,    93,
      22,   153,    85,   153,    84,   113,    98,   113,   113,    96,
     124,   119,    52,    17,    99,   120,   129,    97,   113,    97,
      98,   142,   113,    99,   113,    72,    94,   113,   113,     6,
     113,    93,    99,   119,     8,   113,   113,   113,    20,    98,
     119,   113,    93,   113,   113,    20,   113
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   100,   101,   101,   101,   101,   101,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     103,   104,   105,   106,   107,   107,   108,   108,   109,   109,
     110,   111,   111,   112,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   114,   114,
     114,   115,   115,   116,   116,   117,   117,   118,   118,   119,
     119,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   121,   122,   123,   123,
     124,   124,   125,   126,   126,   127,   128,   129,   129,   129,
     129,   130,   130,   131,   132,   133,   134,   135,   136,   137,
     137,   138,   139,   140,   141,   142,   142,   142,   142,   143,
     143,   143,   144,   145,   146,   146,   146,   146,   146,   147,
     147,   148,   148,   149,   149,   150,   150,   151,   151,   152,
     152,   152,   152,   152,   152,   153,   153,   154,   154,   155,
     155,   156,   156,   157,   157,   157,   157,   158,   159,   160,
     161,   161,   161,   162,   162,   163,   164,   164,   164,   164,
     164,   164,   165,   166,   167,   167,   167,   168,   168,   168,
     169,   169
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     6,     2,     1,     6,     3,
       2,     2,     3,     2,     2,     1,     2,     2,     1,     3,
       2,     1,     3,     5,     1,     4,     0,     2,     2,     3,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     2,     3,     3,     3,     3,     2,     2,
       1,     1,     1,     5,     1,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     1,     3,     2,     4,
       4,     1,     1,     1,     1,     1,     5,     1,     4,     6,
       3,     1,     2,     2,     3,     4,     2,     1,     3,     1,
       1,     1,     1,     2,     2,     1,     4,     1,     1,     1,
       2,     4,     1,     1,     1,     1,     2,     4,     2,     3,
       3,     1,     2,     1,     3,     2,     4,     1,     1,     1,
       1,     2,     4,     6,     2,     2,     2,     1,     2,     5,
       1,     2,     2,     2,     2,     2,     3,     3,     2,     4,
       7,     6,     1,     3,     3,     3,     3,     3,     3,     2,
       2,     3,     3,     3,     2,     2,     3,     2,     2,     1,
       2,     1,     1,     1,     3,     1,     2,     1,     2,     1,
       1,     2,     4,     1,     2,     3,     2,     2,     1,     3,
       1,     3,     3,     1,     2,     5,     1,     2,     4,     3,
       2,     5,     2,     2,     2,     3,     4,     0,     1,     3,
       1,     3
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
#line 213 "axo_gram.y"
                           {}
#line 2256 "axo_gram.tab.c"
    break;

  case 3: /* declarations: declarations func_def  */
#line 214 "axo_gram.y"
                          {
    axo_add_decl(state, axo_func_def_to_decl((yyvsp[0].function)));
    axo_free_func((yyvsp[0].function));
  }
#line 2265 "axo_gram.tab.c"
    break;

  case 4: /* declarations: declarations "#include"  */
#line 218 "axo_gram.y"
                           {
    if ((yyvsp[0].str)[0] == '<'){
      axo_add_decl(state, (axo_decl){.val = fmtstr("#include %s", (yyvsp[0].str)), .kind=axo_c_include_decl_kind});
    }else{
      char* path = &((yyvsp[0].str)[1]);
      path[strlen((yyvsp[0].str))-2] = '\0';
      // printf("Path of c_include: %s\nResolved path: %s\n", path, axo_resolve_path(path));
      char* res_path = axo_resolve_path(path);
      #ifdef __EMSCRIPTEN__
        char* code = axo_file_to_str(res_path);
        axo_add_decl(state, (axo_decl){.val = fmtstr("//#include \"%s\"\n%s", res_path, code), .kind=axo_c_include_decl_kind});
        free(code);
      #else
        axo_add_decl(state, (axo_decl){.val = fmtstr("#include \"%s\"", res_path), .kind=axo_c_include_decl_kind});
        free(res_path);
      #endif
    }
  }
#line 2288 "axo_gram.tab.c"
    break;

  case 5: /* declarations: declarations "enum" "identifier" '(' enum_names ')'  */
#line 236 "axo_gram.y"
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
      axo_set_var(state->global_scope, (axo_var){.name=field, .typ=axo_no_typ});
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
#line 2327 "axo_gram.tab.c"
    break;

  case 6: /* declarations: declarations declaration  */
#line 270 "axo_gram.y"
                             {
    axo_add_decl(state, (yyvsp[0].declaration_type));
  }
#line 2335 "axo_gram.tab.c"
    break;

  case 7: /* declaration: struct_def  */
#line 275 "axo_gram.y"
                         { //Fix! Make this use realloc less
    new_ptr_one(strct, axo_struct);
    *strct = (yyvsp[0].struct_type);
    char* decl = empty_str;
    strapnd(&decl, "typedef struct ");
    strapnd(&decl, (yyvsp[0].struct_type).name);
    strapnd(&decl, "{\n");
    for (int i=0; i<(yyvsp[0].struct_type).fields_len; i++){
      char* ntd = axo_name_typ_decl(strct->fields[i].name, strct->fields[i].typ);
      strapnd(&decl, ntd);
      strapnd(&decl, ";\n");
      free(ntd);
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
#line 2367 "axo_gram.tab.c"
    break;

  case 8: /* declaration: func_def_ret_typ func_def_name '(' func_args ')' ';'  */
#line 302 "axo_gram.y"
                                                         {
    axo_func fn = (axo_func){
      .name=(yyvsp[-4].function).name
    };
    int args_len = (yyvsp[-2].function).f_typ.args_len;
    if ((yyvsp[-4].function).args_names){
      args_len += (yyvsp[-4].function).f_typ.args_len;
      fn.args_names = (char**)malloc(args_len*sizeof(char*));
      fn.f_typ = (axo_func_typ){
        .args_len = 0,
        .args_types=(axo_typ*)malloc(args_len*sizeof(axo_typ)),
        .args_defs=(char**)malloc(args_len*sizeof(char*)),
      };
      for (int i=0; i<(yyvsp[-4].function).f_typ.args_len; i++){
        fn.args_names[fn.f_typ.args_len] = (yyvsp[-4].function).args_names[i];
        fn.f_typ.args_types[fn.f_typ.args_len] = (yyvsp[-4].function).f_typ.args_types[i];
        fn.f_typ.args_defs[fn.f_typ.args_len++] = (yyvsp[-4].function).f_typ.args_defs[i];
      }
      for (int i=0; i<(yyvsp[-2].function).f_typ.args_len; i++){
        fn.args_names[fn.f_typ.args_len] = (yyvsp[-2].function).args_names[i];
        fn.f_typ.args_types[fn.f_typ.args_len] = (yyvsp[-2].function).f_typ.args_types[i];
        fn.f_typ.args_defs[fn.f_typ.args_len++] = (yyvsp[-2].function).f_typ.args_defs[i];
      }
    }else{
      fn.args_names = (yyvsp[-2].function).args_names;
      fn.f_typ.args_defs = (yyvsp[-2].function).f_typ.args_defs;
      fn.f_typ.args_types = (yyvsp[-2].function).f_typ.args_types;
      fn.f_typ.args_len = args_len;
    }
    fn.f_typ.ret_typ = ((yyvsp[-5].typ_type).kind==axo_no_kind) ? axo_none_typ : (yyvsp[-5].typ_type);
    (yyval.declaration_type) = axo_func_decl_to_decl(fn);
    axo_free_func((yyvsp[-2].function));
    axo_free_scope(top_scope);
    strapnd(&((yyval.declaration_type).val), ";");
  }
#line 2407 "axo_gram.tab.c"
    break;

  case 9: /* declaration: "#provided" val_typ "identifier"  */
#line 337 "axo_gram.y"
                             {
    // printf("providing '%s'\n", $IDEN);
    axo_set_var(state->global_scope, (axo_var){.typ = (yyvsp[-1].typ_type), .name = alloc_str((yyvsp[0].str))});
    char* ntd = axo_name_typ_decl((yyvsp[0].str), (yyvsp[-1].typ_type));
    (yyval.declaration_type) = (axo_decl){.val=fmtstr("//provided %s", ntd)};
    free(ntd);
  }
#line 2419 "axo_gram.tab.c"
    break;

  case 10: /* declaration: "use" "identifier"  */
#line 344 "axo_gram.y"
               {
    (yyval.declaration_type) = axo_use_module(state, &(yylsp[0]), (yyvsp[0].str));
  }
#line 2427 "axo_gram.tab.c"
    break;

  case 11: /* declaration: "include" "string literal"  */
#line 347 "axo_gram.y"
                             {
    (yyval.declaration_type) = axo_include_file(state, &(yylsp[0]), (yyvsp[0].str), true);
  }
#line 2435 "axo_gram.tab.c"
    break;

  case 12: /* declaration: "module" module_info ')'  */
#line 350 "axo_gram.y"
                             {
    axo_load_module_defaults(state, &(yyvsp[-1].module_type));
    (yyval.declaration_type) = axo_add_module(state, (yyvsp[-1].module_type));
  }
#line 2444 "axo_gram.tab.c"
    break;

  case 13: /* declaration: "#typ" "identifier"  */
#line 354 "axo_gram.y"
                {
    char* name = alloc_str((yyvsp[0].str));
    axo_set_typ_def(&(yyloc), state, (axo_typ_def){.name=name, .typ=(axo_typ){.kind=axo_simple_kind, .simple=(axo_simple_t){.name=name, .cname=name}, .def="0"}});
      (yyval.declaration_type) = (axo_decl){
        .kind = axo_typ_def_decl_kind,
        .val = fmtstr("//accepting type %s", (yyvsp[0].str))
      };
  }
#line 2457 "axo_gram.tab.c"
    break;

  case 14: /* declaration: "#typ" struct_def  */
#line 362 "axo_gram.y"
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
    (yyval.declaration_type) = (axo_decl){.val=fmtstr("//Recognized struct '%s'", (yyvsp[0].struct_type).name)};
  }
#line 2476 "axo_gram.tab.c"
    break;

  case 15: /* declaration: global_code_scope  */
#line 376 "axo_gram.y"
                      {
    (yyval.declaration_type) = (axo_decl){.val=axo_scope_code((yyvsp[0].scope))};
    axo_free_scope((yyvsp[0].scope));
  }
#line 2485 "axo_gram.tab.c"
    break;

  case 16: /* declaration: "#source" "string literal"  */
#line 380 "axo_gram.y"
                             {
      char* res = alloc_str(&((yyvsp[0].str)[1]));
      res[strlen((yyvsp[0].str))-2] = '\0';
    if (axo_file_exists(res)){
      char* resolved = axo_resolve_path(res);
      resize_dyn_arr_if_needed(char*, state->extra_c_sources, state->extra_c_sources_len, axo_c_sources_cap);
      state->extra_c_sources[state->extra_c_sources_len++] = resolved;
    }else{
      yyerror(&(yylsp[0]), "File '%s' doesn't exist.", res);
      YYERROR;
    }
    (yyval.declaration_type) = (axo_decl){.val=fmtstr("//sourced %s", res)};
  }
#line 2503 "axo_gram.tab.c"
    break;

  case 17: /* declaration: "#flag" "string literal"  */
#line 393 "axo_gram.y"
                           {
    char* res = alloc_str(&((yyvsp[0].str)[1]));
    res[strlen((yyvsp[0].str))-2] = '\0';
    resize_dyn_arr_if_needed(char*, state->cc_flags, state->cc_flags_len, axo_cc_flags_len);
    state->cc_flags[state->cc_flags_len++] = alloc_str(res);
    (yyval.declaration_type) = (axo_decl){.val=fmtstr("//flag %s", res)};
  }
#line 2515 "axo_gram.tab.c"
    break;

  case 18: /* declaration: c_code  */
#line 400 "axo_gram.y"
           {
    (yyval.declaration_type) = (axo_decl){
      .kind=axo_c_code_decl_kind,
      .val=(yyvsp[0].str)
    };
  }
#line 2526 "axo_gram.tab.c"
    break;

  case 19: /* declaration: "identifier" "->" val_typ  */
#line 406 "axo_gram.y"
                      {
    axo_typ_def td = (axo_typ_def){
      .name=alloc_str((yyvsp[-2].str)),
      .typ=(yyvsp[0].typ_type)
    };
    td.typ.simple.name=td.typ.simple.cname=td.name;
    axo_set_typ_def(&(yyloc), state, td);
    (yyval.declaration_type) = (axo_decl){
      .kind=axo_typedef_decl_kind,
      .val=fmtstr("typedef %s %s;", axo_typ_to_c_str((yyvsp[0].typ_type)), (yyvsp[-2].str))
    };
  }
#line 2543 "axo_gram.tab.c"
    break;

  case 20: /* c_code: "#C" "string literal"  */
#line 420 "axo_gram.y"
                             {
    char* ret = alloc_str(&((yyvsp[0].str)[1]));
    ret[strlen(ret)-1] = '\0';
    (yyval.str) = ret;
  }
#line 2553 "axo_gram.tab.c"
    break;

  case 21: /* global_code_scope_start: '{'  */
#line 427 "axo_gram.y"
                              {
    axo_push_scope(scopes, axo_new_scope(top_scope));
    top_scope->to_global = state->global_scope;
    axo_code_scope_started = false;
  }
#line 2563 "axo_gram.tab.c"
    break;

  case 22: /* global_code_scope: global_code_scope_start statements '}'  */
#line 434 "axo_gram.y"
                                                           {
    (yyval.scope) = top_scope;
    scopes->len--;
  }
#line 2572 "axo_gram.tab.c"
    break;

  case 23: /* struct_def: "struct" "identifier" '(' func_args ')'  */
#line 440 "axo_gram.y"
                                                {
    axo_struct_field* fields = (axo_struct_field*)malloc((yyvsp[-1].function).f_typ.args_len*sizeof(axo_struct_field));
    for (int i = 0; i<(yyvsp[-1].function).f_typ.args_len; i++){
      fields[i] = (axo_struct_field){
        .name = (yyvsp[-1].function).args_names[i],
        .typ = (yyvsp[-1].function).f_typ.args_types[i],
        .def = (yyvsp[-1].function).f_typ.args_defs[i]
      };
    }
    free((yyvsp[-1].function).args_names);
    free((yyvsp[-1].function).f_typ.args_types);
    free((yyvsp[-1].function).f_typ.args_defs);
    (yyval.struct_type) = (axo_struct){
      .name=alloc_str((yyvsp[-3].str)),
      .fields=fields,
      .fields_len=(yyvsp[-1].function).f_typ.args_len
    };
  }
#line 2595 "axo_gram.tab.c"
    break;

  case 24: /* module_info: '('  */
#line 460 "axo_gram.y"
                  {
    (yyval.module_type) = axo_new_module();
  }
#line 2603 "axo_gram.tab.c"
    break;

  case 25: /* module_info: module_info "identifier" ':' "string literal"  */
#line 463 "axo_gram.y"
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
    }else{
      yyerror(&(yylsp[-2]), "Not a valid module information field.");
      YYERROR;
    }
  }
#line 2632 "axo_gram.tab.c"
    break;

  case 26: /* statements: %empty  */
#line 489 "axo_gram.y"
                         { }
#line 2638 "axo_gram.tab.c"
    break;

  case 27: /* statements: statements statement  */
#line 490 "axo_gram.y"
                         {
    // printf("Adding statement to %p\n", top_scope);
    axo_add_statement(top_scope, (yyvsp[0].statement_type));
  }
#line 2647 "axo_gram.tab.c"
    break;

  case 28: /* index_access: '[' expr  */
#line 496 "axo_gram.y"
                        {
    //TODO: Dynamic?
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.index_access_type) = (axo_index_access){
      .index_count=1,
      .indexes = (axo_expr*)malloc(128*sizeof(axo_expr))
    };
    (yyval.index_access_type).indexes[0] = (yyvsp[0].expression);
  }
#line 2661 "axo_gram.tab.c"
    break;

  case 29: /* index_access: index_access '|' expr  */
#line 505 "axo_gram.y"
                          {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.index_access_type).indexes[(yyval.index_access_type).index_count++] = (yyvsp[0].expression);
  }
#line 2670 "axo_gram.tab.c"
    break;

  case 30: /* identifier: "identifier"  */
#line 511 "axo_gram.y"
                  {
    const axo_typ_def* td = axo_get_typ_def(state, (yyvsp[0].str));
    if (td != NULL) {
         (yyval.identifier_type) = (axo_identifier){
        .kind = axo_identifier_typ_kind,
        .typ_def = *td
      };
    }else{
      (yyval.identifier_type) = (axo_identifier){
        .kind = axo_identifier_var_kind,
        .data = (void*)alloc_str((yyvsp[0].str))
      };
    }
  }
#line 2689 "axo_gram.tab.c"
    break;

  case 31: /* incr_decr_op: expr "++"  */
#line 527 "axo_gram.y"
                            {
    axo_validate_rval(&(yylsp[-1]), (yyvsp[-1].expression));
    (yyval.expression).typ = (yyvsp[-1].expression).typ;
    (yyval.expression).val = fmtstr("%s++", (yyvsp[-1].expression).val);
  }
#line 2699 "axo_gram.tab.c"
    break;

  case 32: /* incr_decr_op: expr "--"  */
#line 532 "axo_gram.y"
                 {
    axo_validate_rval(&(yylsp[-1]), (yyvsp[-1].expression));
    (yyval.expression).typ = (yyvsp[-1].expression).typ;
    (yyval.expression).val = fmtstr("%s--", (yyvsp[-1].expression).val);
  }
#line 2709 "axo_gram.tab.c"
    break;

  case 33: /* comptime_expr: COMPTIME_VAR  */
#line 539 "axo_gram.y"
                             {
    // printf("got comptime: %s\n", &($1[1]));
    char* lua_input = fmtstr("return axo.get(%s)", &((yyvsp[0].str)[1]));
    // printf("Running Lua: %s\n", lua_input);
    bool ok = false;
    const char* res = axo_lua_dostring(state, lua_input, &ok);
    if (!ok){
      yyerror(&(yyloc), "Macro error: %s\n", res);
      YYERROR;
    }
    (yyval.expression) = (axo_expr){.val=alloc_str(res)};
    free(lua_input);
  }
#line 2727 "axo_gram.tab.c"
    break;

  case 34: /* expr: "string literal"  */
#line 555 "axo_gram.y"
                      {set_val(&(yyval.expression), axo_deep_copy_typ(axo_str_typ(state)), (yyvsp[0].str)); (yyval.expression).kind=axo_expr_normal_kind;}
#line 2733 "axo_gram.tab.c"
    break;

  case 35: /* expr: "integer literal"  */
#line 557 "axo_gram.y"
                    {
    (yyval.expression) = (axo_expr){
      .kind=axo_expr_normal_kind,
      .lval_kind=axo_not_lval_kind,
      .val=(yyvsp[0].str),
      .typ=axo_int_typ(state)
    };
    (yyval.expression).typ.kind=axo_literal_kind;
  }
#line 2747 "axo_gram.tab.c"
    break;

  case 36: /* expr: "float literal"  */
#line 566 "axo_gram.y"
                  {set_val(&(yyval.expression), axo_float_typ(state), (yyvsp[0].str)); (yyval.expression).kind=axo_expr_normal_kind; (yyval.expression).lval_kind = axo_not_lval_kind;}
#line 2753 "axo_gram.tab.c"
    break;

  case 38: /* expr: "byte literal"  */
#line 568 "axo_gram.y"
                 {set_val(&(yyval.expression), axo_byte_typ(state), (yyvsp[0].str)); (yyval.expression).kind=axo_expr_normal_kind; (yyval.expression).lval_kind = axo_not_lval_kind;}
#line 2759 "axo_gram.tab.c"
    break;

  case 39: /* expr: "null"  */
#line 569 "axo_gram.y"
           {
    (yyval.expression) = (axo_expr){
      .kind=axo_expr_normal_kind,
      .lval_kind=axo_not_lval_kind,
      .val="NULL",
      .typ=axo_none_ptr_typ
    };
  }
#line 2772 "axo_gram.tab.c"
    break;

  case 40: /* expr: "identifier" "::" "identifier"  */
#line 577 "axo_gram.y"
                   {
      axo_module* mod = axo_get_module(state, (yyvsp[-2].str));
      if (!mod){
        yyerror(&(yylsp[-2]), "Module '%s'is not loaded. Did you forget to use it?", (yyvsp[-2].str));
        YYERROR;
      }
      axo_var* var = axo_get_var(state->global_scope, fmt_str(s_str(1024), "%s%s", mod->prefix, (yyvsp[0].str)));
      if (var == NULL && rval_now)
        yyerror(&(yyloc), "Module '%s' doesn't have variable '%s'.", mod->name, (yyvsp[0].str));
      (yyval.expression) = (axo_expr){
        .val = fmtstr("%s%s", mod->prefix, (yyvsp[0].str)),
        .typ=(var ? var->typ : axo_no_typ),
        .kind = axo_expr_normal_kind,
        .lval_kind = axo_var_lval_kind
      };
  }
#line 2793 "axo_gram.tab.c"
    break;

  case 41: /* expr: expr '+' expr  */
#line 593 "axo_gram.y"
                  {parse_operator(&(yylsp[-1]), &(yyval.expression), (yyvsp[-2].expression), "+", (yyvsp[0].expression)); }
#line 2799 "axo_gram.tab.c"
    break;

  case 42: /* expr: expr '-' expr  */
#line 594 "axo_gram.y"
                  {parse_operator(&(yylsp[-1]), &(yyval.expression), (yyvsp[-2].expression), "-", (yyvsp[0].expression)); }
#line 2805 "axo_gram.tab.c"
    break;

  case 43: /* expr: '-' expr  */
#line 595 "axo_gram.y"
             {(yyval.expression).val = fmtstr("-%s", (yyvsp[0].expression).val); (yyval.expression).typ = (yyvsp[0].expression).typ; (yyval.expression).kind = axo_expr_normal_kind; }
#line 2811 "axo_gram.tab.c"
    break;

  case 44: /* expr: expr '*' expr  */
#line 596 "axo_gram.y"
                  {parse_operator(&(yylsp[-1]), &(yyval.expression), (yyvsp[-2].expression), "*", (yyvsp[0].expression)); }
#line 2817 "axo_gram.tab.c"
    break;

  case 45: /* expr: expr '/' expr  */
#line 597 "axo_gram.y"
                  {parse_operator(&(yylsp[-1]), &(yyval.expression), (yyvsp[-2].expression), "/", (yyvsp[0].expression)); }
#line 2823 "axo_gram.tab.c"
    break;

  case 46: /* expr: expr '%' expr  */
#line 598 "axo_gram.y"
                  {parse_operator(&(yylsp[-1]), &(yyval.expression), (yyvsp[-2].expression), "%", (yyvsp[0].expression)); }
#line 2829 "axo_gram.tab.c"
    break;

  case 47: /* expr: '(' expr ')'  */
#line 599 "axo_gram.y"
                 {
    (yyval.expression).val = fmtstr("(%s)", (yyvsp[-1].expression).val);
    (yyval.expression).typ = (yyvsp[-1].expression).typ;
    (yyval.expression).kind = (yyvsp[-1].expression).kind == axo_expr_assigned_declaration_kind?axo_expr_assigned_declaration_kind:axo_expr_normal_kind;
    free((yyvsp[-1].expression).val);
  }
#line 2840 "axo_gram.tab.c"
    break;

  case 48: /* expr: expr '@'  */
#line 605 "axo_gram.y"
             { //Referencing
    if ((yyvsp[-1].expression).lval_kind == axo_not_lval_kind)
      yyerror(&(yylsp[-1]), "Cannot reference a non l-value.");
    (yyval.expression).typ.kind = axo_ptr_kind;
    (yyval.expression).typ.subtyp = malloc(sizeof(axo_typ));
    (yyval.expression).val = fmtstr("&%s", (yyvsp[-1].expression).val);
    (yyval.expression).lval_kind = axo_not_lval_kind;
    *axo_subtyp((yyval.expression).typ) = (yyvsp[-1].expression).typ;
    free((yyvsp[-1].expression).val);
  }
#line 2855 "axo_gram.tab.c"
    break;

  case 49: /* expr: expr '.'  */
#line 615 "axo_gram.y"
             { //Dereferencing
    axo_validate_rval(&(yylsp[-1]), (yyvsp[-1].expression));
    if ((yyvsp[-1].expression).typ.kind != axo_ptr_kind)
      yyerror(&(yylsp[-1]), "Cannot dereference a value of non-pointer type '%s'.", axo_typ_to_str((yyvsp[-1].expression).typ));
    (yyval.expression).typ = *axo_subtyp((yyvsp[-1].expression).typ);
    (yyval.expression).lval_kind=(yyvsp[-1].expression).lval_kind;
    (yyval.expression).val=fmtstr("(*(%s))", (yyvsp[-1].expression).val);
    free((yyvsp[-1].expression).val);
  }
#line 2869 "axo_gram.tab.c"
    break;

  case 52: /* expr: identifier  */
#line 626 "axo_gram.y"
               {
    char* var_name = "";
    axo_typ_def td;
    switch((yyvsp[0].identifier_type).kind){
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
        td = (yyvsp[0].identifier_type).typ_def;
        switch (td.typ.kind){
          case axo_enum_kind:
            (yyval.expression) = (axo_expr){
              .kind=axo_expr_enum_typ_kind,
              .typ=td.typ,
              .val=fmtstr("%s$%s", td.name, ((axo_enum*)(td.typ.enumerate))->names[0])
            };
            break;
          default:
            yyerror(&(yylsp[0]), "Non-enum type '%s' is not an expression.", td.name);
            break;
        }
        break;
      default:
        yyerror(&(yylsp[0]), "Invalid identifier as expression.");
        break;
    }
  }
#line 2912 "axo_gram.tab.c"
    break;

  case 53: /* expr: expr '?' expr ':' expr  */
#line 664 "axo_gram.y"
                           {
    if (axo_validate_rval(&(yylsp[-4]), (yyvsp[-4].expression)) && axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression)) && axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression))){
      if (axo_typ_eq((yyvsp[-2].expression).typ, (yyvsp[0].expression).typ)){
        (yyval.expression) = (axo_expr){
          .kind=axo_expr_normal_kind,
          .lval_kind=axo_not_lval_kind,
          .val=fmtstr("(%s?%s:%s)", (yyvsp[-4].expression).val, (yyvsp[-2].expression).val, (yyvsp[0].expression).val),
          .typ=(yyvsp[-2].expression).typ
        };
        free((yyvsp[-4].expression).val);
        free((yyvsp[-2].expression).val);
        free((yyvsp[0].expression).val);
      }else{
        yyerror(&(yyloc), "Ternary expression cannot return both '%s' and '%s'.", axo_typ_to_str((yyvsp[-2].expression).typ), axo_typ_to_str((yyvsp[0].expression).typ));
      }
    }
  }
#line 2934 "axo_gram.tab.c"
    break;

  case 54: /* expr: func_call  */
#line 681 "axo_gram.y"
              {(yyval.expression) = axo_call_to_expr((yyvsp[0].function_call));}
#line 2940 "axo_gram.tab.c"
    break;

  case 55: /* expr: expr '<' expr  */
#line 682 "axo_gram.y"
                  {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.expression) = (axo_expr){
      .kind = axo_expr_normal_kind,
      .typ = axo_bool_typ(state),
      .val = fmtstr("%s<%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
    };
    free((yyvsp[-2].expression).val);
    free((yyvsp[0].expression).val);
  }
#line 2956 "axo_gram.tab.c"
    break;

  case 56: /* expr: expr '>' expr  */
#line 693 "axo_gram.y"
                  {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.expression) = (axo_expr){
      .kind = axo_expr_normal_kind,
      .typ = axo_bool_typ(state),
      .val = fmtstr("%s>%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
    };
    free((yyvsp[-2].expression).val);
    free((yyvsp[0].expression).val);
  }
#line 2972 "axo_gram.tab.c"
    break;

  case 57: /* expr: expr "==" expr  */
#line 704 "axo_gram.y"
                   {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.expression) = (axo_expr){
      .kind = axo_expr_normal_kind,
      .typ = axo_bool_typ(state),
      .val = fmtstr("%s==%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
    };
    free((yyvsp[-2].expression).val);
    free((yyvsp[0].expression).val);
  }
#line 2988 "axo_gram.tab.c"
    break;

  case 58: /* expr: expr "!=" expr  */
#line 715 "axo_gram.y"
                   {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.expression) = (axo_expr){
      .kind = axo_expr_normal_kind,
      .typ = axo_bool_typ(state),
      .val = fmtstr("%s!=%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
    };
    free((yyvsp[-2].expression).val);
    free((yyvsp[0].expression).val);
  }
#line 3004 "axo_gram.tab.c"
    break;

  case 59: /* expr: expr ">=" expr  */
#line 726 "axo_gram.y"
                   {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.expression) = (axo_expr){
      .kind = axo_expr_normal_kind,
      .typ = axo_bool_typ(state),
      .val = fmtstr("%s>=%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
    };
    free((yyvsp[-2].expression).val);
    free((yyvsp[0].expression).val);
  }
#line 3020 "axo_gram.tab.c"
    break;

  case 60: /* expr: expr "<=" expr  */
#line 737 "axo_gram.y"
                   {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.expression) = (axo_expr){
      .kind = axo_expr_normal_kind,
      .typ = axo_bool_typ(state),
      .val = fmtstr("%s<=%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
    };
    free((yyvsp[-2].expression).val);
    free((yyvsp[0].expression).val);
  }
#line 3036 "axo_gram.tab.c"
    break;

  case 61: /* expr: expr "||" expr  */
#line 748 "axo_gram.y"
                   {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.expression) = (axo_expr){
      .kind = axo_expr_normal_kind,
      .typ = axo_bool_typ(state),
      .val = fmtstr("%s||%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
    };
  }
#line 3050 "axo_gram.tab.c"
    break;

  case 62: /* expr: '!' expr  */
#line 757 "axo_gram.y"
             {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.expression) = (axo_expr){
      .kind = axo_expr_normal_kind,
      .typ = axo_bool_typ(state),
      .val = fmtstr("!(%s)", (yyvsp[0].expression).val),
      .lval_kind = axo_not_lval_kind
    };
    if ((yyvsp[0].expression).typ.kind != axo_simple_kind)
      yyerror(&(yylsp[0]), "Negation can only be used on primitive types (byte, int etc.)");
  }
#line 3066 "axo_gram.tab.c"
    break;

  case 63: /* expr: expr "&&" expr  */
#line 768 "axo_gram.y"
                   {
    if (axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression)) && axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression))){
      (yyval.expression) = (axo_expr){
        .kind = axo_expr_normal_kind,
        .typ = (yyvsp[-2].expression).typ,
        .val = fmtstr("%s&&%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
      };
    }
  }
#line 3080 "axo_gram.tab.c"
    break;

  case 64: /* expr: expr ">>" expr  */
#line 777 "axo_gram.y"
                   {
    if (axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression)) && axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression))){
      (yyval.expression) = (axo_expr){
        .kind = axo_expr_normal_kind,
        .typ = (yyvsp[-2].expression).typ,
        .val = fmtstr("%s>>%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
      };
    }
  }
#line 3094 "axo_gram.tab.c"
    break;

  case 65: /* expr: expr "<<" expr  */
#line 786 "axo_gram.y"
                   {
    if (axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression)) && axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression))){
      (yyval.expression) = (axo_expr){
        .kind = axo_expr_normal_kind,
        .typ = (yyvsp[-2].expression).typ,
        .val = fmtstr("%s<<%s", (yyvsp[-2].expression).val, (yyvsp[0].expression).val)
      };
    }
  }
#line 3108 "axo_gram.tab.c"
    break;

  case 66: /* expr: struct_literal  */
#line 795 "axo_gram.y"
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
#line 3136 "axo_gram.tab.c"
    break;

  case 67: /* expr: expr index_access ']'  */
#line 818 "axo_gram.y"
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
    axo_free_index_access((yyvsp[-1].index_access_type));
  }
#line 3170 "axo_gram.tab.c"
    break;

  case 68: /* expr: expr ".field"  */
#line 847 "axo_gram.y"
                   {
    axo_validate_rval(&(yylsp[-1]), (yyvsp[-1].expression));
    (yyval.expression) = axo_expr_dot_field(state, &(yyloc), &(yylsp[-1]), &(yylsp[0]), (yyvsp[-1].expression), (yyvsp[0].str));
  }
#line 3179 "axo_gram.tab.c"
    break;

  case 69: /* expr: "sz_of" '(' expr ')'  */
#line 851 "axo_gram.y"
                         {
    const axo_typ_def* lu_def = axo_get_typ_def(state, "size_t");
    (yyval.expression) = (axo_expr){
      .kind = axo_expr_normal_kind,
      .lval_kind = axo_not_lval_kind,
      .val = fmtstr("sizeof(%s)", (yyvsp[-1].expression).val),
      .typ = lu_def->typ
    };
  }
#line 3193 "axo_gram.tab.c"
    break;

  case 70: /* expr: "type_sz" '(' val_typ ')'  */
#line 860 "axo_gram.y"
                              {
    const axo_typ_def* lu_def = axo_get_typ_def(state, "size_t");
    (yyval.expression) = (axo_expr){
      .kind = axo_expr_normal_kind,
      .lval_kind = axo_not_lval_kind,
      .val = fmtstr("sizeof(%s)", axo_typ_to_c_str((yyvsp[-1].typ_type))),
      .typ = lu_def->typ
    };
  }
#line 3207 "axo_gram.tab.c"
    break;

  case 71: /* expr: "#line"  */
#line 869 "axo_gram.y"
            {
    (yyval.expression) = (axo_expr){
      .kind = axo_expr_normal_kind,
      .lval_kind = axo_not_lval_kind,
      .val = fmtstr("%d", (yyloc).first_line),
      .typ = axo_int_typ(state)
    };
  }
#line 3220 "axo_gram.tab.c"
    break;

  case 72: /* expr: "#column"  */
#line 877 "axo_gram.y"
              {
    (yyval.expression) = (axo_expr){
      .kind = axo_expr_normal_kind,
      .lval_kind = axo_not_lval_kind,
      .val = fmtstr("%d", (yyloc).first_column),
      .typ = axo_int_typ(state)
    };
  }
#line 3233 "axo_gram.tab.c"
    break;

  case 73: /* expr: "#file"  */
#line 885 "axo_gram.y"
            {
    (yyval.expression) = (axo_expr){
      .kind = axo_expr_normal_kind,
      .lval_kind = axo_not_lval_kind,
      .val = fmtstr("\"%s\"", axo_src_path(state)),
      .typ = axo_str_typ(state)
    };
  }
#line 3246 "axo_gram.tab.c"
    break;

  case 76: /* expr: expr '.' '(' val_typ ')'  */
#line 895 "axo_gram.y"
                             {
    axo_validate_rval(&(yylsp[-4]), (yyvsp[-4].expression));
    switch((yyvsp[-4].expression).typ.kind){
      case axo_simple_kind:
      case axo_literal_kind:
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
#line 3282 "axo_gram.tab.c"
    break;

  case 77: /* expr: '$'  */
#line 926 "axo_gram.y"
        {
    axo_var* var = axo_get_var(top_scope, "_axo_self_param");
    if (!var){
      yyerror(&(yyloc), "Cannot use self param '$' outside of a method.");
      YYERROR;
    }
    (yyval.expression) = (axo_expr){
      .val=alloc_str("_axo_self_param"),
      .typ=(var ? var->typ : axo_no_typ),
      .kind=axo_expr_normal_kind,
      .lval_kind=axo_var_lval_kind
    };
  }
#line 3300 "axo_gram.tab.c"
    break;

  case 78: /* stat_arr_literal_start: arr_lit_start expr ',' expr  */
#line 941 "axo_gram.y"
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
#line 3320 "axo_gram.tab.c"
    break;

  case 79: /* stat_arr_literal_start: empty_arr_dims ']' '[' expr ',' expr  */
#line 956 "axo_gram.y"
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
#line 3340 "axo_gram.tab.c"
    break;

  case 80: /* stat_arr_literal_start: stat_arr_literal_start ',' expr  */
#line 971 "axo_gram.y"
                                    {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    if (!axo_typ_eq((yyval.arr_lit_type).typ, (yyvsp[0].expression).typ)){
            yyerror(&(yylsp[0]), "A '%s' value cannot be an element of a '%s' array.", axo_typ_to_str((yyvsp[0].expression).typ), axo_typ_to_str((yyval.arr_lit_type).typ));
    }
    strapnd(&(yyval.arr_lit_type).val, ",");
    strapnd(&(yyval.arr_lit_type).val, (yyvsp[0].expression).val);
    (yyval.arr_lit_type).count++;
  }
#line 3354 "axo_gram.tab.c"
    break;

  case 81: /* arr_lit_start: '['  */
#line 982 "axo_gram.y"
                    {
    (yyval.bool_type) = false;
  }
#line 3362 "axo_gram.tab.c"
    break;

  case 82: /* arr_lit_start: '[' '?'  */
#line 985 "axo_gram.y"
            {
    (yyval.bool_type) = true;
  }
#line 3370 "axo_gram.tab.c"
    break;

  case 83: /* empty_arr_dims: arr_lit_start "integer literal"  */
#line 990 "axo_gram.y"
                                               {
    (yyval.empty_arr_lit_type) = (axo_empty_arr_lit){
      .dynamic=(yyvsp[-1].bool_type),
      .len=malloc(axo_empty_arr_lit_cap),
      .dim_count=1
    };
    (yyval.empty_arr_lit_type).len[0] = atoi((yyvsp[0].str));
    free((yyvsp[0].str));
  }
#line 3384 "axo_gram.tab.c"
    break;

  case 84: /* empty_arr_dims: empty_arr_dims '|' "integer literal"  */
#line 999 "axo_gram.y"
                                       {
    (yyval.empty_arr_lit_type).len[(yyval.empty_arr_lit_type).dim_count++] = atoi((yyvsp[0].str));
    free((yyvsp[0].str));
  }
#line 3393 "axo_gram.tab.c"
    break;

  case 85: /* stat_arr_literal: arr_lit_start expr ',' ']'  */
#line 1005 "axo_gram.y"
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
#line 3414 "axo_gram.tab.c"
    break;

  case 86: /* stat_arr_literal: stat_arr_literal_start ']'  */
#line 1021 "axo_gram.y"
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
#line 3449 "axo_gram.tab.c"
    break;

  case 87: /* arr_literal: stat_arr_literal  */
#line 1053 "axo_gram.y"
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
#line 3469 "axo_gram.tab.c"
    break;

  case 88: /* arr_literal: empty_arr_dims ']' val_typ  */
#line 1068 "axo_gram.y"
                               {
    char* dims_str = empty_str;
    unsigned total_sz = 1;
    for (int i=0; i<(yyvsp[-2].empty_arr_lit_type).dim_count; i++){
      total_sz *= (yyvsp[-2].empty_arr_lit_type).len[i];
      if (i>0) strapnd(&dims_str, ",");
      strapnd(&dims_str, fmt_str((char[16]){}, "%d", (yyvsp[-2].empty_arr_lit_type).len[i]));
    }
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
    free(dims_str);
  }
#line 3501 "axo_gram.tab.c"
    break;

  case 91: /* matching_statement: expr  */
#line 1099 "axo_gram.y"
                          {
    axo_validate_expr_as_statement(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.statement_type).val = (yyvsp[0].expression).val;
    strapnd(&((yyval.statement_type).val), ";");
    (yyval.statement_type).kind = axo_call_statement_kind;
  }
#line 3512 "axo_gram.tab.c"
    break;

  case 92: /* matching_statement: ';'  */
#line 1105 "axo_gram.y"
        {
    (yyval.statement_type) = (axo_statement){
      .kind=axo_empty_statement_kind,
      .val=alloc_str(";")
    };
  }
#line 3523 "axo_gram.tab.c"
    break;

  case 93: /* matching_statement: "ret" expr  */
#line 1111 "axo_gram.y"
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
    free((yyvsp[0].expression).val);
  }
#line 3547 "axo_gram.tab.c"
    break;

  case 94: /* matching_statement: "ret" ';'  */
#line 1130 "axo_gram.y"
              {
    (yyval.statement_type).val=alloc_str("return;");
    (yyval.statement_type).kind = axo_ret_statement_kind;
    axo_var* parent_func = (axo_var*)(top_scope->parent_func);
    if (parent_func){
      axo_typ* ret_typ = &(((axo_func_typ*)(parent_func->typ.func_typ))->ret_typ);
      if (axo_is_no_typ(*ret_typ)){
        *ret_typ = axo_none_typ;
      }else if(!axo_typ_eq(*ret_typ, axo_none_typ)){
        char hlpr[64] = "";
        strcpy(hlpr, axo_typ_to_str(*ret_typ));
        yyerror(&(yylsp[0]), "Cannot return %s type, expected %s type to be returned.", axo_typ_to_str(axo_none_typ), hlpr);
      }
    }else{
      yyerror(&(yylsp[-1]), "Couldn't return outside of a function body.");
    }
  }
#line 3569 "axo_gram.tab.c"
    break;

  case 95: /* matching_statement: code_scope  */
#line 1147 "axo_gram.y"
               {
    (yyval.statement_type) = axo_scope_to_statement((yyvsp[0].scope));
    axo_free_scope((yyvsp[0].scope));
  }
#line 3578 "axo_gram.tab.c"
    break;

  case 96: /* matching_statement: expr '=' "none" val_typ  */
#line 1151 "axo_gram.y"
                             {
    if ((yyvsp[-3].expression).lval_kind == axo_var_lval_kind){
      char* ntd = axo_name_typ_decl((yyvsp[-3].expression).val, (yyvsp[0].typ_type));
      (yyval.statement_type) = (axo_statement){
        .kind=axo_var_is_decl_statement_kind,
        .val=ntd
      };
      strapnd(&((yyval.statement_type).val), ";");
      axo_set_var(top_scope, (axo_var){.name=(yyvsp[-3].expression).val, .typ=axo_clean_typ((yyvsp[0].typ_type))});
    }else{
      yyerror(&(yylsp[-3]), "Cannot declare non-variable value '%s'.", (yyvsp[-3].expression).val);
    }
    free((yyvsp[-3].expression).val);
  }
#line 3597 "axo_gram.tab.c"
    break;

  case 97: /* matching_statement: "continue"  */
#line 1165 "axo_gram.y"
               {
    if (in_loop_count<=0) yyerror(&(yylsp[0]), "No loop/switch to continue from.");
    (yyval.statement_type) = (axo_statement){
      .kind = axo_continue_statement_kind,
      .val = alloc_str("continue;")
    };
  }
#line 3609 "axo_gram.tab.c"
    break;

  case 98: /* matching_statement: "break"  */
#line 1172 "axo_gram.y"
            {
    if (in_loop_count<=0) yyerror(&(yylsp[0]), "No loop/switch to break out of.");
    (yyval.statement_type) = (axo_statement){
      .kind = axo_break_statement_kind,
      .val = alloc_str("break;")
    };
  }
#line 3621 "axo_gram.tab.c"
    break;

  case 99: /* matching_statement: switch_statement  */
#line 1179 "axo_gram.y"
                     {
    (yyval.statement_type) = axo_switch_to_statement((yyvsp[0].switch_type));
  }
#line 3629 "axo_gram.tab.c"
    break;

  case 100: /* matching_statement: "defer" matching_statement  */
#line 1182 "axo_gram.y"
                               {
    top_scope->defer_used = true;
    (yyval.statement_type) = (axo_statement){
      .kind=axo_defer_statement_kind,
      .val=fmtstr("Defer({%s});", (yyvsp[0].statement_type).val)
    };
    free((yyvsp[0].statement_type).val);
  }
#line 3642 "axo_gram.tab.c"
    break;

  case 101: /* matching_statement: type_qualifier identifier '=' expr  */
#line 1190 "axo_gram.y"
                                       {
    axo_typ typ = axo_merge_type_with_qualifiers((yyvsp[0].expression).typ, (yyvsp[-3].typ_type));
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    char* var_name = ((char*)((yyvsp[-2].identifier_type).data));
    if ((yyvsp[-2].identifier_type).kind != axo_identifier_var_kind || axo_get_var(top_scope, var_name) != NULL){
      yyerror(&(yylsp[-2]), "Cannot declare variable, it's already a %s.", axo_identifier_kind_to_str((yyvsp[-2].identifier_type).kind));
      YYERROR;
    }
    axo_var var = (axo_var){.name=var_name, .typ=typ};
    axo_set_var(top_scope, var);
    char* assign_decl = axo_get_var_decl_assign(&(yyloc), var, (yyvsp[0].expression));
    (yyval.statement_type) = (axo_statement){
      .kind=axo_assignment_statement_kind,
      .val = fmtstr("%s;", assign_decl)
    };
    free(assign_decl);
  }
#line 3664 "axo_gram.tab.c"
    break;

  case 106: /* switch_statement_start: "switch" expr  */
#line 1213 "axo_gram.y"
                                       {
    if ((yyvsp[0].expression).typ.kind != axo_simple_kind)
      yyerror(&(yylsp[0]), "Cannot switch on a non-primitive (%s) value.", axo_typ_to_str((yyvsp[0].expression).typ));
    (yyval.switch_type) = (axo_switch){
      .root = (yyvsp[0].expression)
    };
    in_loop_count++;
  }
#line 3677 "axo_gram.tab.c"
    break;

  case 107: /* switch_statement: switch_statement_start '{' switch_body '}'  */
#line 1223 "axo_gram.y"
                                                              {
    (yyval.switch_type) = (axo_switch){
      .root=(yyvsp[-3].switch_type).root,
      .cases = (yyvsp[-1].switch_type).cases,
      .cases_len = (yyvsp[-1].switch_type).cases_len
    };
    in_loop_count--;
  }
#line 3690 "axo_gram.tab.c"
    break;

  case 108: /* switch_body: switch_branch statement  */
#line 1233 "axo_gram.y"
                                      {
    (yyval.switch_type) = (axo_switch){
      .cases = (axo_switch_case*)malloc(axo_cases_cap*sizeof(axo_switch_case)),
      .cases_len = 1
    };
    (yyval.switch_type).cases[0] = (yyvsp[-1].case_type);
    (yyval.switch_type).cases[0].statement = (yyvsp[0].statement_type);
  }
#line 3703 "axo_gram.tab.c"
    break;

  case 109: /* switch_body: switch_body switch_branch statement  */
#line 1241 "axo_gram.y"
                                        {
    resize_dyn_arr_if_needed(axo_switch_case, (yyval.switch_type).cases, (yyval.switch_type).cases_len, axo_cases_cap);
    (yyval.switch_type).cases[(yyval.switch_type).cases_len] = (yyvsp[-1].case_type);
    (yyval.switch_type).cases[(yyval.switch_type).cases_len++].statement = (yyvsp[0].statement_type);
  }
#line 3713 "axo_gram.tab.c"
    break;

  case 110: /* switch_branch: switch_case "none" "break"  */
#line 1248 "axo_gram.y"
                                           {
    (yyval.case_type)=(yyvsp[-2].case_type);
    (yyval.case_type).no_break = true;
  }
#line 3722 "axo_gram.tab.c"
    break;

  case 112: /* switch_case: switch_expr_list "case"  */
#line 1255 "axo_gram.y"
                                      {
    (yyval.case_type) = (yyvsp[-1].case_type);
  }
#line 3730 "axo_gram.tab.c"
    break;

  case 113: /* switch_expr_list: expr  */
#line 1269 "axo_gram.y"
                        {
    (yyval.case_type) = (axo_switch_case){
      .exprs = (axo_expr*)malloc(axo_switch_expr_list_cap*sizeof(axo_expr)),
      .exprs_len = 1,
      .kind = axo_list_case_kind
    };
    (yyval.case_type).exprs[0] = (yyvsp[0].expression);
  }
#line 3743 "axo_gram.tab.c"
    break;

  case 114: /* switch_expr_list: switch_expr_list ',' expr  */
#line 1277 "axo_gram.y"
                              {
    resize_dyn_arr_if_needed(axo_expr, (yyval.case_type).exprs, (yyval.case_type).exprs_len, axo_switch_expr_list_cap);
    (yyval.case_type).exprs[(yyval.case_type).exprs_len++] = (yyvsp[0].expression);
  }
#line 3752 "axo_gram.tab.c"
    break;

  case 115: /* if_condition: "if" expr  */
#line 1283 "axo_gram.y"
                            {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.expression) = (yyvsp[0].expression);
  }
#line 3761 "axo_gram.tab.c"
    break;

  case 116: /* matching_if_statement: if_condition matching_statement "else" matching_statement  */
#line 1289 "axo_gram.y"
                                                                                     {
    (yyval.statement_type).val = fmtstr("if(%s)%s\nelse\n%s", (yyvsp[-3].expression).val, (yyvsp[-2].statement_type).val, (yyvsp[0].statement_type).val);
  }
#line 3769 "axo_gram.tab.c"
    break;

  case 121: /* non_matching_if_statement: if_condition statement  */
#line 1300 "axo_gram.y"
                                                   {
    (yyval.statement_type).val = fmtstr("if(%s)\n%s", (yyvsp[-1].expression).val, (yyvsp[0].statement_type).val);
  }
#line 3777 "axo_gram.tab.c"
    break;

  case 122: /* non_matching_if_statement: if_condition matching_statement "else" non_matching_statement  */
#line 1303 "axo_gram.y"
                                                                     {
    (yyval.statement_type).val = fmtstr("if(%s)\n%s\nelse\n%s", (yyvsp[-3].expression).val, (yyvsp[-2].statement_type).val, (yyvsp[0].statement_type).val);
  }
#line 3785 "axo_gram.tab.c"
    break;

  case 123: /* till_loop_start: "till" '(' "identifier" '=' expr ')'  */
#line 1308 "axo_gram.y"
                                                   {
    (yyval.till_loop_type).iter = (yyvsp[-3].str);
    (yyval.till_loop_type).start = "0";
    (yyval.till_loop_type).lim = (yyvsp[-1].expression);
    printf("till iter %s created scope\n", (yyval.till_loop_type).iter);
    axo_push_scope(scopes, axo_new_scope(top_scope));
    axo_set_var(top_scope, (axo_var){.typ=state->int_def->typ, .name=(yyval.till_loop_type).iter});
  }
#line 3798 "axo_gram.tab.c"
    break;

  case 124: /* while_loop_base: "while" expr  */
#line 1318 "axo_gram.y"
                               {
    if (axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression)))
      (yyval.str) = alloc_str((yyvsp[0].expression).val);
    in_loop_count++;
  }
#line 3808 "axo_gram.tab.c"
    break;

  case 125: /* matching_while: while_loop_base matching_statement  */
#line 1325 "axo_gram.y"
                                                    {
    (yyval.statement_type) = (axo_statement){
      .kind=axo_while_statement_kind,
      .val=fmtstr("while(%s)\n%s", (yyvsp[-1].str), (yyvsp[0].statement_type).val),
    };
    in_loop_count--;
  }
#line 3820 "axo_gram.tab.c"
    break;

  case 126: /* non_matching_while: while_loop_base non_matching_statement  */
#line 1334 "axo_gram.y"
                                                            {
    (yyval.statement_type) = (axo_statement){
      .kind=axo_while_statement_kind,
      .val=fmtstr("while(%s)\n%s", (yyvsp[-1].str), (yyvsp[0].statement_type).val),
    };
    in_loop_count--;
  }
#line 3832 "axo_gram.tab.c"
    break;

  case 127: /* for_loop_start: "for"  */
#line 1343 "axo_gram.y"
                       {
    axo_push_scope(scopes, axo_new_scope(top_scope));
    in_loop_count++;
  }
#line 3841 "axo_gram.tab.c"
    break;

  case 128: /* for_loop_init: for_loop_start statement  */
#line 1349 "axo_gram.y"
                                         {
    (yyval.for_loop_type).start = (yyvsp[0].statement_type).val;
  }
#line 3849 "axo_gram.tab.c"
    break;

  case 129: /* for_loop_base: for_loop_init ',' expr ',' statement  */
#line 1354 "axo_gram.y"
                                                     {
    axo_validate_rval(&(yylsp[-2]), (yyvsp[-2].expression));
    char* iter = (yyvsp[0].statement_type).val;
    iter[strlen(iter)-1] = '\0';
    (yyval.for_loop_type) = (axo_for_loop){
      .start = (yyvsp[-4].for_loop_type).start,
      .condition = (yyvsp[-2].expression).val,
      .iteration = iter,
    };
  }
#line 3864 "axo_gram.tab.c"
    break;

  case 130: /* for_loop_base: till_loop_start  */
#line 1364 "axo_gram.y"
                    {
    (yyval.for_loop_type) = (axo_for_loop){
      .start = fmtstr("int %s=%s;", (yyvsp[0].till_loop_type).iter, (yyvsp[0].till_loop_type).start),
      .condition = fmtstr("%s<%s", (yyvsp[0].till_loop_type).iter, (yyvsp[0].till_loop_type).lim.val),
      .iteration = fmtstr("%s++", (yyvsp[0].till_loop_type).iter),
    };
  }
#line 3876 "axo_gram.tab.c"
    break;

  case 131: /* matching_for_loop: for_loop_base matching_statement  */
#line 1374 "axo_gram.y"
                                                     {
    (yyvsp[-1].for_loop_type).body = (yyvsp[0].statement_type).val;
    (yyval.statement_type).kind = axo_for_statement_kind;
    (yyval.statement_type).val=axo_for_loop_to_str((yyvsp[-1].for_loop_type));
    scopes->len--;
    in_loop_count--;
  }
#line 3888 "axo_gram.tab.c"
    break;

  case 132: /* non_matching_for_loop: for_loop_base non_matching_statement  */
#line 1382 "axo_gram.y"
                                                             {
    (yyvsp[-1].for_loop_type).body = (yyvsp[0].statement_type).val;
    (yyval.statement_type).kind = axo_for_statement_kind;
    (yyval.statement_type).val=axo_for_loop_to_str((yyvsp[-1].for_loop_type));
    scopes->len--;
    in_loop_count--;
  }
#line 3900 "axo_gram.tab.c"
    break;

  case 133: /* matching_each_loop: each_loop_base matching_statement  */
#line 1391 "axo_gram.y"
                                                       {
    (yyvsp[-1].each_loop_type).body = (yyvsp[0].statement_type).val;
    (yyval.statement_type) = axo_each_to_statement((yyvsp[-1].each_loop_type));
    scopes->len--;
    in_loop_count--;
  }
#line 3911 "axo_gram.tab.c"
    break;

  case 134: /* non_matching_each_loop: each_loop_base non_matching_statement  */
#line 1399 "axo_gram.y"
                                                               {
    (yyvsp[-1].each_loop_type).body = (yyvsp[0].statement_type).val;
    (yyval.statement_type) = axo_each_to_statement((yyvsp[-1].each_loop_type));
    scopes->len--;
    in_loop_count--;
  }
#line 3922 "axo_gram.tab.c"
    break;

  case 135: /* each_iter_dims: '[' expr  */
#line 1407 "axo_gram.y"
                          {
    (yyval.each_loop_type) = (axo_each_loop){
      .dim_count=1,
      .dim_iters=(axo_expr*)malloc(128*sizeof(axo_expr)),
      .locs=(YYLTYPE*)malloc(128*sizeof(YYLTYPE))
    };
    (yyval.each_loop_type).dim_iters[0] = (yyvsp[0].expression);
    ((YYLTYPE*)((yyval.each_loop_type).locs))[3] = (yylsp[0]);
  }
#line 3936 "axo_gram.tab.c"
    break;

  case 136: /* each_iter_dims: '[' '|' expr  */
#line 1416 "axo_gram.y"
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
#line 3951 "axo_gram.tab.c"
    break;

  case 137: /* each_iter_dims: each_iter_dims '|' expr  */
#line 1426 "axo_gram.y"
                            {
    (yyval.each_loop_type).dim_iters[(yyval.each_loop_type).dim_count] = (yyvsp[0].expression);
    ((YYLTYPE*)((yyval.each_loop_type).locs))[3+(yyval.each_loop_type).dim_count++] = (yylsp[0]);
  }
#line 3960 "axo_gram.tab.c"
    break;

  case 138: /* each_iter_dims: each_iter_dims '|'  */
#line 1430 "axo_gram.y"
                       {
    (yyval.each_loop_type).dim_iters[(yyval.each_loop_type).dim_count++] = (axo_expr){.val=NULL};
  }
#line 3968 "axo_gram.tab.c"
    break;

  case 139: /* each_loop_base: for_loop_start identifier "in" expr  */
#line 1435 "axo_gram.y"
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
#line 3987 "axo_gram.tab.c"
    break;

  case 140: /* each_loop_base: for_loop_start identifier "each" each_iter_dims ']' "in" expr  */
#line 1449 "axo_gram.y"
                                                                  {
    (yylsp[-3]).last_column = (yylsp[-2]).last_column;
    (yyval.each_loop_type) = (axo_each_loop){
      .dim_count=(yyvsp[-3].each_loop_type).dim_count,
      .dim_iters=(yyvsp[-3].each_loop_type).dim_iters,
      .value_iter=(yyvsp[-5].identifier_type),
      .collection=(yyvsp[0].expression),
      .locs=(yyvsp[-3].each_loop_type).locs
    };
    ((YYLTYPE*)((yyval.each_loop_type).locs))[0] = (yylsp[-5]);
    ((YYLTYPE*)((yyval.each_loop_type).locs))[1] = (yylsp[-3]);
    ((YYLTYPE*)((yyval.each_loop_type).locs))[2] = (yylsp[0]);
    axo_parse_each_loop(&(yyval.each_loop_type), state, top_scope, in_loop_count);
  }
#line 4006 "axo_gram.tab.c"
    break;

  case 141: /* each_loop_base: for_loop_start "each" each_iter_dims ']' "in" expr  */
#line 1463 "axo_gram.y"
                                                       {
    (yylsp[-3]).last_column = (yylsp[-3]).last_column;
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
#line 4024 "axo_gram.tab.c"
    break;

  case 142: /* assign_op: '='  */
#line 1478 "axo_gram.y"
                {
    rval_now = true;
  }
#line 4032 "axo_gram.tab.c"
    break;

  case 143: /* assignment: expr assign_op expr  */
#line 1483 "axo_gram.y"
                                 {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    (yyval.expression).kind=axo_expr_normal_kind;
    axo_typ l_typ = (yyvsp[-2].expression).typ;
    switch((yyvsp[-2].expression).lval_kind){
      case axo_var_lval_kind:
        if ((yyvsp[-2].expression).typ.kind == axo_no_kind){
          l_typ = axo_clean_typ((yyvsp[0].expression).typ);
          axo_var var = (axo_var){.name=(yyvsp[-2].expression).val, .typ=(yyvsp[0].expression).typ};
          (yyval.expression).val = axo_get_var_decl_assign(&(yyloc), var, (axo_expr){.typ=l_typ, .val=(yyvsp[0].expression).val});
          axo_set_var(top_scope, (axo_var){.typ = l_typ, .name = (yyvsp[-2].expression).val});
          (yyval.expression).kind = axo_expr_assigned_declaration_kind;
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
#line 4067 "axo_gram.tab.c"
    break;

  case 144: /* special_assignment: expr "+=" expr  */
#line 1515 "axo_gram.y"
                                    {
    (yyval.expression) = axo_parse_special_assignment(&(yylsp[-2]), &(yylsp[-1]), &(yylsp[0]), (yyvsp[-2].expression), "+=", (yyvsp[0].expression));
  }
#line 4075 "axo_gram.tab.c"
    break;

  case 145: /* special_assignment: expr "-=" expr  */
#line 1518 "axo_gram.y"
                   {
    (yyval.expression) = axo_parse_special_assignment(&(yylsp[-2]), &(yylsp[-1]), &(yylsp[0]), (yyvsp[-2].expression), "-=", (yyvsp[0].expression));
  }
#line 4083 "axo_gram.tab.c"
    break;

  case 146: /* special_assignment: expr "*=" expr  */
#line 1521 "axo_gram.y"
                   {
    (yyval.expression) = axo_parse_special_assignment(&(yylsp[-2]), &(yylsp[-1]), &(yylsp[0]), (yyvsp[-2].expression), "*=", (yyvsp[0].expression));
  }
#line 4091 "axo_gram.tab.c"
    break;

  case 147: /* special_assignment: expr "/=" expr  */
#line 1524 "axo_gram.y"
                   {
    (yyval.expression) = axo_parse_special_assignment(&(yylsp[-2]), &(yylsp[-1]), &(yylsp[0]), (yyvsp[-2].expression), "/=", (yyvsp[0].expression));
  }
#line 4099 "axo_gram.tab.c"
    break;

  case 148: /* special_assignment: expr "%=" expr  */
#line 1527 "axo_gram.y"
                   {
    (yyval.expression) = axo_parse_special_assignment(&(yylsp[-2]), &(yylsp[-1]), &(yylsp[0]), (yyvsp[-2].expression), "%=", (yyvsp[0].expression));
  }
#line 4107 "axo_gram.tab.c"
    break;

  case 149: /* arr_multidim_typ: '[' '|'  */
#line 1532 "axo_gram.y"
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
#line 4122 "axo_gram.tab.c"
    break;

  case 150: /* arr_multidim_typ: arr_multidim_typ '|'  */
#line 1542 "axo_gram.y"
                         {
    (yyval.typ_type)=(yyvsp[-1].typ_type);
    axo_get_arr_typ((yyval.typ_type)).dim_count++;
  }
#line 4131 "axo_gram.tab.c"
    break;

  case 151: /* arr_typ: '[' ']' val_typ  */
#line 1548 "axo_gram.y"
                          {
    if (axo_none_check((yyvsp[0].typ_type)))
      yyerror(&(yylsp[0]), "None arrays are not a type.");
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
#line 4149 "axo_gram.tab.c"
    break;

  case 152: /* arr_typ: arr_multidim_typ ']' val_typ  */
#line 1561 "axo_gram.y"
                                 {
    if (axo_none_check((yyvsp[0].typ_type)))
      yyerror(&(yylsp[0]), "None arrays are not a type.");
    (yyval.typ_type) = (yyvsp[-2].typ_type);
    axo_get_arr_typ((yyval.typ_type)).subtyp = (yyvsp[0].typ_type);
  }
#line 4160 "axo_gram.tab.c"
    break;

  case 153: /* func_typ_start: '(' val_typ "fn"  */
#line 1569 "axo_gram.y"
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
#line 4176 "axo_gram.tab.c"
    break;

  case 154: /* func_typ_start: '(' "fn"  */
#line 1580 "axo_gram.y"
                {
    axo_func_typ* func_typ = alloc_one(axo_func_typ);
    func_typ->args_len=0;
    func_typ->args_types=NULL;
    func_typ->args_defs=NULL;
    func_typ->ret_typ=axo_none_typ;
    (yyval.typ_type) = (axo_typ){
      .kind = axo_func_kind,
      .func_typ=func_typ
    };
  }
#line 4192 "axo_gram.tab.c"
    break;

  case 155: /* func_typ_args: func_typ_start val_typ  */
#line 1593 "axo_gram.y"
                                       {
    (yyval.typ_type)=(yyvsp[-1].typ_type);
    axo_func_typ* func_typ = (axo_func_typ*)((yyval.typ_type).func_typ);
    func_typ->args_types = (axo_typ*)malloc(axo_func_args_cap*sizeof(axo_typ));
    func_typ->args_defs = (char**)malloc(axo_func_args_cap*sizeof(char*));
    func_typ->args_types[0] = (yyvsp[0].typ_type);
    func_typ->args_defs[0] = alloc_str(axo_get_typ_default((yyvsp[0].typ_type)));
    func_typ->args_len++;
  }
#line 4206 "axo_gram.tab.c"
    break;

  case 156: /* func_typ_args: func_typ_args ',' val_typ  */
#line 1602 "axo_gram.y"
                              {
    (yyval.typ_type)=(yyvsp[-2].typ_type);
    axo_func_typ* func_typ = (axo_func_typ*)((yyval.typ_type).func_typ);
    resize_dyn_arr_if_needed(axo_typ, func_typ->args_types, func_typ->args_len, axo_func_args_cap);
    resize_dyn_arr_if_needed(char*, func_typ->args_defs, func_typ->args_len, axo_func_args_cap);
    func_typ->args_types[func_typ->args_len] = (yyvsp[0].typ_type);
    func_typ->args_defs[func_typ->args_len] = alloc_str(axo_get_typ_default((yyvsp[0].typ_type)));
    func_typ->args_len++;
  }
#line 4220 "axo_gram.tab.c"
    break;

  case 159: /* no_q_typ: "identifier"  */
#line 1617 "axo_gram.y"
                {
    const axo_typ_def* def = axo_get_typ_def(state, (yyvsp[0].str));
    if (def==NULL){
      yyerror(&(yylsp[0]), "Type '%s' isn't defined.", (yyvsp[0].str));
    }else{
      (yyval.typ_type)=def->typ;
    }
  }
#line 4233 "axo_gram.tab.c"
    break;

  case 160: /* no_q_typ: '@' val_typ  */
#line 1625 "axo_gram.y"
                {
    (yyval.typ_type) = (axo_typ){
      .kind = axo_ptr_kind,
      .subtyp = malloc(sizeof(axo_typ)),
      .def = NULL,
    };
    *axo_subtyp((yyval.typ_type))=(yyvsp[0].typ_type);
  }
#line 4246 "axo_gram.tab.c"
    break;

  case 161: /* no_q_typ: "none"  */
#line 1633 "axo_gram.y"
           {
    (yyval.typ_type) = axo_none_typ;
  }
#line 4254 "axo_gram.tab.c"
    break;

  case 164: /* no_q_typ: '.' '.' '.'  */
#line 1638 "axo_gram.y"
                {
    (yyval.typ_type) = (axo_typ){
      .kind = axo_c_arg_list_kind,
      .def = NULL,
    };
  }
#line 4265 "axo_gram.tab.c"
    break;

  case 165: /* val_typ: no_q_typ  */
#line 1646 "axo_gram.y"
                   {
    (yyval.typ_type).is_const=false;
    (yyval.typ_type).is_volatile=false;
  }
#line 4274 "axo_gram.tab.c"
    break;

  case 166: /* val_typ: type_qualifier no_q_typ  */
#line 1650 "axo_gram.y"
                            {
    (yyval.typ_type) = (yyvsp[0].typ_type);
    (yyval.typ_type).is_const=(yyvsp[-1].typ_type).is_const;
    (yyval.typ_type).is_volatile=(yyvsp[-1].typ_type).is_volatile;
  }
#line 4284 "axo_gram.tab.c"
    break;

  case 168: /* type_qualifier: type_qualifier typ_q  */
#line 1658 "axo_gram.y"
                           {
      (yyval.typ_type) = (axo_typ){
        .is_const=(yyvsp[-1].typ_type).is_const||(yyvsp[0].typ_type).is_const,
        .is_volatile=(yyvsp[-1].typ_type).is_volatile||(yyvsp[0].typ_type).is_volatile
      };
    }
#line 4295 "axo_gram.tab.c"
    break;

  case 169: /* typ_q: "const"  */
#line 1666 "axo_gram.y"
                {
      (yyval.typ_type) = (axo_typ){.is_const=true, .is_volatile=false};
    }
#line 4303 "axo_gram.tab.c"
    break;

  case 170: /* typ_q: "volatile"  */
#line 1669 "axo_gram.y"
                 {
      (yyval.typ_type) = (axo_typ){.is_const=false, .is_volatile=true};
    }
#line 4311 "axo_gram.tab.c"
    break;

  case 171: /* called_expr: expr '('  */
#line 1674 "axo_gram.y"
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
#line 4336 "axo_gram.tab.c"
    break;

  case 172: /* called_expr: expr ':' "identifier" '('  */
#line 1694 "axo_gram.y"
                      {
    axo_validate_rval(&(yylsp[-3]), (yyvsp[-3].expression));
    (yyval.function_call) = axo_method_call(state, top_scope, &(yyloc), &(yylsp[-3]), &(yylsp[-1]), (yyvsp[-3].expression), (yyvsp[-1].str), rval_now);
  }
#line 4345 "axo_gram.tab.c"
    break;

  case 173: /* func_call_start: called_expr  */
#line 1700 "axo_gram.y"
                              {
    axo_func_typ* fnt = (axo_func_typ*)((yyvsp[0].function_call).typ.func_typ);
    if ((yyval.function_call).params_len<fnt->args_len){
      resize_dyn_arr_if_needed(axo_expr, (yyval.function_call).params, (yyval.function_call).params_len, axo_func_args_cap);
      (yyval.function_call).params[(yyval.function_call).params_len].val = alloc_str(fnt->args_defs[(yyval.function_call).params_len]);
      (yyval.function_call).params_len++;
    }
  }
#line 4358 "axo_gram.tab.c"
    break;

  case 174: /* func_call_start: called_expr expr  */
#line 1708 "axo_gram.y"
                     {
    if (axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression))) {
      axo_func_typ* fnt = (axo_func_typ*)((yyvsp[-1].function_call).typ.func_typ);
      if ((yyval.function_call).params_len <= fnt->args_len){
        if (!axo_typ_eq(fnt->args_types[(yyval.function_call).params_len], (yyvsp[0].expression).typ)){
          yyerror(&(yylsp[0]), "Expected value of type "axo_underline_start"%s"axo_reset_style axo_red_fgs " for argument #%d, got type "axo_underline_start"%s"axo_reset_style axo_red_fgs" instead.", axo_typ_to_str(fnt->args_types[(yyval.function_call).params_len]), (yyval.function_call).params_len+1, axo_typ_to_str((yyvsp[0].expression).typ));
        }else{
          resize_dyn_arr_if_needed(axo_expr, (yyval.function_call).params, (yyval.function_call).params_len, axo_func_args_cap);
          (yyval.function_call).params[(yyval.function_call).params_len++] = (yyvsp[0].expression);
        }
      }else{
        if (fnt->args_types[0].kind != axo_c_arg_list_kind)
          yyerror(&(yylsp[-1]), "Too many parameters for function type '%s'", axo_typ_to_str((yyvsp[-1].function_call).typ));
      }
    }
  }
#line 4379 "axo_gram.tab.c"
    break;

  case 175: /* func_call_start: func_call_start ',' expr  */
#line 1724 "axo_gram.y"
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
#line 4400 "axo_gram.tab.c"
    break;

  case 176: /* func_call_start: func_call_start ','  */
#line 1740 "axo_gram.y"
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
    (yyval.function_call).params[i].val = alloc_str(defaults[i]);
    (yyval.function_call).params_len++;
  }
#line 4418 "axo_gram.tab.c"
    break;

  case 177: /* func_call: func_call_start ')'  */
#line 1755 "axo_gram.y"
                                {
    (yyval.function_call)=(yyvsp[-1].function_call);
    axo_func_typ* fnt = (axo_func_typ*)((yyvsp[-1].function_call).typ.func_typ);
    if (fnt->args_len>(yyval.function_call).params_len){
      // printf("Filling params with args defaults in call '%s'\n", $$.called_val);
      (yyval.function_call).params=(axo_expr*)realloc((yyval.function_call).params, fnt->args_len*sizeof(axo_expr));
      for (int i=(yyvsp[-1].function_call).params_len; i<fnt->args_len-1; i++){ //Fill with defaults up until pre-last arg!
        // printf("arg #%d\n", i);
        // printf("%s\n", fnt->args_defs[i]);
        (yyval.function_call).params[i] = (axo_expr){.typ=fnt->args_types[i], .val=alloc_str(fnt->args_defs[i])};
      }
      (yyval.function_call).params_len=fnt->args_len-1;
      int i = fnt->args_len-1;
      if (fnt->args_types[i].kind != axo_c_arg_list_kind){
        // printf("arg #%d\n", i);
        // printf("%s\n", fnt->args_defs[i]);
        (yyval.function_call).params[i] = (axo_expr){.typ=fnt->args_types[i], .val=alloc_str(fnt->args_defs[i])};
        (yyval.function_call).params_len++;
      }
    }
  }
#line 4444 "axo_gram.tab.c"
    break;

  case 178: /* code_scope_start: '{'  */
#line 1778 "axo_gram.y"
                       {
    if (!axo_code_scope_started) axo_push_scope(scopes, axo_new_scope(top_scope));
    axo_code_scope_started = false;
  }
#line 4453 "axo_gram.tab.c"
    break;

  case 179: /* code_scope: code_scope_start statements '}'  */
#line 1784 "axo_gram.y"
                                             {
    (yyval.scope) = top_scope;
    scopes->len--;
  }
#line 4462 "axo_gram.tab.c"
    break;

  case 180: /* func_def_name: "identifier"  */
#line 1790 "axo_gram.y"
                     {
    (yyval.function) = (axo_func){
      .name=alloc_str((yyvsp[0].str)),
      .args_names=NULL
    };
  }
#line 4473 "axo_gram.tab.c"
    break;

  case 181: /* func_def_name: "identifier" "::" "identifier"  */
#line 1796 "axo_gram.y"
                   {
    axo_module* mod = axo_get_module(state, (yyvsp[-2].str));
    if (!mod)
      yyerror(&(yylsp[-2]), "Module doesn't exist.");
    else
      (yyval.function) = (axo_func){
        .name=fmtstr("%s%s", mod->prefix, (yyvsp[0].str)),
        .args_names=NULL
      };
  }
#line 4488 "axo_gram.tab.c"
    break;

  case 182: /* func_def_name: val_typ ':' "identifier"  */
#line 1806 "axo_gram.y"
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
      case axo_none_kind:
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
        (yyval.function).args_names[0] = alloc_str("_axo_self_param");
        break;
      default:
        free(subtyp);
        yyerror(&(yylsp[-2]), "Method are only allowed for structs, enums and primitives, but got %s.", axo_typ_kind_to_str((yyvsp[-2].typ_type).kind));
        break;
    }
  }
#line 4525 "axo_gram.tab.c"
    break;

  case 183: /* func_def_ret_typ: "fn"  */
#line 1840 "axo_gram.y"
                        {
    axo_push_scope(scopes, axo_new_scope(top_scope));
    axo_code_scope_started = true;
    (yyval.typ_type) = axo_no_typ;
  }
#line 4535 "axo_gram.tab.c"
    break;

  case 184: /* func_def_ret_typ: val_typ "fn"  */
#line 1845 "axo_gram.y"
                 {
    axo_push_scope(scopes, axo_new_scope(top_scope));
    axo_code_scope_started = true;
    (yyval.typ_type) = (yyvsp[-1].typ_type);
  }
#line 4545 "axo_gram.tab.c"
    break;

  case 185: /* func_def_start: func_def_ret_typ func_def_name '(' func_args ')'  */
#line 1852 "axo_gram.y"
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
    //Free func_args
    free((yyvsp[-1].function).f_typ.args_types);
    }else{
      (yyval.function).args_names = (yyvsp[-1].function).args_names;
      (yyval.function).f_typ.args_defs = (yyvsp[-1].function).f_typ.args_defs;
      (yyval.function).f_typ.args_types = (yyvsp[-1].function).f_typ.args_types;
      (yyval.function).f_typ.args_len = args_len;
    }
    (yyval.function).f_typ.ret_typ = (yyvsp[-4].typ_type);
    for (int i = 0; i<(yyval.function).f_typ.args_len; i++)
      axo_set_var(top_scope, (axo_var){.name=(yyval.function).args_names[i], .typ=(yyval.function).f_typ.args_types[i]});
    //Set the function
    axo_typ typ = (axo_typ){
      .kind=axo_func_kind,
      .func_typ=alloc_one(axo_func_typ)
    };
    *((axo_func_typ*)(typ.func_typ)) = (yyval.function).f_typ;
    axo_set_var(state->global_scope, (axo_var){.name=(yyval.function).name, .typ=typ});
    top_scope->parent_func = axo_get_var(state->global_scope, (yyval.function).name);
  }
#line 4593 "axo_gram.tab.c"
    break;

  case 186: /* struct_literal_start: "struct{"  */
#line 1897 "axo_gram.y"
                                            {
    const axo_typ_def* td = axo_get_typ_def(state, (yyvsp[0].str));
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
#line 4614 "axo_gram.tab.c"
    break;

  case 187: /* struct_literal_start: "struct{" expr  */
#line 1913 "axo_gram.y"
                              {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    const axo_typ_def* td = axo_get_typ_def(state, (yyvsp[-1].str));
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
#line 4640 "axo_gram.tab.c"
    break;

  case 188: /* struct_literal_start: "struct{" "identifier" '=' expr  */
#line 1934 "axo_gram.y"
                                       {
    axo_validate_rval(&(yylsp[0]), (yyvsp[0].expression));
    const axo_typ_def* td = axo_get_typ_def(state, (yyvsp[-3].str));
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
#line 4676 "axo_gram.tab.c"
    break;

  case 189: /* struct_literal_start: struct_literal_start ',' expr  */
#line 1965 "axo_gram.y"
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
#line 4695 "axo_gram.tab.c"
    break;

  case 190: /* struct_literal_start: struct_literal_start ','  */
#line 1979 "axo_gram.y"
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
#line 4710 "axo_gram.tab.c"
    break;

  case 191: /* struct_literal_start: struct_literal_start ',' "identifier" '=' expr  */
#line 1989 "axo_gram.y"
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
#line 4735 "axo_gram.tab.c"
    break;

  case 192: /* struct_literal: struct_literal_start '}'  */
#line 2011 "axo_gram.y"
                                          {
    (yyval.struct_val_type)=(yyvsp[-1].struct_val_type);
    axo_struct* structure = ((axo_struct*)(yyval.struct_val_type).typ.structure);
    for(int i=0; i<structure->fields_len; i++){
      if((yyval.struct_val_type).fields[i] == NULL) (yyval.struct_val_type).fields[i] = structure->fields[i].def;
    }
  }
#line 4747 "axo_gram.tab.c"
    break;

  case 193: /* func_def: func_def_start code_scope  */
#line 2020 "axo_gram.y"
                                     {
    axo_var* fn_var = axo_get_var(state->global_scope, (yyvsp[-1].function).name);
    if (fn_var){
      axo_func_typ* fnt = (axo_func_typ*)(fn_var->typ.func_typ);
      if (fnt->ret_typ.kind == axo_no_kind)
        fnt->ret_typ = axo_none_typ;
      (yyval.function) = (axo_func){
        .name = (yyvsp[-1].function).name,
        .args_names = (yyvsp[-1].function).args_names,
        .f_typ = *fnt,
        .body = (yyvsp[0].scope)
      };
    }else{
      yyerror(NULL, "This should never happen.");
    }
  }
#line 4768 "axo_gram.tab.c"
    break;

  case 194: /* func_arg: val_typ "identifier"  */
#line 2038 "axo_gram.y"
                        {
    if (axo_none_check((yyvsp[-1].typ_type)))
      yyerror(&(yylsp[-1]), "Cannot declare a none value.");
    (yyval.function_argument).name = alloc_str((yyvsp[0].str));
    (yyval.function_argument).typ = (yyvsp[-1].typ_type);
    (yyval.function_argument).def = alloc_str(axo_get_typ_default((yyvsp[-1].typ_type)));
  }
#line 4780 "axo_gram.tab.c"
    break;

  case 195: /* func_arg: "identifier" '=' expr  */
#line 2045 "axo_gram.y"
                  {
    if (axo_none_check((yyvsp[0].expression).typ))
      yyerror(&(yylsp[0]), "Cannot declare a none variable.");
    (yyval.function_argument).name = alloc_str((yyvsp[-2].str));
    (yyval.function_argument).typ = (yyvsp[0].expression).typ;
    (yyval.function_argument).def = alloc_str((yyvsp[0].expression).val);
  }
#line 4792 "axo_gram.tab.c"
    break;

  case 196: /* func_arg: val_typ "identifier" '=' expr  */
#line 2052 "axo_gram.y"
                          {
    if (axo_none_check((yyvsp[-3].typ_type)))
      yyerror(&(yylsp[-3]), "Cannot declare a none variable.");
    if (!axo_typ_eq((yyvsp[-3].typ_type), (yyvsp[0].expression).typ)){
      char* expected_type_str = alloc_str(axo_typ_to_str((yyvsp[-3].typ_type)));
      yyerror(&(yylsp[0]), "Default value of type '%s' doesn't match expected type '%s'.", axo_typ_to_str((yyvsp[0].expression).typ), expected_type_str);
      free(expected_type_str);
    }
    (yyval.function_argument).name = alloc_str((yyvsp[-2].str));
    (yyval.function_argument).typ = (yyvsp[-3].typ_type);
    (yyval.function_argument).def = alloc_str((yyvsp[0].expression).val);
  }
#line 4809 "axo_gram.tab.c"
    break;

  case 197: /* func_args: %empty  */
#line 2066 "axo_gram.y"
                            {
    (yyval.function).args_names = NULL;
    (yyval.function).f_typ.args_defs = NULL;
    (yyval.function).f_typ.args_types = NULL;
    (yyval.function).f_typ.args_len = 0;
  }
#line 4820 "axo_gram.tab.c"
    break;

  case 198: /* func_args: func_arg  */
#line 2072 "axo_gram.y"
             {
    (yyval.function).args_names = (char**)malloc(axo_func_args_cap*sizeof(char*));
    (yyval.function).f_typ.args_defs = (char**)malloc(axo_func_args_cap*sizeof(char*));
    (yyval.function).f_typ.args_types = (axo_typ*)malloc(axo_func_args_cap*sizeof(axo_typ));
    (yyval.function).args_names[0] = (yyvsp[0].function_argument).name;
    (yyval.function).f_typ.args_defs[0] = (yyvsp[0].function_argument).def;
    (yyval.function).f_typ.args_types[0] = (yyvsp[0].function_argument).typ;
    (yyval.function).f_typ.args_len = 1;
  }
#line 4834 "axo_gram.tab.c"
    break;

  case 199: /* func_args: func_args ',' func_arg  */
#line 2081 "axo_gram.y"
                           {
    (yyval.function) = (yyvsp[-2].function);
    resize_dyn_arr_if_needed(char*, (yyval.function).args_names, (yyval.function).f_typ.args_len, axo_func_args_cap);
    resize_dyn_arr_if_needed(char*, (yyval.function).f_typ.args_defs, (yyval.function).f_typ.args_len, axo_func_args_cap);
    resize_dyn_arr_if_needed(axo_typ, (yyval.function).f_typ.args_types, (yyval.function).f_typ.args_len, axo_func_args_cap);
    (yyval.function).args_names[(yyval.function).f_typ.args_len] = (yyvsp[0].function_argument).name;
    (yyval.function).f_typ.args_defs[(yyval.function).f_typ.args_len] = (yyvsp[0].function_argument).def;
    (yyval.function).f_typ.args_types[(yyval.function).f_typ.args_len] = (yyvsp[0].function_argument).typ;
    (yyval.function).f_typ.args_len++;
  }
#line 4849 "axo_gram.tab.c"
    break;

  case 200: /* enum_names: "identifier"  */
#line 2093 "axo_gram.y"
                  {
    (yyval.enum_type).names = (char**)malloc(axo_enum_names_cap*sizeof(char*));
    (yyval.enum_type).names[0] = alloc_str((yyvsp[0].str));
    (yyval.enum_type).len = 1;
  }
#line 4859 "axo_gram.tab.c"
    break;

  case 201: /* enum_names: enum_names ',' "identifier"  */
#line 2098 "axo_gram.y"
                        {
    (yyval.enum_type) = (yyvsp[-2].enum_type);
    if ((yyval.enum_type).len % axo_enum_names_cap == 0)
    (yyval.enum_type).names = (char**)realloc((yyval.enum_type).names, ((yyval.enum_type).len+axo_enum_names_cap)*sizeof(char*));
    (yyval.enum_type).names[(yyval.enum_type).len] = alloc_str((yyvsp[0].str));
    (yyval.enum_type).len++;
  }
#line 4871 "axo_gram.tab.c"
    break;


#line 4875 "axo_gram.tab.c"

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

#line 2107 "axo_gram.y"


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

void yyerror(YYLTYPE* loc, const char * fmt, ...){
  if (prog_return==0)
    axo_err_printf("Click an error to learn more.\n");
  prog_return = 1;
  axo_raise_error;
  va_list args;
  if (loc==NULL){
    axo_err_printf(axo_red_fg "Error: ");
    va_start(args, fmt);
    axo_err_vprintf(fmt, args);
    va_end(args);
    printf(axo_reset_style"\n");
  }else{
    va_start(args, fmt);
    char* msg = NULL;
    if (vasprintf(&msg, fmt, args) < 0)
      axo_err_printf("Couldn't use vsprintf at %s:%d", __FILE__, __LINE__);
    #ifdef __EMSCRIPTEN__
      axo_err_printf("error %d:%d: %s\n", loc->first_line, loc->first_column, msg);
      free(msg);
      return;
    #endif
    char* err_msg = axo_error_with_loc(state, loc, msg);
    va_end(args);
    axo_err_printf("%s\n", err_msg);
    free(err_msg);
    if (msg) free(msg);
  }
  // exit(1);
}

int compile(int argc, char** argv) {
  //Seed the pseudo random number generator
  srand(time(NULL));
  //Start timing the event
  clock_t start, end;
  double cpu_time_used;
  if (test_playground) return playground();
  
  //Get the root path (the path where the axo compiler lays)
  char full_exec_path[1024] = "";
  char root_p[1024] = "";
  axo_get_parent_dir(root_p, axo_get_exec_path(full_exec_path, sizeof(full_exec_path)));
  // printf("Root: %s\n", root_p);
  //Initialize state
  state = axo_new_state(root_p);
  axo_test_lua(state);
  //Save the original working dir
  state->orig_cwd = axo_cwd((char[axo_max_path_len]){}, axo_max_path_len);
  // printf("orig_cwd: %s\n", orig_cwd);
  
  //Load config from axo.config
  // axo_bytes_to_file("axo.config", (char*)(&(state->config)), sizeof(axo_compiler_config));
  axo_load_cfg(state);
  bool measure_time = state->config.timer;
  if (measure_time){
    start = clock();
  }
  if (argc <= 1){
    yyerror(NULL, "No input.");
    return 1;
  }
  char* cmd = argv[1];
  if (strcmp(cmd, "info")==0){
      prog_return = axo_info_cmd(state, argc, argv);
  }else if (strcmp(cmd, "set")==0){
    prog_return = axo_set_cmd(state, argc, argv);
  }else{
    axo_handle_args(state, argc, argv, 1);
    axo_printf = state->silenced ?  axo_no_printf : printf;
    if (state->entry_file || state->input_str){
      if (state->input_str && state->entry_file){
        yyerror(NULL, "Cannot take input from string and file.");
        return 1;
      }else if (state->entry_file){
        char* input_file_path = state->entry_file;
        state->output_c_file = state->output_c_file ? state->output_c_file : axo_swap_file_extension(input_file_path, ".c");
        state->output_file = state->output_file ? state->output_file : axo_swap_file_extension(input_file_path, AXO_BIN_EXT);
      }else if (state->input_str){
        axo_new_string_source(state, state->input_str);
        state->output_c_file = state->output_c_file ? state->output_c_file : alloc_str("a.c");
        state->output_file = state->output_file ? state->output_file : alloc_str("a"AXO_BIN_EXT);
      }else{
        yyerror(NULL, "No input.");
        return 1;
      }
      state->entry_point = state->entry_point ? state->entry_point : alloc_str("axo__main");
      //Scopes table
      scopes = alloc_one(axo_scopes);
      scopes->scopes = NULL;
      scopes->len = 0;
      axo_push_scope(scopes, state->global_scope);
      if (state->entry_file)
        axo_new_source(state, state->entry_file);
      else
        state->entry_file = alloc_str("./in.axo");
    }else{
      yyerror(NULL, "No code provided.\nUsage: axo <source> |options|");
      return 1;
    }
    //Use the core module
    axo_add_decl(state, axo_use_module(state, NULL, "core"));
    state->in_core = true;
    //Set entry point
    //empty_str should just be null to prevent leaks?
    axo_add_decl(state, (axo_decl){
      .kind=axo_other_decl_kind,
      .val=empty_str
    });
    //Parse
    yyparse();
    // axo_printf("Parsing done.\n");
    // char* cde = axo_get_code(state);
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
    axo_chdir(state->orig_cwd);
    if (!prog_return){
      #ifdef __EMSCRIPTEN__
        return 0;
      #else
        char* code = axo_get_code(state);
        overwrite_file_with_string(state->output_c_file, code);
        free(code);
        //Compile program
        char* compiler_cmd;
        int res = 1;
        switch(state->config.cc){
          case axo_gcc_cc_kind:
            compiler_cmd = fmtstr("gcc -o %s %s", state->output_file, state->output_c_file, state->output_c_file);
            for (int i=0; i<state->extra_c_sources_len; i++){
              strapnd(&compiler_cmd, " ");
              strapnd(&compiler_cmd, state->extra_c_sources[i]);
            }
            for (int i=0; i<state->cc_flags_len; i++){
              strapnd(&compiler_cmd, " ");
              strapnd(&compiler_cmd, state->cc_flags[i]);
            }
            // printf("Compiling command:\n%s\n", compiler_cmd);
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
      #endif
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

int main(int argc, char** argv){
  #ifdef __EMSCRIPTEN__
    return 0;
  #else
    int ret = compile(argc, argv);
    axo_free_state(state);
    return ret;
  #endif
}

char* axo_compile_to_c(int argc, char* input){
  char** argv = (char**)malloc(3*sizeof(char*));
  argv[0] = alloc_str(".");
  argv[1] = alloc_str("-i");
  argv[2] = alloc_str(input);
  compile(argc, argv);
  return axo_get_code(state);
}

