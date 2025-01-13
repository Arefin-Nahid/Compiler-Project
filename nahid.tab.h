/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_NAHID_TAB_H_INCLUDED
# define YY_YY_NAHID_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 26 "nahid.y"

    #ifndef __DT__
    #define __DT__
    struct __DT__ datatype {
        int type;
        char *strval;
        int intval;
        double doubleval;
    };
    #endif

#line 61 "nahid.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NAME = 258,                    /* NAME  */
    VARACCESS = 259,               /* VARACCESS  */
    NUM = 260,                     /* NUM  */
    STR = 261,                     /* STR  */
    FUNC = 262,                    /* FUNC  */
    CLASS = 263,                   /* CLASS  */
    INIT = 264,                    /* INIT  */
    INT = 265,                     /* INT  */
    DOUBLE = 266,                  /* DOUBLE  */
    STRING = 267,                  /* STRING  */
    CONST = 268,                   /* CONST  */
    VOID = 269,                    /* VOID  */
    VAR = 270,                     /* VAR  */
    ELSEIF = 271,                  /* ELSEIF  */
    ELSE = 272,                    /* ELSE  */
    IF = 273,                      /* IF  */
    SWITCH = 274,                  /* SWITCH  */
    CASE = 275,                    /* CASE  */
    def_ault = 276,                /* def_ault  */
    FOR = 277,                     /* FOR  */
    WHILE = 278,                   /* WHILE  */
    DO = 279,                      /* DO  */
    CONTINUE = 280,                /* CONTINUE  */
    RETURN = 281,                  /* RETURN  */
    RIGHT_ASSIGN = 282,            /* RIGHT_ASSIGN  */
    LEFT_ASSIGN = 283,             /* LEFT_ASSIGN  */
    ADD_ASSIGN = 284,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 285,              /* SUB_ASSIGN  */
    MUL_ASSIGN = 286,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 287,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 288,              /* MOD_ASSIGN  */
    AND_ASSIGN = 289,              /* AND_ASSIGN  */
    XOR_ASSIGN = 290,              /* XOR_ASSIGN  */
    OR_ASSIGN = 291,               /* OR_ASSIGN  */
    RIGHT_OP = 292,                /* RIGHT_OP  */
    LEFT_OP = 293,                 /* LEFT_OP  */
    INC_OP = 294,                  /* INC_OP  */
    DEC_OP = 295,                  /* DEC_OP  */
    PTR_OP = 296,                  /* PTR_OP  */
    AND_OP = 297,                  /* AND_OP  */
    OR_OP = 298,                   /* OR_OP  */
    LE_OP = 299,                   /* LE_OP  */
    GE_OP = 300,                   /* GE_OP  */
    EQ_OP = 301,                   /* EQ_OP  */
    NE_OP = 302,                   /* NE_OP  */
    PRINT = 303,                   /* PRINT  */
    SIN = 304,                     /* SIN  */
    TAN = 305,                     /* TAN  */
    LOG = 306,                     /* LOG  */
    LOG10 = 307,                   /* LOG10  */
    COS = 308,                     /* COS  */
    ACOS = 309,                    /* ACOS  */
    ASIN = 310,                    /* ASIN  */
    ATAN = 311,                    /* ATAN  */
    GCD = 312,                     /* GCD  */
    LCM = 313,                     /* LCM  */
    POW = 314,                     /* POW  */
    IMPORT = 315                   /* IMPORT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 37 "nahid.y"

    char text[1009];
    struct datatype val;

#line 143 "nahid.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_NAHID_TAB_H_INCLUDED  */
