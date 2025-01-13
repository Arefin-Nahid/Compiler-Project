%{
    #include "nahid.tab.h"
    #include <string.h>
    int yyparse();
    int yylex();  
    int yyerror();
    FILE *flexo;
    void count();
    void comment();
    int multicomm=0;
%}

/* -------------- Keyword Section for Patterns -------------- */

char                    [a-zA-Z]
digit                   [0-9]
special                 [$_@]
space                   " "
newline                 "\n"
Datatype                "int"|"double"|"char"|"void"
Operator                "="|"+"|"-"|"/"|"*"|"&"|"|"|"%"
Relational_Operator     "<"|">"|"<="|">="|"&&"|"||"|"=="|"!="
Identifier              ({char}|{digit}|{special})+

/* -------------- Pattern Matching Rules Section -------------- */
%%
"/*" { 
    comment();
}
[ \t\v\n\f] {
    count();
}
"func" {
    count();
    fprintf(flexo, "FUNCTION : %s\n", yytext);
    return FUNC;
}
"print" {
    count();
    fprintf(flexo, "PRINT_STATEMENT : %s\n", yytext);
    return PRINT;
}
"switch" {
    count();
    fprintf(flexo, "SWITCH_STATEMENT : %s\n", yytext);
    return SWITCH;
}
"case" {
    count();
    fprintf(flexo, "CASE_STATEMENT : %s\n", yytext);
    return CASE;
}
"default" {
    count();
    fprintf(flexo, "DEFAULT_STATEMENT : %s\n", yytext);
    return def_ault;
}
"ASIN" {
    count();
    fprintf(flexo, "TRIGONOMETRIC_FUNCTION_ASIN : %s\n", yytext);
    return ASIN;
}
"ACOS" {
    count();
    fprintf(flexo, "TRIGONOMETRIC_FUNCTION_ACOS : %s\n", yytext);
    return ACOS;
}
"ATAN" {
    count();
    fprintf(flexo, "TRIGONOMETRIC_FUNCTION_ATAN : %s\n", yytext);
    return ATAN;
}
"LOG10" {
    count();
    fprintf(flexo, "LOGARITHMIC_FUNCTION_LOG10 : %s\n", yytext);
    return LOG10;
}
"LOG" {
    count();
    fprintf(flexo, "LOGARITHMIC_FUNCTION_LOG : %s\n", yytext);
    return LOG;
}
"SIN" {
    count();
    fprintf(flexo, "TRIGONOMETRIC_FUNCTION_SIN : %s\n", yytext);
    return SIN;
}
"COS" {
    count();
    fprintf(flexo, "TRIGONOMETRIC_FUNCTION_COS : %s\n", yytext);
    return COS;
}
"TAN" {
    count();
    fprintf(flexo, "TRIGONOMETRIC_FUNCTION_TAN : %s\n", yytext);
    return TAN;
}
"GCD" {
    count();
    fprintf(flexo, "MATH_FUNCTION_GCD : %s\n", yytext);
    return GCD;
}
"LCM" {
    count();
    fprintf(flexo, "MATH_FUNCTION_LCM : %s\n", yytext);
    return LCM;
}
"POW" {
    count();
    fprintf(flexo, "MATH_FUNCTION_POW : %s\n", yytext);
    return POW;
}
"import" {
    count();
    fprintf(flexo, "IMPORT_STATEMENT : %s\n", yytext);
    return IMPORT;
}
"var" { 
    count();
    fprintf(flexo, "VARIABLE_DECLARATION : %s\n", yytext);
    return VAR;
}
"class" {
    count();
    fprintf(flexo, "CLASS_DECLARATION : %s\n", yytext);
    return CLASS;
}
"init" {
    count();
    fprintf(flexo, "INITIALIZER : %s\n", yytext);
    return INIT;
}
"Int" {
    count();
    fprintf(flexo, "DATA_TYPE_INT : %s\n", yytext);
    return INT;
}
"Double" {
    count();
    fprintf(flexo, "DATA_TYPE_DOUBLE : %s\n", yytext);
    return DOUBLE;
}
"String" {
    count();
    fprintf(flexo, "DATA_TYPE_STRING : %s\n", yytext);
    return STRING;
}
"else if" {
    count();
    fprintf(flexo, "ELSE_IF_STATEMENT : %s\n", yytext);
    return ELSEIF;
}
"else" {
    count();
    fprintf(flexo, "ELSE_STATEMENT : %s\n", yytext);
    return ELSE;
}
"if" {
    count();
    fprintf(flexo, "IF_STATEMENT : %s\n", yytext);
    return IF;
}
"for" {
    count();
    fprintf(flexo, "FOR_LOOP : %s\n", yytext);
    return FOR;
}
"while" {
    count();
    fprintf(flexo, "WHILE_LOOP : %s\n", yytext);
    return WHILE;
}
"const" {
    count();
    fprintf(flexo, "CONSTANT_DECLARATION : %s\n", yytext);
    return CONST;
}
"continue" {
    count();
    fprintf(flexo, "CONTINUE_STATEMENT : %s\n", yytext);
    return CONTINUE;
}
"return" {
    count();
    fprintf(flexo, "RETURN_STATEMENT : %s\n", yytext);
    return RETURN;
}
"Void" {
    count();
    fprintf(flexo, "DATA_TYPE_VOID : %s\n", yytext);
    return VOID;
}
"Class" {
    count();
    fprintf(flexo, "CLASS_DECLARATION : %s\n", yytext);
    return CLASS;
}
"DO" {
    count();
    fprintf(flexo, "DO_LOOP : %s\n", yytext);
    return DO;
}
{digit}*"."{digit}+ {
    count();
    fprintf(flexo, "FLOAT_LITERAL : %s\n", yytext);
    yylval.val.doubleval = atof(yytext);
    yylval.val.type = 3;
    return NUM;
}
{digit}+ {
    count();
    fprintf(flexo, "INTEGER_LITERAL : %s\n", yytext);
    yylval.val.intval = atoi(yytext);
    yylval.val.type = 2;
    return NUM;
}
"$"{Identifier} {
    count();
    fprintf(flexo, "VARIABLE_ACCESS : %s\n", yytext);
    strcpy(yylval.text, yytext+1);
    return VARACCESS;
}
{Identifier} {
    count();
    fprintf(flexo, "IDENTIFIER : %s\n", yytext);
    strcpy(yylval.text, yytext);
    return NAME;
}
">>="            { count(); 
    fprintf(flexo,"TOKEN 1 : %s\n",yytext);
    return(RIGHT_ASSIGN); }
