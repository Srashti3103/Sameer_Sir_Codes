//Calculator using switch case
#include<stdio.h>
int main()
{
	int a , b , c , d;
	printf("Enter two numbers \n");
	scanf("%d%d",&a,&b);
	while(1)
	{
	   printf(" MENU \n");
	   printf(" 1. ADD \n");
	   printf(" 2. SUB \n");
	   printf(" 3. MUL \n");
       printf(" ENTER CHOICE \n");
	   scanf("%d",&d);
	   switch(d)
	   {	
	   	   case 1 : c = a + b;
		   printf(" ADD  = %d\n ", c);
		   break;
		
		   case 2 : c = a - b;
		   printf(" SUB = %d\n ", c);
		   break;
		
		   case 3 : c = a * b;
		   printf(" MUL  = %d\n ", c);
	       break;
		
		   Default :printf("INVALID CHOICE \n");
		}
	}
}