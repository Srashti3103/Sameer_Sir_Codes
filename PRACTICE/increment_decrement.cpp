#include<stdio.h>
int main()
{
	int a= 10;
	a++;//post increament operator//a=a+1
	printf("%d\n",a);
	a--;//post decrement operator//a=a-1
	printf("%d\n",a);//10
	printf("%d\n",a++);//10//first var use /print than after increment 
	printf("%d\n",a);//11
	printf("%d\n",++a);//12 pre increment ----> first increment than use /print 
	printf("%d\n",a);//12
	printf("%d\n",a--);//12 first variable use /print than after increment /decrement
	printf("%d\n",a);//11
	printf("%d\n",--a);//10 pre decrement ----> first decrement than use / print 
	printf("%d\n",a);//10
		
	}