"<<="            { count(); 
    fprintf(flexo,"TOKEN 2 : %s\n",yytext);
    return(LEFT_ASSIGN); }
"+="            { count(); 
    fprintf(flexo,"TOKEN 3 : %s\n",yytext);
    return(ADD_ASSIGN); }
"-="            { count(); 
    fprintf(flexo,"TOKEN 4 : %s\n",yytext);
    return(SUB_ASSIGN); }
"*="            { count(); 
    fprintf(flexo,"TOKEN 5 : %s\n",yytext);
    return(MUL_ASSIGN); }
"/="            { count(); 
    fprintf(flexo,"TOKEN 6 : %s\n",yytext);
    return(DIV_ASSIGN); }
"%="            { count(); 
    fprintf(flexo,"TOKEN 7 : %s\n",yytext);
    return(MOD_ASSIGN); }
"&="            { count(); 
    fprintf(flexo,"TOKEN 8 : %s\n",yytext);
    return(AND_ASSIGN); }
"^="            { count(); 
    fprintf(flexo,"TOKEN 9 : %s\n",yytext);
    return(XOR_ASSIGN); }
"|="            { count(); 
    fprintf(flexo,"TOKEN 10 : %s\n",yytext);
    return(OR_ASSIGN); }
">>"            { count(); 
    fprintf(flexo,"TOKEN 11 : %s\n",yytext);
    return(RIGHT_OP); }
"<<"            { count(); 
    fprintf(flexo,"TOKEN 12 : %s\n",yytext);
    return(LEFT_OP); }
"++"            { count(); 
    fprintf(flexo,"TOKEN 13 : %s\n",yytext);
    return(INC_OP); }
"--"            { count(); 
    fprintf(flexo,"TOKEN 14 : %s\n",yytext);
    return(DEC_OP); }
"->"            { count(); 
    fprintf(flexo,"TOKEN 15 : %s\n",yytext);
    return(PTR_OP); }
"&&"            { count();
    fprintf(flexo,"TOKEN 16 : %s\n",yytext);
    return(AND_OP); }
"||"            { count(); 
    fprintf(flexo,"TOKEN 17 : %s\n",yytext);
    return(OR_OP); }
"<="            { count(); 
    fprintf(flexo,"TOKEN 18 : %s\n",yytext);
    return(LE_OP); }
