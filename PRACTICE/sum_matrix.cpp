//sum of matrix of a fix row and coloumn
#include<stdio.h>
int main()
{
	int a[2][3]={{10,20,30},{40,50,60}};
	i nt m=2, n=3,sum=0;
	for(int i=0 ; i<m ; i++)//row 
	{
		for(int j=0 ; j<n ; j++)//coloumn
		{
			sum = sum +a[i][j];//sum of matrix
		}
	}
	printf("SUM OF MATRIX ELEMENTS = %d\n",sum );
}
