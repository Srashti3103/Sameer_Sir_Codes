#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter number \n");
	scanf("%d%d", &a,&b);
	if(a>b)
	{
		printf("biggest number is a");
	}
	else if(b>a)
	{ 
		printf("biggest number is b");
	}
    else
    {
    	printf("Both are equal");
	}
    
	}