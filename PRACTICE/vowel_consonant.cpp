//CHECK INPUT CHARACTER VOWEL AND CONSONANT
#include<stdio.h>
int main()
{
	char ch;
	printf(" ENTER CHARACHTER \n");
	scanf("%c",&ch);
	if(ch=='A' ||ch=='E' ||ch=='I' ||ch=='O' ||ch=='U' ||ch=='a'
	 ||ch=='e' ||ch=='i' ||ch=='o'||ch=='u')
	{
	   printf("VOWEL\n");	
	}
	else
	{
		printf("CONSONANT\n");
	}
	}