//EVEN NUMBER THROUGH FOR LOOP
#include<stdio.h>
int main()
{
	int i,n ;
	printf("ENTER n \n");
	//input value of n
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)//looping
	{
		printf("%d\n",i);
	}
}