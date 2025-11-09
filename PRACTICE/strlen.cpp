//use of strlen function ------>>>> for calculating the length of string
#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	int l;
	printf(" Enter Name \n ");
	scanf("%s",a);
	l = strlen(a);
	printf("LENGTH OF STRING  = %d\n",l);
}
	