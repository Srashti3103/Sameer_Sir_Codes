//print table
#include<stdio.h>
int main()
{
	int i,n,Table ;
	printf("ENTER n \n");
	//input value of n
	scanf("%d",&n);
	for(i=1;i<=10;i++)//looping
	{
	   Table=n*i;	
	printf("Table = %d\n",Table);
    }
}