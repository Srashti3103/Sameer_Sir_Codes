//CONCATENATION ------>>>>>>>strcat function is used
#include<stdio.h>
#include<string.h>
int main ()
{
	char a[10], b[10];
	printf("Enter two strings : \n");
	scanf("%s%s",a,b);
	//strcat ------>>>>>> strcat for concatenation (print together)
	strcat(a,b);
	printf("a = %s \n", a );
	printf("b = %s\n ", b);	
}