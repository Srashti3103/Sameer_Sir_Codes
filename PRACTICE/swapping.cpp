
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a and b \n");
	scanf("%d%d", &a,&b);
	c = a ;
	a = b ;
	b = c;
	printf("a = %d \n",a);
    printf("b = %d \n",b);
}