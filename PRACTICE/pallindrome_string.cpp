//pallindrome in string
#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10];
	printf("Enter name \n");
	scanf("%s",a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	{
		printf("PALLINDROME \n");
	}
	else
	{
		printf(" NOT PALLINDRONE \n");
	}
}