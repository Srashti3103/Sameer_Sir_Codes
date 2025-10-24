//switch case statement
#include<stdio.h>
int main()
{
	char d;
	printf("Enter Character \n");
	scanf("%c",&d);
	switch(d)
	{
	    case 'a':
	    case 'e':
	    case 'i':
	    case 'o':
	    case 'u':
	    case 'A' : case 'E' : case 'I' : case 'O': case 'U':
		 printf(" VOWEL \n");
		 break;
		default: printf("CONSONANT \n");		 
	}
}