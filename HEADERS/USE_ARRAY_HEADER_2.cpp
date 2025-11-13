#include<stdio.h>
#include "ARRAY.h"
	int main(){
    int a[10][10],b[10][10],c[10][10],i,j,m,n;
	printf("ENTER ROW AND COL \n");
	scanf("%d%d",&m,&n);
	printf("ENTER MATRIX a \n");
	inputmatrix(a,m,n);
	printf("ENTER MATRIX b \n");
	inputmatrix (b,m,n);
	printf("ADDITION OF MATRIX \n");
  	addmatrix (a,b,m,n);
}