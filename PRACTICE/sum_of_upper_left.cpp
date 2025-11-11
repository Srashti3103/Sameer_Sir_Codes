//sum of  upper left triangular matrix 
#include<stdio.h>
int main()
{
	int a[3][3]={{10,20,30},{40,50,60},{70,80,90}};
	int m=3, n=3,sum = 0; 
	for(int i=0 ; i<m ; i++)//row
	{
		for(int j=0 ; j<n ; j++)//coloumn
		{
			sum = sum + a[i][j];
		}
	}
	printf("SUM OF UPPER LEFT TRIANGULAR : %d",sum);
}
