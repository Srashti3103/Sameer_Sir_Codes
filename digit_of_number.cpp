//digit_of_number
#include<stdio.h>
#include<math.h>
int main()
{
	int num,len,temp,d,res;
	printf("Enter the value of a num:");
	scanf("%d",&num);
	len=0;
	temp=num;
	while(temp!=0)
	{
		temp/=10;
		len++;
	}
	for(int i=len-1;i>=0;i--)
	{
		d=pow(10,i);
		res=num/d;
		printf("%d\n",res);
		num=num%d;
	}
	
	}
