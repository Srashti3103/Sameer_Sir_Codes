//strcmp function used fo rcomparing both function 
#include<stdio.h>
#include<string.h>
int main()
{
	char a[10], b[10];
	printf("Enter two string \n");
	scanf("%s%s", a , b);
	if(strcmp(a , b) == 0)
	{
		printf("BOTH STRING ARE SIMILAR \n");
	}
	else if(strcmp (a , b) > 0)
	{
		printf(" STRING! IS GREATER THAN  STRING@ \n");
	}
	else 
	{
		printf(" STRING@ IS GREATER THAN STRING! \n");
		
	}
}