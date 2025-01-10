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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "nahid.y"

    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include<math.h>
    #include "identifier.c"
    int yyparse();
    int yylex();
    int yyerror();
    int ifdone[1000];
    struct datatype casedata;
    int caseflag;
    int ifptr=0;
    int dimencount = 0;
    struct ll_identifier *root=NULL,*last=NULL;
    int typenow = -1;
    int gcd(int a, int b) 
    { 
        if (b == 0) 
            return a; 
        return gcd(b, a % b);  
    }
    extern FILE *infotext;

#line 96 "nahid.tab.c"

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

#include "nahid.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NAME = 3,                       /* NAME  */
  YYSYMBOL_VARACCESS = 4,                  /* VARACCESS  */
  YYSYMBOL_NUM = 5,                        /* NUM  */
  YYSYMBOL_STR = 6,                        /* STR  */
  YYSYMBOL_FUNC = 7,                       /* FUNC  */
  YYSYMBOL_CLASS = 8,                      /* CLASS  */
  YYSYMBOL_INIT = 9,                       /* INIT  */
  YYSYMBOL_INT = 10,                       /* INT  */
  YYSYMBOL_DOUBLE = 11,                    /* DOUBLE  */
  YYSYMBOL_STRING = 12,                    /* STRING  */
  YYSYMBOL_CONST = 13,                     /* CONST  */
  YYSYMBOL_VOID = 14,                      /* VOID  */
  YYSYMBOL_VAR = 15,                       /* VAR  */
  YYSYMBOL_ELSEIF = 16,                    /* ELSEIF  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_SWITCH = 19,                    /* SWITCH  */
  YYSYMBOL_CASE = 20,                      /* CASE  */
  YYSYMBOL_def_ault = 21,                  /* def_ault  */
  YYSYMBOL_FOR = 22,                       /* FOR  */
  YYSYMBOL_WHILE = 23,                     /* WHILE  */
  YYSYMBOL_DO = 24,                        /* DO  */
  YYSYMBOL_CONTINUE = 25,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 26,                    /* RETURN  */
  YYSYMBOL_RIGHT_ASSIGN = 27,              /* RIGHT_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 28,               /* LEFT_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 29,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 30,                /* SUB_ASSIGN  */
  YYSYMBOL_MUL_ASSIGN = 31,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 32,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 33,                /* MOD_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 34,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 35,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 36,                 /* OR_ASSIGN  */
  YYSYMBOL_RIGHT_OP = 37,                  /* RIGHT_OP  */
  YYSYMBOL_LEFT_OP = 38,                   /* LEFT_OP  */
  YYSYMBOL_INC_OP = 39,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 40,                    /* DEC_OP  */
  YYSYMBOL_PTR_OP = 41,                    /* PTR_OP  */
  YYSYMBOL_AND_OP = 42,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 43,                     /* OR_OP  */
  YYSYMBOL_LE_OP = 44,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 45,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 46,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 47,                     /* NE_OP  */
  YYSYMBOL_PRINT = 48,                     /* PRINT  */
  YYSYMBOL_SIN = 49,                       /* SIN  */
  YYSYMBOL_TAN = 50,                       /* TAN  */
  YYSYMBOL_LOG = 51,                       /* LOG  */
  YYSYMBOL_LOG10 = 52,                     /* LOG10  */
  YYSYMBOL_COS = 53,                       /* COS  */
  YYSYMBOL_ACOS = 54,                      /* ACOS  */
  YYSYMBOL_ASIN = 55,                      /* ASIN  */
  YYSYMBOL_ATAN = 56,                      /* ATAN  */
  YYSYMBOL_GCD = 57,                       /* GCD  */
  YYSYMBOL_LCM = 58,                       /* LCM  */
  YYSYMBOL_POW = 59,                       /* POW  */
  YYSYMBOL_IMPORT = 60,                    /* IMPORT  */
  YYSYMBOL_61_ = 61,                       /* '{'  */
  YYSYMBOL_62_ = 62,                       /* '}'  */
  YYSYMBOL_63_ = 63,                       /* ';'  */
  YYSYMBOL_64_ = 64,                       /* '('  */
  YYSYMBOL_65_ = 65,                       /* ')'  */
  YYSYMBOL_66_ = 66,                       /* ':'  */
  YYSYMBOL_67_ = 67,                       /* ','  */
  YYSYMBOL_68_ = 68,                       /* '+'  */
  YYSYMBOL_69_ = 69,                       /* '-'  */
  YYSYMBOL_70_ = 70,                       /* '/'  */
  YYSYMBOL_71_ = 71,                       /* '*'  */
  YYSYMBOL_72_ = 72,                       /* '<'  */
  YYSYMBOL_73_ = 73,                       /* '>'  */
  YYSYMBOL_74_ = 74,                       /* "&"  */
  YYSYMBOL_75_ = 75,                       /* '!'  */
  YYSYMBOL_76_ = 76,                       /* '~'  */
  YYSYMBOL_77_ = 77,                       /* '^'  */
  YYSYMBOL_78_ = 78,                       /* '|'  */
  YYSYMBOL_79_ = 79,                       /* '='  */
  YYSYMBOL_80_ = 80,                       /* '['  */
  YYSYMBOL_81_ = 81,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 82,                  /* $accept  */
  YYSYMBOL_starthere = 83,                 /* starthere  */
  YYSYMBOL_classgrammer = 84,              /* classgrammer  */
  YYSYMBOL_function = 85,                  /* function  */
  YYSYMBOL_86_1 = 86,                      /* $@1  */
  YYSYMBOL_TYPE = 87,                      /* TYPE  */
  YYSYMBOL_fparameter = 88,                /* fparameter  */
  YYSYMBOL_fsparameter_list = 89,          /* fsparameter_list  */
  YYSYMBOL_statement = 90,                 /* statement  */
  YYSYMBOL_switchgrammer = 91,             /* switchgrammer  */
  YYSYMBOL_92_2 = 92,                      /* $@2  */
  YYSYMBOL_casegrammer = 93,               /* casegrammer  */
  YYSYMBOL_94_3 = 94,                      /* $@3  */
  YYSYMBOL_mathexpr = 95,                  /* mathexpr  */
  YYSYMBOL_ifgrammer = 96,                 /* ifgrammer  */
  YYSYMBOL_97_4 = 97,                      /* $@4  */
  YYSYMBOL_expression = 98,                /* expression  */
  YYSYMBOL_returnstmt = 99,                /* returnstmt  */
  YYSYMBOL_declaration = 100,              /* declaration  */
  YYSYMBOL_varriables = 101,               /* varriables  */
  YYSYMBOL_varriable = 102,                /* varriable  */
  YYSYMBOL_arraydim = 103,                 /* arraydim  */
  YYSYMBOL_arrayx = 104,                   /* arrayx  */
  YYSYMBOL_elsifgrmr = 105,                /* elsifgrmr  */
  YYSYMBOL_106_5 = 106,                    /* $@5  */
  YYSYMBOL_asgngrammer = 107,              /* asgngrammer  */
  YYSYMBOL_forgrammer = 108,               /* forgrammer  */
  YYSYMBOL_forassign = 109,                /* forassign  */
  YYSYMBOL_ASGNVAR = 110,                  /* ASGNVAR  */
  YYSYMBOL_whilegrammer = 111,             /* whilegrammer  */
  YYSYMBOL_dowhilegrameer = 112,           /* dowhilegrameer  */
  YYSYMBOL_printgrammer = 113,             /* printgrammer  */
  YYSYMBOL_114_6 = 114,                    /* $@6  */
  YYSYMBOL_manyexprgm = 115,               /* manyexprgm  */
  YYSYMBOL_116_7 = 116,                    /* $@7  */
  YYSYMBOL_importgrammer = 117,            /* importgrammer  */
  YYSYMBOL_118_8 = 118,                    /* $@8  */
  YYSYMBOL_manyname = 119,                 /* manyname  */
  YYSYMBOL_120_9 = 120                     /* $@9  */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   923

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  294

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


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
       2,     2,     2,    75,     2,     2,     2,     2,     2,     2,
      64,    65,    71,    68,    67,    69,     2,    70,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,    63,
      72,    79,    73,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,    77,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,    78,    62,    76,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    74
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    57,    57,    61,    62,    63,    64,    67,    80,    80,
      96,    97,    98,    99,   100,   109,   110,   112,   113,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     128,   128,   135,   135,   142,   147,   148,   153,   153,   163,
     166,   170,   193,   201,   209,   217,   225,   233,   241,   254,
     262,   270,   283,   296,   299,   302,   305,   308,   311,   314,
     317,   320,   323,   326,   329,   332,   335,   338,   341,   344,
     347,   353,   356,   360,   362,   363,   365,   374,   400,   419,
     439,   441,   442,   444,   445,   445,   451,   457,   458,   461,
     467,   468,   469,   502,   539,   576,   612,   648,   684,   720,
     756,   792,   828,   866,   871,   875,   875,   879,   879,   882,
     886,   886,   890,   890,   893
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NAME", "VARACCESS",
  "NUM", "STR", "FUNC", "CLASS", "INIT", "INT", "DOUBLE", "STRING",
  "CONST", "VOID", "VAR", "ELSEIF", "ELSE", "IF", "SWITCH", "CASE",
  "def_ault", "FOR", "WHILE", "DO", "CONTINUE", "RETURN", "RIGHT_ASSIGN",
  "LEFT_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "RIGHT_OP",
  "LEFT_OP", "INC_OP", "DEC_OP", "PTR_OP", "AND_OP", "OR_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "PRINT", "SIN", "TAN", "LOG", "LOG10", "COS",
  "ACOS", "ASIN", "ATAN", "GCD", "LCM", "POW", "IMPORT", "'{'", "'}'",
  "';'", "'('", "')'", "':'", "','", "'+'", "'-'", "'/'", "'*'", "'<'",
  "'>'", "\"&\"", "'!'", "'~'", "'^'", "'|'", "'='", "'['", "']'",
  "$accept", "starthere", "classgrammer", "function", "$@1", "TYPE",
  "fparameter", "fsparameter_list", "statement", "switchgrammer", "$@2",
  "casegrammer", "$@3", "mathexpr", "ifgrammer", "$@4", "expression",
  "returnstmt", "declaration", "varriables", "varriable", "arraydim",
  "arrayx", "elsifgrmr", "$@5", "asgngrammer", "forgrammer", "forassign",
  "ASGNVAR", "whilegrammer", "dowhilegrameer", "printgrammer", "$@6",
  "manyexprgm", "$@7", "importgrammer", "$@8", "manyname", "$@9", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-203)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-110)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      31,    -1,     8,    16,  -203,    21,    31,    31,    31,    31,
     -37,   -26,   -48,   -22,   -30,    47,  -203,  -203,  -203,  -203,
    -203,    55,   110,    12,   207,  -203,    16,     0,     5,     6,
       9,   211,  -203,  -203,    13,    25,    26,    29,    15,   151,
      30,    53,    58,    59,    60,    62,    63,    66,    67,    71,
      73,    74,   207,   207,   207,    33,   110,   110,   110,   230,
     110,   110,   110,   110,   -47,   110,   110,   110,  -203,  -203,
    -203,  -203,  -203,    22,  -203,    68,  -203,   845,  -203,  -203,
    -203,    37,    99,   207,   207,   207,   207,   207,   207,   207,
     207,  -203,  -203,   207,   207,   207,   137,   207,   110,  -203,
    -203,  -203,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   267,   845,   845,    79,  -203,  -203,  -203,
     207,   207,   207,   207,   207,   207,  -203,   207,   207,   207,
     207,   207,   207,   207,   207,   207,  -203,  -203,  -203,  -203,
    -203,   137,  -203,  -203,  -203,    22,  -203,    65,    83,    47,
      76,    37,   845,   845,   845,   845,   845,   845,   845,   845,
     845,   278,   315,   211,    85,    84,   326,    88,   207,   363,
     374,   411,   422,   459,   470,   507,   518,   555,   567,   604,
    -203,  -203,   845,   845,   845,   845,   845,   845,   845,   845,
     845,   845,   845,   845,   845,   845,   845,  -203,    72,  -203,
     207,  -203,   149,  -203,  -203,    93,   104,   207,   137,   111,
     148,   615,   108,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,   207,   207,   207,  -203,   652,   114,   116,   110,  -203,
     664,  -203,   110,   117,   115,   121,   701,   712,   749,  -203,
      37,   110,   125,   128,   137,   129,   207,   207,  -203,  -203,
    -203,  -203,    76,   130,  -203,    23,   113,  -203,   760,  -203,
    -203,  -203,    40,   207,   124,   131,   133,   132,   152,   135,
    -203,   797,   110,  -203,   110,  -203,   207,   110,   110,  -203,
     155,   808,   156,  -203,  -203,   159,  -203,    23,   110,  -203,
     166,  -203,    40,  -203
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     0,   110,     0,     2,     2,     2,     2,
       0,     0,     0,     0,    75,     0,     1,     5,     3,     4,
       6,    15,    19,     0,     0,    73,     0,   114,     0,     0,
       0,    41,    39,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,    19,    19,     0,
      19,    19,    19,    19,     0,    19,    19,    19,    14,    10,
      11,    12,    13,     0,    76,    79,    41,    77,    74,   112,
     111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    94,     0,     0,     0,     0,     0,    19,    72,
      71,   105,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    67,    68,     0,    29,    25,    20,
       0,     0,     0,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    21,    23,    22,
      88,     0,    24,    26,    28,     0,    81,     0,     0,     0,
      17,     0,    95,    96,    97,    98,    99,   100,   101,   102,
      92,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      63,     7,    64,    65,    57,    58,    61,    62,    53,    54,
      55,    56,    59,    60,    66,    69,    70,    87,     0,    80,
       0,   113,     0,    16,     8,     0,     0,     0,     0,     0,
       0,   107,     0,    42,    49,    46,    47,    45,    44,    43,
      50,     0,     0,     0,    82,     0,     0,     0,    19,    30,
       0,    90,    19,     0,     0,     0,     0,     0,     0,    78,
       0,    19,     0,     0,     0,     0,     0,     0,   106,    52,
      51,    48,    17,     0,    37,    35,     0,   103,     0,   108,
      18,     9,    83,     0,     0,     0,     0,     0,     0,     0,
      38,     0,    19,    31,    19,   104,     0,    19,    19,    34,
       0,     0,     0,    32,    89,     0,    86,    35,    19,    33,
       0,    84,    83,    85
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -203,    46,  -203,  -203,  -203,    -6,  -203,   -23,   -53,  -203,
    -203,   -57,  -203,   192,  -203,  -203,   -24,  -203,   112,   206,
    -203,  -203,    91,   -59,  -203,    96,  -203,  -202,   -95,  -203,
    -203,  -203,  -203,    -9,  -203,  -203,  -203,   100,  -203
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,     7,   227,   146,    30,   203,    55,    56,
     243,   265,   287,    57,    58,   262,    59,    60,    61,    13,
      14,    75,   147,   270,   292,    62,    63,   164,    64,    65,
      66,    67,   168,   212,   234,     9,    15,    28,   149
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      77,   165,    10,   117,   118,   119,   231,   136,   137,   138,
     139,    11,   142,   143,   144,    68,   140,    74,    23,    12,
     141,    16,    69,    70,    71,    68,    72,    21,   113,   114,
     115,    24,    69,    70,    71,    22,    72,    26,     1,     2,
      68,    25,   256,   263,   264,   167,     3,    69,    70,    71,
      27,    72,    17,    18,    19,    20,   268,   269,    29,   152,
     153,   154,   155,   156,   157,   158,   159,    79,    80,   160,
     161,   162,    81,   166,    82,   150,    98,    94,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,    95,
      96,     4,    73,    97,   101,   116,   182,   183,   184,   185,
     186,   187,   145,   188,   189,   190,   191,   192,   193,   194,
     195,   196,     8,   165,    31,    32,    33,   102,     8,     8,
       8,     8,   103,   104,   105,     3,   106,   107,    34,    35,
     108,   109,    36,    37,    38,   110,    39,   111,   112,   148,
     151,   163,   181,   202,   211,   204,   199,   200,   207,   165,
     210,   208,   226,   224,   228,    76,    32,    33,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
     229,   233,   232,   235,    52,   242,   225,   241,   266,   245,
     240,   246,   247,   230,   248,    53,    54,   254,   253,   255,
     272,   257,   261,   273,   274,   275,   277,   236,   237,   238,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    76,    32,    33,    99,    52,   276,   284,   286,   279,
     288,   280,   258,   211,   282,   283,    53,    54,   291,   260,
     289,   100,    78,   293,   252,   290,   198,   197,   259,   271,
      83,    84,    85,    86,    87,    88,    89,    90,     0,   201,
      91,    92,   281,     0,     0,     0,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,    52,   120,   121,   122,   123,   124,   125,     0,     0,
       0,     0,    53,    54,     0,     0,     0,     0,     0,     0,
      93,     0,     0,   126,     0,     0,     0,     0,   127,   128,
     129,   130,   131,   132,   133,     0,     0,   134,   135,   120,
     121,   122,   123,   124,   125,     0,     0,     0,     0,     0,
     120,   121,   122,   123,   124,   125,     0,     0,     0,     0,
       0,     0,   180,     0,     0,   127,   128,   129,   130,   131,
     132,   133,     0,   205,   134,   135,   127,   128,   129,   130,
     131,   132,   133,     0,     0,   134,   135,   120,   121,   122,
     123,   124,   125,     0,     0,     0,     0,     0,   120,   121,
     122,   123,   124,   125,     0,     0,     0,     0,     0,     0,
     206,     0,     0,   127,   128,   129,   130,   131,   132,   133,
       0,   209,   134,   135,   127,   128,   129,   130,   131,   132,
     133,     0,     0,   134,   135,   120,   121,   122,   123,   124,
     125,     0,     0,     0,     0,     0,   120,   121,   122,   123,
     124,   125,     0,     0,     0,     0,     0,     0,   213,     0,
       0,   127,   128,   129,   130,   131,   132,   133,     0,   214,
     134,   135,   127,   128,   129,   130,   131,   132,   133,     0,
       0,   134,   135,   120,   121,   122,   123,   124,   125,     0,
       0,     0,     0,     0,   120,   121,   122,   123,   124,   125,
       0,     0,     0,     0,     0,     0,   215,     0,     0,   127,
     128,   129,   130,   131,   132,   133,     0,   216,   134,   135,
     127,   128,   129,   130,   131,   132,   133,     0,     0,   134,
     135,   120,   121,   122,   123,   124,   125,     0,     0,     0,
       0,     0,   120,   121,   122,   123,   124,   125,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   127,   128,   129,
     130,   131,   132,   133,     0,   218,   134,   135,   127,   128,
     129,   130,   131,   132,   133,     0,     0,   134,   135,   120,
     121,   122,   123,   124,   125,     0,     0,     0,     0,     0,
     120,   121,   122,   123,   124,   125,     0,     0,     0,     0,
       0,     0,   219,     0,     0,   127,   128,   129,   130,   131,
     132,   133,     0,   220,   134,   135,   127,   128,   129,   130,
     131,   132,   133,     0,     0,   134,   135,   120,   121,   122,
     123,   124,   125,     0,     0,     0,     0,     0,     0,   120,
     121,   122,   123,   124,   125,     0,     0,     0,     0,     0,
       0,     0,   221,   127,   128,   129,   130,   131,   132,   133,
       0,     0,   134,   135,   222,   127,   128,   129,   130,   131,
     132,   133,     0,     0,   134,   135,   120,   121,   122,   123,
     124,   125,     0,     0,     0,     0,     0,   120,   121,   122,
     123,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,   223,   127,   128,   129,   130,   131,   132,   133,     0,
    -109,   134,   135,   127,   128,   129,   130,   131,   132,   133,
       0,     0,   134,   135,   120,   121,   122,   123,   124,   125,
       0,     0,     0,     0,     0,     0,   120,   121,   122,   123,
     124,   125,     0,     0,     0,     0,     0,   239,     0,     0,
     127,   128,   129,   130,   131,   132,   133,   244,     0,   134,
     135,     0,   127,   128,   129,   130,   131,   132,   133,     0,
       0,   134,   135,   120,   121,   122,   123,   124,   125,     0,
       0,     0,     0,     0,   120,   121,   122,   123,   124,   125,
       0,     0,     0,     0,     0,     0,   249,     0,     0,   127,
     128,   129,   130,   131,   132,   133,     0,   250,   134,   135,
     127,   128,   129,   130,   131,   132,   133,     0,     0,   134,
     135,   120,   121,   122,   123,   124,   125,     0,     0,     0,
       0,     0,   120,   121,   122,   123,   124,   125,     0,     0,
       0,     0,     0,     0,   251,     0,     0,   127,   128,   129,
     130,   131,   132,   133,     0,   267,   134,   135,   127,   128,
     129,   130,   131,   132,   133,     0,     0,   134,   135,   120,
     121,   122,   123,   124,   125,     0,     0,     0,     0,     0,
     120,   121,   122,   123,   124,   125,     0,     0,     0,     0,
       0,     0,     0,   278,     0,   127,   128,   129,   130,   131,
     132,   133,     0,   285,   134,   135,   127,   128,   129,   130,
     131,   132,   133,     0,     0,   134,   135,   120,   121,   122,
     123,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   127,   128,   129,   130,   131,   132,   133,
       0,     0,   134,   135
};

