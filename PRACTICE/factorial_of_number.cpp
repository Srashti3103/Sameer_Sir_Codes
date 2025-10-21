//SUM OF SQUARE
#include<stdio.h>
int main()
{
	int i,n ;
	int fac =1;
	printf("ENTER n \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   fac=fac*i;	
	}
	printf("fac = %d\n",fac);
}