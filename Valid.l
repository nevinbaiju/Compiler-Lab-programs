%{
	#include<stdio.h>
	#include "Valid.tab.h"
%}
%%
[a-zA-Z] { return LETTER;}
[0-9]	{return NUM;}
[_]	{return UNDERSCORE;}
[\n]	{return 0;}
%%
int yywrap()
{
	return(1);
}



