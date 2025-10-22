//sum of elements 
#include<stdio.h>
int main()
{
	int i,n ;
	int sum=0;
	printf("ENTER n \n");
	//input the value of n
	scanf("%d",&n);
	for(i=1;i<=n;i++)//looping
	{
		sum=sum+i;
	}
	printf("SUM = %d\n",sum);
}