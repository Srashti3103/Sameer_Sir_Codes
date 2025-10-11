#include<stdio.h>
int main()
{
	int age;
	long int c;
	printf("Enter age \n");
	scanf("%d",&age);
	c=age*365*24*60*60;
	printf("seconds = %ld\n",c);
}