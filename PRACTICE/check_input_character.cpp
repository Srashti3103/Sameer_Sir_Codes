//WAP FOR CHECK INPUT CHARACTER IS CAPITAL LETTER ,SMALL LETTER
// ,DIGIT , SPACE , SPECIAL SYMBOLS
#include<stdio.h>
int main()
{
	int ch;
	printf(" ENTER CHAARACTER \n");
	scanf("%c",&ch);
	if( ch >= 'A' && ch <= 'Z')
	{
		printf(" CAPITAL LETTERS \n");
	}
	else if( ch >= 'a' && ch <= 'z')
	{
		printf(" SMALL LETTERS \n");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("DIGITS \n");
    }
	else if(ch==' ')
	{
		printf("SPACE \n");
	}
	else
	{
		printf("SPECIAL SYMBOLS\n");
	} 
}