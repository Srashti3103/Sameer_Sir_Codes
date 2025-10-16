//ASCII TABLE
#include<stdio.h>
int main  ()
{
	int i = 0 ;
	printf(" ASCII VALUE \n");
	while(i <= 255)
	{
		printf("%d=%c\t",i,i);
		i++;
	}
}