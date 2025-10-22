//SUM OF SQUARE
#include<stdio.h>
int main()
{
	int i,n ;
	int sum=0;
	printf("Enter the value :n \n");
	//input value of n 
	scanf("%d",&n);
	for(i=1;i<=n;i++)//looping
	{
		sum=sum+(i*i );
	}
	//print sum of square
	printf("SUM = %d\n",sum);
}