//create identity matrix and print marix
#include<stdio.h>
int main()
{
	int a[10][10],m , n ;
	printf("Enter row and coloumnn \n");
	scanf("%d%d",&m,&n);
	for (int i =0 ; i<m ; i++)
	{
		for (int j=0 ; j<n; j++)
		{
			if(i==j)
			{
				a[i][j]=1;
			}
				else
			{
				a[i][j]=0;
			}
		}
	}
		printf("IDENTITY MATRIX \n");
		for (int i=0 ; i<m; i++)
		{
			for (int j=0 ; j<n; j++)
			{
				printf("%4d",a[i][j]);
			}
			printf("\n");
		}
}