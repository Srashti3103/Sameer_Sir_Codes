//use of string copy function 
#include<stdio.h>
#include<string.h>
int main ()
{
	char a[40],b[40];
	printf("Enter Name \n");
	scanf("%s",a);
	//strcpy ----> copy string 
	strcpy(b,a);
	printf("a = %s \n",a);
	printf("b = %s \n",b);
}