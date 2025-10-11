//Pallindrome
#include<stdio.h>
#include<math.h>
int main()
{
	int num , rem ;
	int rev=0;
	printf("Enter the value of num :");
	scanf("%d",&num);
	int temp=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(temp==rev)
	{
		printf("It is a pallindrome ");
	}
	else
	{
		printf("It is not a pallindrome ");
	}
	
	
}