//Reverse of Number 
#include<stdio.h>
#include<math.h>
int main()
{
	int num , rem ;
	int rev=0;
	printf("Enter the value of num :");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("reverse of a number %d",rev);
	
}
