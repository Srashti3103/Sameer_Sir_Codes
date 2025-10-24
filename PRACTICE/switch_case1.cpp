//print number  ini words in switch case statement 
#include<stdio.h>
int main()
{
	int n;
	printf("Enter Choicce (0 - 9) \n");
	scanf("%d",&n);
	switch(n)
	{
		Default : printf(" INVALID CHOICE \n");
		break; 
		
		case 0 : printf(" Zero ");
		break;
		
		case 1 : printf(" one ");
		break;
		
		case 2 : printf(" two ");
		break;
		
		case 3 : printf(" Three ");
		break;
		
		case 4 : printf(" Four ");
		break;
		
		case 5 : printf(" five ");
		break;
		
		case 6 : printf(" Six ");
		break;
		
		case 7 : printf(" Seven ");
		break;
		
		case 8 : printf(" eight ");
		break;
		
		case 9 : printf(" nine ");
		break;
		
	
		 
	}
}