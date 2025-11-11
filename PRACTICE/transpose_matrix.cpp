//TRANSPOSE OF A MATRIX
#include<stdio.h>
int main()
{
	int a[10][10], m, n;
	printf("ENTER THE ROW AND COLOUMN : \n");
	scanf("%d%d",&m , &n);
	printf("ENTER THE MATRIX ELEMENT \n ");
	for (int i=0 ; i<m ; i++)//row
	{
		for (int j=0 ; j<n; j++)//coloumn
		{
			
			scanf("%d",&a[i][j]);
		}
	}

printf(" Transpose of matrix \n");
for (int i=0 ; i<n; i++)//coloumn
{
	for (int j=0; j<m; j++)//row
	{
		printf(" %4d",a[j][i]);
	}
	printf("\n");
}
}