static const yytype_int16 yycheck[] =
{
      24,    96,     3,    56,    57,    58,   208,    60,    61,    62,
      63,     3,    65,    66,    67,     3,    63,    23,    66,     3,
      67,     0,    10,    11,    12,     3,    14,    64,    52,    53,
      54,    79,    10,    11,    12,    61,    14,    67,     7,     8,
       3,    63,   244,    20,    21,    98,    15,    10,    11,    12,
       3,    14,     6,     7,     8,     9,    16,    17,     3,    83,
      84,    85,    86,    87,    88,    89,    90,    67,    63,    93,
      94,    95,    66,    97,    65,    81,    61,    64,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    64,
      64,    60,    80,    64,    64,    62,   120,   121,   122,   123,
     124,   125,    80,   127,   128,   129,   130,   131,   132,   133,
     134,   135,     0,   208,     4,     5,     6,    64,     6,     7,
       8,     9,    64,    64,    64,    15,    64,    64,    18,    19,
      64,    64,    22,    23,    24,    64,    26,    64,    64,    71,
      41,     4,    63,    67,   168,   151,    81,    64,    63,   244,
      62,    67,     3,    81,    61,     4,     5,     6,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      66,    23,    61,    65,    64,   228,   200,    61,    65,   232,
      66,    64,    67,   207,    63,    75,    76,    62,   241,    61,
      66,    62,    62,    62,    61,    63,    61,   221,   222,   223,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,     4,     5,     6,    63,    64,    64,    62,    62,   272,
      61,   274,   246,   247,   277,   278,    75,    76,    62,   252,
     287,    39,    26,   292,   240,   288,   145,   141,   247,   263,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,   149,
      39,    40,   276,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    64,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    63,    -1,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    73,    74,    -1,    -1,    77,    78,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    68,    69,    70,    71,    72,
      73,    74,    -1,    65,    77,    78,    68,    69,    70,    71,
      72,    73,    74,    -1,    -1,    77,    78,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    68,    69,    70,    71,    72,    73,    74,
      -1,    65,    77,    78,    68,    69,    70,    71,    72,    73,
      74,    -1,    -1,    77,    78,    42,    43,    44,    45,    46,
      47,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    -1,    65,
      77,    78,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    77,    78,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    68,
      69,    70,    71,    72,    73,    74,    -1,    65,    77,    78,
      68,    69,    70,    71,    72,    73,    74,    -1,    -1,    77,
      78,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    68,    69,    70,
      71,    72,    73,    74,    -1,    65,    77,    78,    68,    69,
      70,    71,    72,    73,    74,    -1,    -1,    77,    78,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    -1,    68,    69,    70,    71,    72,
      73,    74,    -1,    65,    77,    78,    68,    69,    70,    71,
      72,    73,    74,    -1,    -1,    77,    78,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    -1,    77,    78,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    -1,    77,    78,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      65,    77,    78,    68,    69,    70,    71,    72,    73,    74,
      -1,    -1,    77,    78,    42,    43,    44,    45,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      68,    69,    70,    71,    72,    73,    74,    63,    -1,    77,
      78,    -1,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    77,    78,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    68,
      69,    70,    71,    72,    73,    74,    -1,    65,    77,    78,
      68,    69,    70,    71,    72,    73,    74,    -1,    -1,    77,
      78,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    -1,    68,    69,    70,
      71,    72,    73,    74,    -1,    65,    77,    78,    68,    69,
      70,    71,    72,    73,    74,    -1,    -1,    77,    78,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    68,    69,    70,    71,    72,
      73,    74,    -1,    65,    77,    78,    68,    69,    70,    71,
      72,    73,    74,    -1,    -1,    77,    78,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    74,
      -1,    -1,    77,    78
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,     8,    15,    60,    83,    84,    85,   100,   117,
       3,     3,     3,   101,   102,   118,     0,    83,    83,    83,
      83,    64,    61,    66,    79,    63,    67,     3,   119,     3,
      88,     4,     5,     6,    18,    19,    22,    23,    24,    26,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    64,    75,    76,    90,    91,    95,    96,    98,
      99,   100,   107,   108,   110,   111,   112,   113,     3,    10,
      11,    12,    14,    80,    87,   103,     4,    98,   101,    67,
      63,    66,    65,    29,    30,    31,    32,    33,    34,    35,
      36,    39,    40,    79,    64,    64,    64,    64,    61,    63,
      95,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    98,    98,    98,    62,    90,    90,    90,
      42,    43,    44,    45,    46,    47,    63,    68,    69,    70,
      71,    72,    73,    74,    77,    78,    90,    90,    90,    90,
      63,    67,    90,    90,    90,    80,    87,   104,    71,   120,
      87,    41,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,     4,   109,   110,    98,    90,   114,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      65,    63,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,   107,   104,    81,
      64,   119,    67,    89,    87,    65,    65,    63,    67,    65,
      62,    98,   115,    65,    65,    65,    65,    65,    65,    65,
      65,    67,    67,    67,    81,    98,     3,    86,    61,    66,
      98,   109,    61,    23,   116,    65,    98,    98,    98,    65,
      66,    61,    90,    92,    63,    90,    64,    67,    63,    65,
      65,    65,    87,    90,    62,    61,   109,    62,    98,   115,
      89,    62,    97,    20,    21,    93,    65,    65,    16,    17,
     105,    98,    66,    62,    61,    63,    64,    61,    66,    90,
      90,    98,    90,    90,    62,    65,    62,    94,    61,    93,
      90,    62,   106,   105
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    82,    83,    83,    83,    83,    83,    84,    86,    85,
      87,    87,    87,    87,    87,    88,    88,    89,    89,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      92,    91,    94,    93,    93,    93,    95,    97,    96,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    99,    99,   100,   101,   101,   102,   102,   102,   102,
     103,   104,   104,   105,   106,   105,   105,   107,   107,   108,
     109,   109,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   111,   112,   114,   113,   116,   115,   115,
     118,   117,   120,   119,   119
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     6,     0,    11,
       1,     1,     1,     1,     1,     0,     4,     0,     5,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       0,     9,     0,     6,     3,     0,     2,     0,     9,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     6,     4,
       4,     6,     6,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       3,     2,     2,     3,     3,     1,     3,     3,     7,     3,
       3,     1,     3,     0,     0,     9,     4,     3,     2,    11,
       3,     1,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     7,     9,     0,     6,     0,     4,     1,
       0,     4,     0,     4,     1
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
      yychar = yylex ();
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* starthere: %empty  */
#line 57 "nahid.y"
              {
                fprintf(infotext,"\nCompiled Successfully\n\n");
                fprint_all(root,infotext);
            }
#line 1524 "nahid.tab.c"
    break;

  case 7: /* classgrammer: CLASS NAME '{' statement '}' ';'  */
#line 67 "nahid.y"
                                                   {
                    int res = addNewClass(&root,&last,(yyvsp[-4].text),"");
                    if(!res)
                    {
                        printf("Compilation Error ::  this name :: %s is already declared\n",(yyvsp[-4].text));
                        exit(-1);
                    }
                    else{
                        fprintf(infotext,"Class declared :: %s\n",(yyvsp[-4].text));
                    }
                }
#line 1540 "nahid.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 80 "nahid.y"
                                                       {
                char *val;
                int n = log10(typenow) + 1;
                val = calloc(n + 1, sizeof(char));
                snprintf(val, n, "%ld", typenow);
                int res = addNewFunc(&root,&last,(yyvsp[-5].text),val);
                if(!res)
                {
                    printf("Compilation Error ::  Varribale %s is already declared\n",(yyvsp[-5].text));
                    exit(-1);
                }
                else{
                    fprintf(infotext,"Function declared :: %s\n",(yyvsp[-5].text));
                }
            }
#line 1560 "nahid.tab.c"
    break;

  case 10: /* TYPE: INT  */
#line 96 "nahid.y"
                  { typenow = 1;}
#line 1566 "nahid.tab.c"
    break;

  case 11: /* TYPE: DOUBLE  */
#line 97 "nahid.y"
                     { typenow = 2;}
#line 1572 "nahid.tab.c"
    break;

  case 12: /* TYPE: STRING  */
#line 98 "nahid.y"
                     { typenow = 3;}
#line 1578 "nahid.tab.c"
    break;

  case 13: /* TYPE: VOID  */
#line 99 "nahid.y"
                   { typenow = 4;}
#line 1584 "nahid.tab.c"
    break;

  case 14: /* TYPE: NAME  */
#line 100 "nahid.y"
                   {  
                struct ll_identifier* res = getVal(&root,(yyvsp[0].text));
                if(res==NULL || res->data.type!=6){
                    printf("Error :: Class Name Not defined\n");
                    exit(-1);
                }
                typenow = res->data.intval;
            }
#line 1597 "nahid.tab.c"
    break;

  case 30: /* $@2: %empty  */
#line 128 "nahid.y"
                                               {
                    casedata = (yyvsp[-2].val);
                    fprintf(infotext,"Switch Case declared\n");
                    fprint_datatype(casedata,infotext);
                }
#line 1607 "nahid.tab.c"
    break;

  case 32: /* $@3: %empty  */
#line 135 "nahid.y"
                                                 {
                    if(caseflag == 0 && evaluate((yyvsp[-2].val),casedata,"==").intval == 1){
                        caseflag = 1;
                        fprintf(infotext,"Case executed :: ");
                        fprint_datatype((yyvsp[-2].val),infotext);
                    }
                }
#line 1619 "nahid.tab.c"
    break;

  case 34: /* casegrammer: def_ault ':' statement  */
#line 142 "nahid.y"
                                         {
                    if(caseflag == 0){
                        fprintf(infotext,"Defualt executed\n");
                    }
                }
#line 1629 "nahid.tab.c"
    break;

  case 36: /* mathexpr: expression ';'  */
#line 148 "nahid.y"
                             {
                    printf("Value of the expression :: ");
                    print_datatype((yyvsp[-1].val));
            }
#line 1638 "nahid.tab.c"
    break;

  case 37: /* $@4: %empty  */
#line 153 "nahid.y"
                                                      {
                ifptr++;
                if(boolvalue((yyvsp[-4].val))){
                    fprintf(infotext,"IF executed \n");
                    ifdone[ifptr] = 1;
                }
            }
#line 1650 "nahid.tab.c"
    break;

  case 38: /* ifgrammer: IF '(' expression ')' '{' statement '}' $@4 elsifgrmr  */
#line 159 "nahid.y"
                        {
                ifptr--;
            }
#line 1658 "nahid.tab.c"
    break;

  case 39: /* expression: NUM  */
#line 163 "nahid.y"
                  { (yyval.val) = (yyvsp[0].val);
                     //print_datatype($1);
            }
#line 1666 "nahid.tab.c"
    break;

  case 40: /* expression: STR  */
#line 166 "nahid.y"
                  {
                (yyval.val) = (yyvsp[0].val); 
                //print_datatype($1);
            }
#line 1675 "nahid.tab.c"
    break;

  case 41: /* expression: VARACCESS  */
#line 170 "nahid.y"
                        {
                struct ll_identifier* res = isDeclared(&root,(yyvsp[0].text));
                if(res==NULL)
                {
                    printf("Compilation Error ::  Varribale %s is not declared\n",(yyvsp[0].text));
                    exit(-1);
                }
                else if(res->data.type == 1 || res->data.type == 6)
                {
                    printf("Error :: You can't set a value to class/function");
                    exit(-1);
                }
                else 
                {
                    if(res->data.type==2)
                        (yyval.val) = make_datatype_int(res->data.intval);
                    else if(res->data.type==3)
                        (yyval.val) = make_datatype_double(res->data.doubleval);
                    else if(res->data.type==4){
                        (yyval.val) = make_datatype_char(res->data.strval);
                    }
                }
            }
#line 1703 "nahid.tab.c"
    break;

  case 42: /* expression: SIN '(' expression ')'  */
#line 193 "nahid.y"
                                      {
                    if((yyvsp[-1].val).type==4){
                        printf("Compilation Error :: Cannot convert a String to Double\n");
                        exit(-1);
                    }
                    double val = (yyvsp[-1].val).type==2?(yyvsp[-1].val).intval:(yyvsp[-1].val).doubleval;
                    fprintf(infotext,"Value of the expression :: %f\n",sin(val));
            }
#line 1716 "nahid.tab.c"
    break;

  case 43: /* expression: ASIN '(' expression ')'  */
#line 201 "nahid.y"
                                       {
                    if((yyvsp[-1].val).type==4){
                        printf("Compilation Error :: Cannot convert a String to Double\n");
                        exit(-1);
                    }
                    double val = (yyvsp[-1].val).type==2?(yyvsp[-1].val).intval:(yyvsp[-1].val).doubleval;
                    fprintf(infotext,"Value of the expression :: %f\n",asin(val));
            }
#line 1729 "nahid.tab.c"
    break;

  case 44: /* expression: ACOS '(' expression ')'  */
#line 209 "nahid.y"
                                      {
                    if((yyvsp[-1].val).type==4){
                        printf("Compilation Error :: Cannot convert a String to Double\n");
                        exit(-1);
                    }
                    double val = (yyvsp[-1].val).type==2?(yyvsp[-1].val).intval:(yyvsp[-1].val).doubleval;
                    fprintf(infotext,"Value of the expression :: %f\n",acos(val));
            }
#line 1742 "nahid.tab.c"
    break;

  case 45: /* expression: COS '(' expression ')'  */
#line 217 "nahid.y"
                                      {
                    if((yyvsp[-1].val).type==4){
                        printf("Compilation Error :: Cannot convert a String to Double\n");
                        exit(-1);
                    }
                    double val = (yyvsp[-1].val).type==2?(yyvsp[-1].val).intval:(yyvsp[-1].val).doubleval;
                    fprintf(infotext,"Value of the expression :: %f\n",cos(val));
            }
#line 1755 "nahid.tab.c"
    break;

  case 46: /* expression: LOG '(' expression ')'  */
#line 225 "nahid.y"
                                     {
                    if((yyvsp[-1].val).type==4){
                        printf("Compilation Error :: Cannot convert a String to Double\n");
                        exit(-1);
                    }
                    double val = (yyvsp[-1].val).type==2?(yyvsp[-1].val).intval:(yyvsp[-1].val).doubleval;
                    fprintf(infotext,"Value of the expression :: %f\n",log(val));
            }
#line 1768 "nahid.tab.c"
    break;

  case 47: /* expression: LOG10 '(' expression ')'  */
#line 233 "nahid.y"
                                       {
                    if((yyvsp[-1].val).type==4){
                        printf("Compilation Error :: Cannot convert a String to Double\n");
                        exit(-1);
                    }
                    double val = (yyvsp[-1].val).type==2?(yyvsp[-1].val).intval:(yyvsp[-1].val).doubleval;
                    fprintf(infotext,"Value of the expression :: %f\n",log10(val));
            }
#line 1781 "nahid.tab.c"
    break;

  case 48: /* expression: POW '(' expression ',' expression ')'  */
#line 241 "nahid.y"
                                                     {
                    if((yyvsp[-3].val).type==4){
                        printf("Compilation Error :: Cannot convert a String to Double\n");
                        exit(-1);
                    }
                    if((yyvsp[-1].val).type==4){
                        printf("Compilation Error :: Cannot convert a String to Double\n");
                        exit(-1);
                    }
                    double val = (yyvsp[-3].val).type==2?(yyvsp[-3].val).intval:(yyvsp[-3].val).doubleval;
                    double p = (yyvsp[-1].val).type==2?(yyvsp[-1].val).intval:(yyvsp[-1].val).doubleval;
                    fprintf(infotext,"Value of the expression :: %f\n",pow(val,p));
            }
#line 1799 "nahid.tab.c"
    break;

  case 49: /* expression: TAN '(' expression ')'  */
#line 254 "nahid.y"
                                      {
                    if((yyvsp[-1].val).type==4){
                        printf("Compilation Error :: Cannot convert a String to Double\n");
                        exit(-1);
                    }
                    double val = (yyvsp[-1].val).type==2?(yyvsp[-1].val).intval:(yyvsp[-1].val).doubleval;
                    fprintf(infotext,"Value of the expression :: %f\n",tan(val));
            }
#line 1812 "nahid.tab.c"
    break;

  case 50: /* expression: ATAN '(' expression ')'  */
#line 262 "nahid.y"
                                      {
                    if((yyvsp[-1].val).type==4){
                        printf("Compilation Error :: Cannot convert a String to Double\n");
                        exit(-1);
                    }
                    double val = (yyvsp[-1].val).type==2?(yyvsp[-1].val).intval:(yyvsp[-1].val).doubleval;
                    fprintf(infotext,"Value of the expression :: %f\n",atan(val));
            }
#line 1825 "nahid.tab.c"
    break;

  case 51: /* expression: LCM '(' expression ',' expression ')'  */
#line 270 "nahid.y"
                                                    {
                    if((yyvsp[-3].val).type!=2){
                        printf("Compilation Error :: Cannot override for other than Int\n");
                        exit(-1);
                    }
                    if((yyvsp[-1].val).type!=2){
                        printf("Compilation Error :: Cannot override for other than Int\n");
                        exit(-1);
                    }
                    int val1 = (yyvsp[-3].val).intval; 
                    int val2 = (yyvsp[-1].val).intval; 
                    fprintf(infotext,"Value of the expression :: %d\n",val1*val2/gcd(val1,val2));
            }
#line 1843 "nahid.tab.c"
    break;

  case 52: /* expression: GCD '(' expression ',' expression ')'  */
#line 283 "nahid.y"
                                                    {
                    if((yyvsp[-3].val).type!=2){
                        printf("Compilation Error :: Cannot override for other than Int\n");
                        exit(-1);
                    }
                    if((yyvsp[-1].val).type!=2){
                        printf("Compilation Error :: Cannot override for other than Int\n");
                        exit(-1);
                    }
                    int val1 = (yyvsp[-3].val).intval; 
                    int val2 = (yyvsp[-1].val).intval; 
                    fprintf(infotext,"Value of the expression :: %d\n",gcd(val1,val2));
            }
#line 1861 "nahid.tab.c"
    break;

  case 53: /* expression: expression '+' expression  */
#line 296 "nahid.y"
                                        { 
                (yyval.val) = evaluate((yyvsp[-2].val),(yyvsp[0].val),"+");
            }
#line 1869 "nahid.tab.c"
    break;

  case 54: /* expression: expression '-' expression  */
#line 299 "nahid.y"
                                        { 
                (yyval.val) = evaluate((yyvsp[-2].val),(yyvsp[0].val),"-");
            }
#line 1877 "nahid.tab.c"
    break;

  case 55: /* expression: expression '/' expression  */
#line 302 "nahid.y"
                                        { 
                (yyval.val) = evaluate((yyvsp[-2].val),(yyvsp[0].val),"/");
            }
#line 1885 "nahid.tab.c"
    break;

  case 56: /* expression: expression '*' expression  */
#line 305 "nahid.y"
                                        { 
                (yyval.val) = evaluate((yyvsp[-2].val),(yyvsp[0].val),"*");
            }
#line 1893 "nahid.tab.c"
    break;

  case 57: /* expression: expression LE_OP expression  */
#line 308 "nahid.y"
                                          { 
                (yyval.val) = evaluate((yyvsp[-2].val),(yyvsp[0].val),"<=");
            }
#line 1901 "nahid.tab.c"
    break;

  case 58: /* expression: expression GE_OP expression  */
#line 311 "nahid.y"
                                          { 
                (yyval.val) = evaluate((yyvsp[-2].val),(yyvsp[0].val),">=");
            }
#line 1909 "nahid.tab.c"
    break;

  case 59: /* expression: expression '<' expression  */
#line 314 "nahid.y"
                                        { 
                (yyval.val) = evaluate((yyvsp[-2].val),(yyvsp[0].val),"<");
            }
#line 1917 "nahid.tab.c"
    break;

  case 60: /* expression: expression '>' expression  */
#line 317 "nahid.y"
                                        { 
                (yyval.val) = evaluate((yyvsp[-2].val),(yyvsp[0].val),">");
            }
#line 1925 "nahid.tab.c"
    break;

  case 61: /* expression: expression EQ_OP expression  */
#line 320 "nahid.y"
                                          { 
                (yyval.val) = evaluate((yyvsp[-2].val),(yyvsp[0].val),"==");
            }
#line 1933 "nahid.tab.c"
    break;

  case 62: /* expression: expression NE_OP expression  */
#line 323 "nahid.y"
                                          { 
                (yyval.val) = evaluate((yyvsp[-2].val),(yyvsp[0].val),"!=");
            }
#line 1941 "nahid.tab.c"
    break;

  case 63: /* expression: '(' expression ')'  */
#line 326 "nahid.y"
                                 { 
                (yyval.val) = (yyvsp[-1].val);
            }
#line 1949 "nahid.tab.c"
    break;

  case 64: /* expression: expression AND_OP expression  */
#line 329 "nahid.y"
                                           {
                (yyval.val) = make_datatype_int(boolvalue((yyvsp[-2].val)) && boolvalue((yyvsp[0].val)));
            }
#line 1957 "nahid.tab.c"
    break;

  case 65: /* expression: expression OR_OP expression  */
#line 332 "nahid.y"
                                          {
                (yyval.val) = make_datatype_int(boolvalue((yyvsp[-2].val)) || boolvalue((yyvsp[0].val)));
            }
#line 1965 "nahid.tab.c"
    break;

  case 66: /* expression: expression "&" expression  */
#line 335 "nahid.y"
                                        {
                (yyval.val) = make_datatype_int(_intvalue((yyvsp[-2].val)) & _intvalue((yyvsp[0].val)));
            }
#line 1973 "nahid.tab.c"
    break;

  case 67: /* expression: '!' expression  */
#line 338 "nahid.y"
                             {
                (yyval.val) = make_datatype_int(!_intvalue((yyvsp[0].val)));
            }
#line 1981 "nahid.tab.c"
    break;

  case 68: /* expression: '~' expression  */
#line 341 "nahid.y"
                             {
                (yyval.val) = make_datatype_int(~_intvalue((yyvsp[0].val)));
            }
#line 1989 "nahid.tab.c"
    break;

  case 69: /* expression: expression '^' expression  */
#line 344 "nahid.y"
                                        {
                (yyval.val) = make_datatype_int(_intvalue((yyvsp[-2].val)) ^ _intvalue((yyvsp[0].val)));
            }
#line 1997 "nahid.tab.c"
    break;

  case 70: /* expression: expression '|' expression  */
#line 347 "nahid.y"
                                        {
                (yyval.val) = make_datatype_int(_intvalue((yyvsp[-2].val)) | _intvalue((yyvsp[0].val)));
            }
#line 2005 "nahid.tab.c"
    break;

  case 71: /* returnstmt: RETURN mathexpr  */
#line 353 "nahid.y"
                              {
    fprintf(infotext,"return occured\n");
}
#line 2013 "nahid.tab.c"
    break;

  case 72: /* returnstmt: RETURN ';'  */
#line 356 "nahid.y"
                         {
                fprintf(infotext,"return occured\n");
            }
#line 2021 "nahid.tab.c"
    break;

  case 76: /* varriable: NAME ':' TYPE  */
#line 365 "nahid.y"
                            {
                int res = addNewVal(&root,&last,(yyvsp[-2].text),"");
                if(!res)
                {
                    printf("Compilation Error ::  Varribale %s is already declared\n",(yyvsp[-2].text));
                    exit(-1);
                }
                fprintf(infotext,"varriable declared : %s\n",(yyvsp[-2].text));
            }
#line 2035 "nahid.tab.c"
    break;

  case 77: /* varriable: NAME '=' expression  */
#line 374 "nahid.y"
                                  {
                char *val;
                if ((yyvsp[0].val).type == 2) {
                    (yyvsp[0].val).type = 4;
                    int n = log10((yyvsp[0].val).intval) + 1;
                    val = calloc(n + 1, sizeof(char));
                    snprintf(val, n + 1, "%ld", (yyvsp[0].val).intval);
                }
                else if ((yyvsp[0].val).type == 3) {
                    (yyvsp[0].val).type = 4;
                    val = calloc(51, sizeof(char));
                    snprintf(val, 50, "%lf", (yyvsp[0].val).doubleval);
                }
                else{
                    val = (yyvsp[0].val).strval;
                }
                int res = addNewVal(&root,&last,(yyvsp[-2].text),val);
                if(!res)
                {
                    printf("Compilation Error ::  Varribale %s is already declared\n",(yyvsp[-2].text));
                    exit(-1);
                }
                else{
                    fprintf(infotext,"varriable declared : %s\n",(yyvsp[-2].text));
                }
            }
#line 2066 "nahid.tab.c"
    break;

  case 78: /* varriable: NAME ':' arraydim '*' '(' expression ')'  */
#line 400 "nahid.y"
                                                       {
                char *val;
                //printf("dimencount :: %d\n",dimencount);
                int n = log10(dimencount) + 2;
                val = calloc(n + 1, sizeof(char));
                char *temp = calloc(n,sizeof(char));
                snprintf(temp, n, "%ld", dimencount);
                val[0]='`';
                strcat(val,temp);
                int res = addNewVal(&root,&last,(yyvsp[-6].text),val);
                if(!res)
                {
                    printf("Compilation Error ::  Varribale %s is already declared\n",(yyvsp[-6].text));
                    exit(-1);
                }
                else{
                    fprintf(infotext,"Array declared : %s Dimension : %d\n",(yyvsp[-6].text),dimencount);
                }
            }
#line 2090 "nahid.tab.c"
    break;

  case 79: /* varriable: NAME ':' arraydim  */
#line 419 "nahid.y"
                                {
                char *val;
                //printf("dimencount :: %d\n",dimencount);
                int n = log10(dimencount) + 2;
                val = calloc(n + 1, sizeof(char));
                char *temp = calloc(n,sizeof(char));
                snprintf(temp, n, "%ld", dimencount);
                val[0]='`';
                strcat(val,temp);
                int res = addNewVal(&root,&last,(yyvsp[-2].text),val);
                if(!res)
                {
                    printf("Compilation Error ::  Varribale %s is already declared\n",(yyvsp[-2].text));
                    exit(-1);
                }
                else{
                    fprintf(infotext,"Array declared : %s Dimension : %d\n",(yyvsp[-2].text),dimencount);
                }
            }
#line 2114 "nahid.tab.c"
    break;

  case 80: /* arraydim: '[' arrayx ']'  */
#line 439 "nahid.y"
                             {dimencount++;}
#line 2120 "nahid.tab.c"
    break;

  case 81: /* arrayx: TYPE  */
#line 441 "nahid.y"
                   {dimencount = 0;}
#line 2126 "nahid.tab.c"
    break;

  case 82: /* arrayx: '[' arrayx ']'  */
#line 442 "nahid.y"
                             {dimencount++;}
#line 2132 "nahid.tab.c"
    break;

  case 84: /* $@5: %empty  */
#line 445 "nahid.y"
                                                          {
                if(ifdone[ifptr]==0 && boolvalue((yyvsp[-4].val))){
                    ifdone[ifptr]=1;
                    fprintf(infotext,"ELSE IF executed\n");
                }
            }
#line 2143 "nahid.tab.c"
    break;

  case 86: /* elsifgrmr: ELSE '{' statement '}'  */
#line 451 "nahid.y"
                                     {
                if(ifdone[ifptr]==0){
                    fprintf(infotext,"ELSE executed\n");
                }
            }
#line 2153 "nahid.tab.c"
    break;

  case 89: /* forgrammer: FOR '(' forassign ';' expression ';' forassign ')' '{' statement '}'  */
#line 461 "nahid.y"
                                                                                   {
                fprintf(infotext,"for loop executed with expression : ");
                fprint_datatype((yyvsp[-6].val),infotext);
            }
#line 2162 "nahid.tab.c"
    break;

  case 92: /* ASGNVAR: VARACCESS '=' expression  */
#line 469 "nahid.y"
                                       {
                struct ll_identifier* res = isDeclared(&root,(yyvsp[-2].text));
                if(res==NULL)
                {
                    printf("Compilation Error ::  Varribale %s is not declared\n",(yyvsp[-2].text));
                    exit(-1);
                }
                else if(res->data.type == 1 || res->data.type == 6)
                {
                    printf("Error :: You can't set a value to class/function");
                    exit(-1);
                }
                else 
                {
                    if((yyvsp[0].val).type == 2){
                        int n = log10((yyvsp[0].val).intval) + 1;
                        char *numberArray = calloc(n, sizeof(char));
                        sprintf(numberArray,"%ld",(yyvsp[0].val).intval);
                        setVal(&root,&last,(yyvsp[-2].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %d\n",(yyvsp[-2].text),(yyvsp[0].val).intval);
                    }
                    else if((yyvsp[0].val).type == 3){
                        char *numberArray = calloc(51,sizeof(char));
                        snprintf(numberArray,50,"%lf",(yyvsp[0].val).doubleval);
                        setVal(&root,&last,(yyvsp[-2].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %f\n",(yyvsp[-2].text),(yyvsp[0].val).doubleval);
                    }
                    else{
                        setVal(&root,&last,(yyvsp[-2].text),(yyvsp[0].val).strval);
                        fprintf(infotext,"Value assigned :: %s = %s\n",(yyvsp[-2].text),(yyvsp[0].val).strval);
                    }
                }
            }
#line 2200 "nahid.tab.c"
    break;

  case 93: /* ASGNVAR: VARACCESS INC_OP  */
#line 502 "nahid.y"
                               {
                struct ll_identifier* res = isDeclared(&root,(yyvsp[-1].text));
                if(res==NULL)
                {
                    printf("Compilation Error ::  Varribale %s is not declared\n",(yyvsp[-1].text));
                    exit(-1);
                }
                else if(res->data.type == 1 || res->data.type == 6)
                {
                    printf("Error :: You can't set a value to class/function");
                    exit(-1);
                }
                struct datatype tmp,tmp1,tmp2;
                if(res->data.valtype == 2) tmp = make_datatype_int(res->data.intval);
                else if(res->data.valtype == 3) tmp = make_datatype_double(res->data.doubleval);
                else if(res->data.valtype == 4) tmp = make_datatype_char(res->data.strval);
                else tmp = make_datatype_int(0);
                tmp1 = make_datatype_int(1);
                tmp2 = evaluate(tmp,tmp1,"+");
                if(tmp2.type == 2){
                        int n = log10(tmp2.intval) + 1;
                        char *numberArray = calloc(n, sizeof(char));
                        sprintf(numberArray,"%ld",tmp2.intval);
                        setVal(&root,&last,(yyvsp[-1].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %d\n",(yyvsp[-1].text),tmp2.intval);
                }
                else if(tmp2.type == 3){
                        char *numberArray = calloc(51,sizeof(char));
                        snprintf(numberArray,50,"%lf",tmp2.doubleval);
                        setVal(&root,&last,(yyvsp[-1].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %f\n",(yyvsp[-1].text),tmp2.doubleval);
                }
                else{
                        setVal(&root,&last,(yyvsp[-1].text),tmp2.strval);
                        fprintf(infotext,"Value assigned :: %s = %s\n",(yyvsp[-1].text),tmp2.strval);
                }
            }
#line 2242 "nahid.tab.c"
    break;

  case 94: /* ASGNVAR: VARACCESS DEC_OP  */
#line 539 "nahid.y"
                               {
                struct ll_identifier* res = isDeclared(&root,(yyvsp[-1].text));
                if(res==NULL)
                {
                    printf("Compilation Error ::  Varribale %s is not declared\n",(yyvsp[-1].text));
                    exit(-1);
                }
                else if(res->data.type == 1 || res->data.type == 6)
                {
                    printf("Error :: You can't set a value to class/function");
                    exit(-1);
                }
                struct datatype tmp,tmp1,tmp2;
                if(res->data.valtype == 2) tmp = make_datatype_int(res->data.intval);
                else if(res->data.valtype == 3) tmp = make_datatype_double(res->data.doubleval);
                else if(res->data.valtype == 4) tmp = make_datatype_char(res->data.strval);
                else tmp = make_datatype_int(0);
                tmp1 = make_datatype_int(1);
                tmp2 = evaluate(tmp,tmp1,"-");
                if(tmp2.type == 2){
                        int n = log10(tmp2.intval) + 1;
                        char *numberArray = calloc(n, sizeof(char));
                        sprintf(numberArray,"%ld",tmp2.intval);
                        setVal(&root,&last,(yyvsp[-1].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %d\n",(yyvsp[-1].text),tmp2.intval);
                }
                else if(tmp2.type == 3){
                        char *numberArray = calloc(51,sizeof(char));
                        snprintf(numberArray,50,"%lf",tmp2.doubleval);
                        setVal(&root,&last,(yyvsp[-1].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %f\n",(yyvsp[-1].text),tmp2.doubleval);
                }
                else{
                        setVal(&root,&last,(yyvsp[-1].text),tmp2.strval);
                        fprintf(infotext,"Value assigned :: %s = %s\n",(yyvsp[-1].text),tmp2.strval);
                }
            }
#line 2284 "nahid.tab.c"
    break;

  case 95: /* ASGNVAR: VARACCESS ADD_ASSIGN expression  */
#line 576 "nahid.y"
                                              {
                struct ll_identifier* res = isDeclared(&root,(yyvsp[-2].text));
                if(res==NULL)
                {
                    printf("Compilation Error ::  Varribale %s is not declared\n",(yyvsp[-2].text));
                    exit(-1);
                }
                else if(res->data.type == 1 || res->data.type == 6)
                {
                    printf("Error :: You can't set a value to class/function");
                    exit(-1);
                }
                struct datatype tmp,tmp2;
                if(res->data.valtype == 2) tmp = make_datatype_int(res->data.intval);
                else if(res->data.valtype == 3) tmp = make_datatype_double(res->data.doubleval);
                else if(res->data.valtype == 4) tmp = make_datatype_char(res->data.strval);
                else tmp = make_datatype_int(0);
                tmp2 = evaluate(tmp,(yyvsp[0].val),"+");
                if(tmp2.type == 2){
                        int n = log10(tmp2.intval) + 1;
                        char *numberArray = calloc(n, sizeof(char));
                        sprintf(numberArray,"%ld",tmp2.intval);
                        setVal(&root,&last,(yyvsp[-2].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %d\n",(yyvsp[-2].text),tmp2.intval);
                }
                else if(tmp2.type == 3){
                        char *numberArray = calloc(51,sizeof(char));
                        snprintf(numberArray,50,"%lf",tmp2.doubleval);
                        setVal(&root,&last,(yyvsp[-2].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %f\n",(yyvsp[-2].text),tmp2.doubleval);
                }
                else{
                        setVal(&root,&last,(yyvsp[-2].text),tmp2.strval);
                        fprintf(infotext,"Value assigned :: %s = %s\n",(yyvsp[-2].text),tmp2.strval);
                }
            }
#line 2325 "nahid.tab.c"
    break;

  case 96: /* ASGNVAR: VARACCESS SUB_ASSIGN expression  */
#line 612 "nahid.y"
                                              {
                struct ll_identifier* res = isDeclared(&root,(yyvsp[-2].text));
                if(res==NULL)
                {
                    printf("Compilation Error ::  Varribale %s is not declared\n",(yyvsp[-2].text));
                    exit(-1);
                }
                else if(res->data.type == 1 || res->data.type == 6)
                {
                    printf("Error :: You can't set a value to class/function");
                    exit(-1);
                }
                struct datatype tmp,tmp2;
                if(res->data.valtype == 2) tmp = make_datatype_int(res->data.intval);
                else if(res->data.valtype == 3) tmp = make_datatype_double(res->data.doubleval);
                else if(res->data.valtype == 4) tmp = make_datatype_char(res->data.strval);
                else tmp = make_datatype_int(0);
                tmp2 = evaluate(tmp,(yyvsp[0].val),"-");
                if(tmp2.type == 2){
                        int n = log10(tmp2.intval) + 1;
                        char *numberArray = calloc(n, sizeof(char));
                        sprintf(numberArray,"%ld",tmp2.intval);
                        setVal(&root,&last,(yyvsp[-2].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %d\n",(yyvsp[-2].text),tmp2.intval);
                }
                else if(tmp2.type == 3){
                        char *numberArray = calloc(51,sizeof(char));
                        snprintf(numberArray,50,"%lf",tmp2.doubleval);
                        setVal(&root,&last,(yyvsp[-2].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %f\n",(yyvsp[-2].text),tmp2.doubleval);
                }
                else{
                        setVal(&root,&last,(yyvsp[-2].text),tmp2.strval);
                        fprintf(infotext,"Value assigned :: %s = %s\n",(yyvsp[-2].text),tmp2.strval);
                }
            }
#line 2366 "nahid.tab.c"
    break;

  case 97: /* ASGNVAR: VARACCESS MUL_ASSIGN expression  */
#line 648 "nahid.y"
                                              {
                struct ll_identifier* res = isDeclared(&root,(yyvsp[-2].text));
                if(res==NULL)
                {
                    printf("Compilation Error ::  Varribale %s is not declared\n",(yyvsp[-2].text));
                    exit(-1);
                }
                else if(res->data.type == 1 || res->data.type == 6)
                {
                    printf("Error :: You can't set a value to class/function");
                    exit(-1);
                }
                struct datatype tmp,tmp2;
                if(res->data.valtype == 2) tmp = make_datatype_int(res->data.intval);
                else if(res->data.valtype == 3) tmp = make_datatype_double(res->data.doubleval);
                else if(res->data.valtype == 4) tmp = make_datatype_char(res->data.strval);
                else tmp = make_datatype_int(0);
                tmp2 = evaluate(tmp,(yyvsp[0].val),"*");
                if(tmp2.type == 2){
                        int n = log10(tmp2.intval) + 1;
                        char *numberArray = calloc(n, sizeof(char));
                        sprintf(numberArray,"%ld",tmp2.intval);
                        setVal(&root,&last,(yyvsp[-2].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %d\n",(yyvsp[-2].text),tmp2.intval);
                }
                else if(tmp2.type == 3){
                        char *numberArray = calloc(51,sizeof(char));
                        snprintf(numberArray,50,"%lf",tmp2.doubleval);
                        setVal(&root,&last,(yyvsp[-2].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %f\n",(yyvsp[-2].text),tmp2.doubleval);
                }
                else{
                        setVal(&root,&last,(yyvsp[-2].text),tmp2.strval);
                        fprintf(infotext,"Value assigned :: %s = %s\n",(yyvsp[-2].text),tmp2.strval);
                }
            }
#line 2407 "nahid.tab.c"
    break;

  case 98: /* ASGNVAR: VARACCESS DIV_ASSIGN expression  */
#line 684 "nahid.y"
                                              {
                struct ll_identifier* res = isDeclared(&root,(yyvsp[-2].text));
                if(res==NULL)
                {
                    printf("Compilation Error ::  Varribale %s is not declared\n",(yyvsp[-2].text));
                    exit(-1);
                }
                else if(res->data.type == 1 || res->data.type == 6)
                {
                    printf("Error :: You can't set a value to class/function");
                    exit(-1);
                }
                struct datatype tmp,tmp2;
                if(res->data.valtype == 2) tmp = make_datatype_int(res->data.intval);
                else if(res->data.valtype == 3) tmp = make_datatype_double(res->data.doubleval);
                else if(res->data.valtype == 4) tmp = make_datatype_char(res->data.strval);
                else tmp = make_datatype_int(0);
                tmp2 = evaluate(tmp,(yyvsp[0].val),"/");
                if(tmp2.type == 2){
                        int n = log10(tmp2.intval) + 1;
                        char *numberArray = calloc(n, sizeof(char));
                        sprintf(numberArray,"%ld",tmp2.intval);
                        setVal(&root,&last,(yyvsp[-2].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %d\n",(yyvsp[-2].text),tmp2.intval);
                }
                else if(tmp2.type == 3){
                        char *numberArray = calloc(51,sizeof(char));
                        snprintf(numberArray,50,"%lf",tmp2.doubleval);
                        setVal(&root,&last,(yyvsp[-2].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %f\n",(yyvsp[-2].text),tmp2.doubleval);
                }
                else{
                        setVal(&root,&last,(yyvsp[-2].text),tmp2.strval);
                        fprintf(infotext,"Value assigned :: %s = %s\n",(yyvsp[-2].text),tmp2.strval);
                }
            }
#line 2448 "nahid.tab.c"
    break;

  case 99: /* ASGNVAR: VARACCESS MOD_ASSIGN expression  */
#line 720 "nahid.y"
                                              {
                struct ll_identifier* res = isDeclared(&root,(yyvsp[-2].text));
                if(res==NULL)
                {
                    printf("Compilation Error ::  Varribale %s is not declared\n",(yyvsp[-2].text));
                    exit(-1);
                }
                else if(res->data.type == 1 || res->data.type == 6)
                {
                    printf("Error :: You can't set a value to class/function");
                    exit(-1);
                }
                struct datatype tmp,tmp2;
                if(res->data.valtype == 2) tmp = make_datatype_int(res->data.intval);
                else if(res->data.valtype == 3) tmp = make_datatype_double(res->data.doubleval);
                else if(res->data.valtype == 4) tmp = make_datatype_char(res->data.strval);
                else tmp = make_datatype_int(0);
                tmp2 = evaluate(tmp,(yyvsp[0].val),"%");
                if(tmp2.type == 2){
                        int n = log10(tmp2.intval) + 1;
                        char *numberArray = calloc(n, sizeof(char));
                        sprintf(numberArray,"%ld",tmp2.intval);
                        setVal(&root,&last,(yyvsp[-2].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %d\n",(yyvsp[-2].text),tmp2.intval);
                }
                else if(tmp2.type == 3){
                        char *numberArray = calloc(51,sizeof(char));
                        snprintf(numberArray,50,"%lf",tmp2.doubleval);
                        setVal(&root,&last,(yyvsp[-2].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %f\n",(yyvsp[-2].text),tmp2.doubleval);
                }
                else{
                        setVal(&root,&last,(yyvsp[-2].text),tmp2.strval);
                        fprintf(infotext,"Value assigned :: %s = %s\n",(yyvsp[-2].text),tmp2.strval);
                }
            }
#line 2489 "nahid.tab.c"
    break;

  case 100: /* ASGNVAR: VARACCESS AND_ASSIGN expression  */
#line 756 "nahid.y"
                                              {
                struct ll_identifier* res = isDeclared(&root,(yyvsp[-2].text));
                if(res==NULL)
                {
                    printf("Compilation Error ::  Varribale %s is not declared\n",(yyvsp[-2].text));
                    exit(-1);
                }
                else if(res->data.type == 1 || res->data.type == 6)
                {
                    printf("Error :: You can't set a value to class/function");
                    exit(-1);
                }
                struct datatype tmp,tmp2;
                if(res->data.valtype == 2) tmp = make_datatype_int(res->data.intval);
                else if(res->data.valtype == 3) tmp = make_datatype_double(res->data.doubleval);
                else if(res->data.valtype == 4) tmp = make_datatype_char(res->data.strval);
                else tmp = make_datatype_int(0);
                tmp2 = evaluate(tmp,(yyvsp[0].val),"&");
                if(tmp2.type == 2){
                        int n = log10(tmp2.intval) + 1;
                        char *numberArray = calloc(n, sizeof(char));
                        sprintf(numberArray,"%ld",tmp2.intval);
                        setVal(&root,&last,(yyvsp[-2].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %d\n",(yyvsp[-2].text),tmp2.intval);
                }
                else if(tmp2.type == 3){
                        char *numberArray = calloc(51,sizeof(char));
                        snprintf(numberArray,50,"%lf",tmp2.doubleval);
                        setVal(&root,&last,(yyvsp[-2].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %f\n",(yyvsp[-2].text),tmp2.doubleval);
                }
                else{
                        setVal(&root,&last,(yyvsp[-2].text),tmp2.strval);
                        fprintf(infotext,"Value assigned :: %s = %s\n",(yyvsp[-2].text),tmp2.strval);
                }
            }
#line 2530 "nahid.tab.c"
    break;

  case 101: /* ASGNVAR: VARACCESS XOR_ASSIGN expression  */
#line 792 "nahid.y"
                                              {
                struct ll_identifier* res = isDeclared(&root,(yyvsp[-2].text));
                if(res==NULL)
                {
                    printf("Compilation Error ::  Varribale %s is not declared\n",(yyvsp[-2].text));
                    exit(-1);
                }
                else if(res->data.type == 1 || res->data.type == 6)
                {
                    printf("Error :: You can't set a value to class/function");
                    exit(-1);
                }
                struct datatype tmp,tmp2;
                if(res->data.valtype == 2) tmp = make_datatype_int(res->data.intval);
                else if(res->data.valtype == 3) tmp = make_datatype_double(res->data.doubleval);
                else if(res->data.valtype == 4) tmp = make_datatype_char(res->data.strval);
                else tmp = make_datatype_int(0);
                tmp2 = evaluate(tmp,(yyvsp[0].val),"^");
                if(tmp2.type == 2){
                        int n = log10(tmp2.intval) + 1;
                        char *numberArray = calloc(n, sizeof(char));
                        sprintf(numberArray,"%ld",tmp2.intval);
                        setVal(&root,&last,(yyvsp[-2].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %d\n",(yyvsp[-2].text),tmp2.intval);
                }
                else if(tmp2.type == 3){
                        char *numberArray = calloc(51,sizeof(char));
                        snprintf(numberArray,50,"%lf",tmp2.doubleval);
                        setVal(&root,&last,(yyvsp[-2].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %f\n",(yyvsp[-2].text),tmp2.doubleval);
                }
                else{
                        setVal(&root,&last,(yyvsp[-2].text),tmp2.strval);
                        fprintf(infotext,"Value assigned :: %s = %s\n",(yyvsp[-2].text),tmp2.strval);
                }
            }
#line 2571 "nahid.tab.c"
    break;

  case 102: /* ASGNVAR: VARACCESS OR_ASSIGN expression  */
#line 828 "nahid.y"
                                             {
                struct ll_identifier* res = isDeclared(&root,(yyvsp[-2].text));
                if(res==NULL)
                {
                    printf("Compilation Error ::  Varribale %s is not declared\n",(yyvsp[-2].text));
                    exit(-1);
                }
                else if(res->data.type == 1 || res->data.type == 6)
                {
                    printf("Error :: You can't set a value to class/function");
                    exit(-1);
                }
                struct datatype tmp,tmp2;
                if(res->data.valtype == 2) tmp = make_datatype_int(res->data.intval);
                else if(res->data.valtype == 3) tmp = make_datatype_double(res->data.doubleval);
                else if(res->data.valtype == 4) tmp = make_datatype_char(res->data.strval);
                else tmp = make_datatype_int(0);
                tmp2 = evaluate(tmp,(yyvsp[0].val),"|");
                if(tmp2.type == 2){
                        int n = log10(tmp2.intval) + 1;
                        char *numberArray = calloc(n, sizeof(char));
                        sprintf(numberArray,"%ld",tmp2.intval);
                        setVal(&root,&last,(yyvsp[-2].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %d\n",(yyvsp[-2].text),tmp2.intval);
                }
                else if(tmp2.type == 3){
                        char *numberArray = calloc(51,sizeof(char));
                        snprintf(numberArray,50,"%lf",tmp2.doubleval);
                        setVal(&root,&last,(yyvsp[-2].text),numberArray);
                        fprintf(infotext,"Value assigned :: %s = %f\n",(yyvsp[-2].text),tmp2.doubleval);
                }
                else{
                        setVal(&root,&last,(yyvsp[-2].text),tmp2.strval);
                        fprintf(infotext,"Value assigned :: %s = %s\n",(yyvsp[-2].text),tmp2.strval);
                }
            }
#line 2612 "nahid.tab.c"
    break;

  case 103: /* whilegrammer: WHILE '(' expression ')' '{' statement '}'  */
#line 866 "nahid.y"
                                                             {
                    fprintf(infotext,"While loop executed with expression : ");
                    fprint_datatype((yyvsp[-4].val),infotext);
                }
#line 2621 "nahid.tab.c"
    break;

  case 104: /* dowhilegrameer: DO '{' statement '}' WHILE '(' expression ')' ';'  */
#line 871 "nahid.y"
                                                                    {
                    fprintf(infotext,"Do While loop executed with expression : ");
                    fprint_datatype((yyvsp[-2].val),infotext);
                }
#line 2630 "nahid.tab.c"
    break;

  case 105: /* $@6: %empty  */
#line 875 "nahid.y"
                            {
                    fprintf(infotext,"PRINT :: ");
                }
#line 2638 "nahid.tab.c"
    break;

  case 107: /* $@7: %empty  */
#line 879 "nahid.y"
                             {
                    fprint_datatype((yyvsp[0].val),infotext);
                }
#line 2646 "nahid.tab.c"
    break;

  case 109: /* manyexprgm: expression  */
#line 882 "nahid.y"
                             {
                    fprint_datatype((yyvsp[0].val),infotext);
                }
#line 2654 "nahid.tab.c"
    break;

  case 110: /* $@8: %empty  */
#line 886 "nahid.y"
                         {
                    fprintf(infotext,"imported module :: ");
                }
#line 2662 "nahid.tab.c"
    break;

  case 112: /* $@9: %empty  */
#line 890 "nahid.y"
                           {
                    fprintf(infotext,"%s , ",(yyvsp[-1].text));
                }
#line 2670 "nahid.tab.c"
    break;

  case 114: /* manyname: NAME  */
#line 893 "nahid.y"
                       {
                    fprintf(infotext,"%s\n",(yyvsp[0].text));
                }
#line 2678 "nahid.tab.c"
    break;


#line 2682 "nahid.tab.c"

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
      yyerror (YY_("syntax error"));
    }

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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 896 "nahid.y"

extern char yytext[];
extern int column;
int yyerror(char *s){
    fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}
