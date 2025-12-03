//use stricmp function for comparing two string like strcmp, sricmp----->>>>>also compare the string are similar or not  
#include<stdio.h>
#include<string.h>
int main()
{
	char a[10], b[10];
	printf("Enter two Names \n");
	scanf("%s%s", a , b);
	if(stricmp(a , b) == 0)//upper or lqwer are similar character
	{
		printf("BOTH STRING ARE SIMILAR \n");
	}
	else if(strcmp (a , b) > 0)//according to ascii value
	{
		printf(" STRING! IS GREATER THAN  STRING@ \n");
	}
	else 
	{
		printf(" STRING@ IS GREATER THAN STRING! \n");
		
	}
}