%{
	#include<stdio.h>
	#include"Calculator.tab.h"
%}
%%
[a-zA-Z][a-zA-Z0-9]* {   return ID;}
[0-9]+ {yylval.no=atoi(yytext); return NUM;}
\n {return 0;}
. {return yytext[0];}
%%
int yywrap()
{
	return(1);
}

