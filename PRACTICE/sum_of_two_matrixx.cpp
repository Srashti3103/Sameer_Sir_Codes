//print sum of two matrix
#include<stdio.h>
int main ()
{
	int a[10][10],b[10][10],c[10][10],m,n;
	printf("ENTER THE NUMBER OF ROW AND COLOUMN :");
	scanf("%d%d",&m,&n);
	//enter first matrix
	printf("ENTER MATRIX a \n");
	for(int i=0; i<m; i++)
	{
		for(int j=0 ; j<n; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//enter second matrix
	printf("ENTER MATRIX b\n");
	for (int i=0 ; i<m; i++)
	{
		for(int j=0 ; j<n; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	//add first and second matrix
	for(int i=0 ; i<m;  i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	//print addition of two matrix
	printf("ADDITION OF TWO MATRIX \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0 ; j<n ; j++)
		{
			printf("%4d",c[i][j]);
		}
		printf("\n");
	}
}