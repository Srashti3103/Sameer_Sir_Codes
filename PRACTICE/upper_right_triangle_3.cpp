//print pattern (right triangle)
#include<stdio.h>
int main ()
{
	int n glr;
	printf("Enter the no. of rows \n");
	scanf("%d",&n);
	for(int i=1; i<=n; i++)//outer loop for row
	{
		for(int j=1; j<=i; j++)//inner loop for coloumn
		{
		printf("%4d",n);	
		}
		printf("\n");
	}
}