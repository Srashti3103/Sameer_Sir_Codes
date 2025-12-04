//pritn a string with & or without &
#include<stdio.h>
int main()
{
	char a[10] , b[10];
	//string with &
	printf("Enter Name \n");
	scanf("%s",&a);
	printf("Name = %s \n",a);
	//string without &
	printf("Enter Name \n");
	scanf("%s",&b);
	printf("Name = %s \n",b);
}