//print 1 to 10 using if()
#include<stdio.h>
int main()
{
	int  i=1;
	p : printf("%d\n",i);
	i++;
	if(i<=10)
	{
		goto p;
	}
}