">="            { count(); 
    fprintf(flexo,"TOKEN 19 : %s\n",yytext);
    return(GE_OP); }
"=="            { count(); 
    fprintf(flexo,"TOKEN 20 : %s\n",yytext);
    return(EQ_OP); }
"!="            { count(); 
    fprintf(flexo,"TOKEN 21 : %s\n",yytext);
    return(NE_OP); }

";"            { count(); 
    fprintf(flexo,"TOKEN 22 : %s\n",yytext);
    return(';'); }
("{"|"<%")       { count(); 
    fprintf(flexo,"TOKEN 23 : %s\n",yytext);
    return('{'); }
("}"|"%>")       { count(); 
    fprintf(flexo,"TOKEN 24 : %s\n",yytext);
    return('}'); }
","            { count(); 
    fprintf(flexo,"TOKEN 25 : %s\n",yytext);
    return(','); }
":"            { count(); 
    fprintf(flexo,"TOKEN 26 : %s\n",yytext);
    return(':'); }
"="            { count(); 
    fprintf(flexo,"TOKEN 27 : %s\n",yytext);
    return('='); }
"("            { count();
    fprintf(flexo,"TOKEN 28 : %s\n",yytext);
    return('('); }
")"            { count();
    fprintf(flexo,"TOKEN 29 : %s\n",yytext);
    return(')'); }
("["|"<:")       { count();
    fprintf(flexo,"TOKEN 30 : %s\n",yytext);
    return('['); }
("]"|":>")       { count();
    fprintf(flexo,"TOKEN 31 : %s\n",yytext);
    return(']'); }
"."            { count();
    fprintf(flexo,"TOKEN 32 : %s\n",yytext);
    return('.'); }
"&"            { count(); 
    fprintf(flexo,"TOKEN 33 : %s\n",yytext);
    return('&'); }
"!"            { count();
    fprintf(flexo,"TOKEN 34 : %s\n",yytext);
    return('!'); }
"~"            { count();
    fprintf(flexo,"TOKEN 35 : %s\n",yytext);
    return('~'); }
"-"            { count(); 
    fprintf(flexo,"TOKEN 36 : %s\n",yytext);
    return('-'); }
"+"            { count(); 
    fprintf(flexo,"TOKEN 37 : %s\n",yytext);
    return('+'); }
"*"            { count(); 
    fprintf(flexo,"TOKEN 38 : %s\n",yytext);
    return('*'); }
"/"            { count(); 
    fprintf(flexo,"TOKEN 39 : %s\n",yytext);
    return('/'); }
"%"            { count();
    fprintf(flexo,"TOKEN 40 : %s\n",yytext);
    return('%'); }
"<"            { count(); 
    fprintf(flexo,"TOKEN 41 : %s\n",yytext);
    return('<'); }
">"            { count(); 
    fprintf(flexo,"TOKEN 42 : %s\n",yytext);
    return('>'); }
"^"            { count();
    fprintf(flexo,"TOKEN 43 : %s\n",yytext);
    return('^'); }
"|"            { count();
    fprintf(flexo,"TOKEN 44 : %s\n",yytext);
    return('|'); }
"?"            { count();
    fprintf(flexo,"TOKEN 45 : %s\n",yytext);
    return('?'); }

"\""(.)*"\"" {
    count();
    fprintf(flexo,"TOKEN 46 : %s\n",yytext);
    yylval.val.type = 4;
    yylval.val.strval = calloc(strlen(yytext),sizeof(char));
    strcpy(yylval.val.strval,yytext+1);
    yylval.val.strval[strlen(yylval.val.strval)-1]=0;
    return STR;
}
. {
    printf("Error :: Unknown character\n");
    exit(-1);
}
%%
int yywrap () {
    return 1;
}
void comment() {
    char c, c1;
loop:
    while ((c = input()) != '*' && c != 0)
        putchar(c);

    if ((c1 = input()) != '/' && c != 0)
    {
        unput(c1);
        goto loop;
    }

    if (c != 0)
        putchar(c1);
}
int column = 0;
FILE *infotext;
void count () {
    int i;
    for(int i=0;yytext[i]!='\0';i++)
    {
        if(yytext[i]=='\n')
            column=0;
        else if(yytext[i]=='\t')
            column+=(8-(column%8));
        else column++;
    }
    ECHO;
}
int main () {
    freopen("input.txt","r",stdin);
    flexo = fopen("token_output.txt","w");
    infotext = fopen("info_output.txt","w");
    yyparse();
    fclose(flexo);
}
