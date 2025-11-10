//sum of diagonal element of matrix 
#include<stdio.h>
int main()
{
	int a[3][3]={{10,20,30},{40,50,60},{70,80,90}};
	int m=3, n=3,sum=0; 
	for(int i=0 ; i<m ; i++)//row
	{
		for(int j=0 ; j<n ; j++)//coloumn
		{
			if(i==j)//both index number are same ---->>>> diagonal element 
			{	
			sum = sum +a[i][j];//sum of diagonal elements
		    }
		}
	}
	printf("SUM OF DIAGONAL ELEMENTS = %d\n",sum );
}
