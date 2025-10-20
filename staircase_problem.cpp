//Staircase problem (total number of combination)
#include<stdio.h>
int main()
{
	//initialization
	int num,a=0,b=1,c;//fibonacci intialize from 0
	//input the value of num
	printf("Enter the number of stairs :\n");
	scanf("%d",&num);
	printf("total number of combination to climb stairs \n");
	//looping
	for(int i=1;i<=num;i++){
		c=a+b;
		a=b;
		b=c;
	}
	printf("%4d",c);
}