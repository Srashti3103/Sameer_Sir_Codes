//ARMSTRONG NUMBER (for three digit number
#include<stdio.h>
#include<math.h>
int main()
{
	int num,rem,temp , sum,len;
	printf("Enter three digit number :");
	scanf("%d",&num);
	sum =0;
	temp = num;
	len = 3;
	while(temp!=0)
	{
		rem=temp%10;
		sum+=pow(rem,len);
		temp/=10;
	}
	if(num==sum)
	{
		printf("It is  armstrong No.");
	}
	else
	{
		printf("It is not  Armstrong No.");
	}
	
}