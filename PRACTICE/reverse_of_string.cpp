//Reverse of a string  
#include<stdio.h>
#include<string.h>
int main ()
	{
		char a[10]= "ABC";
		int i, l;
		l = strlen(a);
		printf("REVERSE OF A STRING :");
		for (int i=l-1; i>=0 ;i--)
		{
			printf(" %c\n",a[i]);
		}
	}
