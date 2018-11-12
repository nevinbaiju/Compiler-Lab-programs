#include<stdio.h>
#include<ctype.h>
int n;
char prod[50][50];
void input()
{
	int i;
	printf("Enter the number of productions: ");
	scanf("%d",&n);
	printf("Enter %d productions: ",n);
	for(i=0;i<n;i++)	
		scanf("%s",prod[i]);
}
void replace(char c, char num)
{
	int i;
	for(i=0;i<n;i++)
	{
		int j=2;
		while(prod[i][j]!='\0')
		{
			if(prod[i][j]==c)
			{
				prod[i][j]=num;
				break;		
			}
			j++;
		}
	}
}
void check()
{
	int i;
	for(i=0;i<n;i++)
	{
		if(isdigit(prod[i][2]) && prod[i][3]=='\0')
		{
				replace(prod[i][0],prod[i][2]);
				prod[i][0]='#';
		}
	}
}

void display()
{
	printf("\nOptimized Code:\n");
	int i;
	for(i=0;i<n;i++)
	{
		if(prod[i][0]!='#')
			printf("%s\n",prod[i]);
	}
}
void main()
{
	input();
	check();
	display();
}
