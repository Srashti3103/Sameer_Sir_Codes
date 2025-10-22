//strong number
#include<stdio.h>
int main()
{
	int num, temp, rem, fac, sum;
	printf("Enter a number :");
	scanf("%d",&num);
	sum=0;
	num=temp;
	while(temp!=0)
	{
		rem=temp%10;
		fac=1;
		for(int i=rem;i>=1; i--)
		{
			fac=fac*i;
		}
		sum+=fac;
		temp/=10;
	}
	if(sum==num)
	{
		printf("It is  strong number");
	}
	else
	{
		printf("It is not strong number");
	}
}