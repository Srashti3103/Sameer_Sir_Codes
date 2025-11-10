//ARRAY OF STRUCTURE 
//INPUT AND PRINT AND RECORDS
#include<stdio.h>
struct student 
{
	char name[10];
	int roll; 
}
a[10];
int main()\
{
	int i, n ;
	printf("ENTER NUMBER OF RECORDS \n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[n]);
	}
	
}