//hour glass
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of iteration :");
	scanf("%d",&n);
	for(int i=n; i>=1; i--)
	{
		for(int k= 1; k<=(n-i);k++)
		{
			printf(" ");
		}
		for(int j=1; j<=(2*i-1);j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(int i=2; i<=n; i++)
	{
		for(int k= 1; k<=(n-i);k++)
		{
			printf(" ");
		}
		for(int j=1; j<=(2*i-1);j++)
		{
			printf("*");
		}
		printf("\n");
	}
}