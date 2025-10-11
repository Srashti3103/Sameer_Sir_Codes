//armstrong number (for all digit number )
#include<stdio.h>
#include<math.h>
int main ()
{
	int num,rem ,temp , sum, len,temp2 ;
	printf("Enter a number :");
	scanf("%d",&num);
	len=0;
	temp= num;
	while(temp!=0)
	{
		temp/=10;
		len++;
	}
	sum=0;
	temp2=num;
	while(temp2!=0)
	{
		rem=temp2%10;
		sum+=pow(rem,len);
		temp2/=10;
	}
	if(sum==num)
	{
		printf("It is armstrong number");
	}
	else
	{
		printf("It is not armstrong number");
	}
	
	
}