//print characters of string 
#include<stdio.h>
#include<string.h>
	int main ()
	{
		char a[10];
		printf("Enter the string :");
		scanf("%s",a);
		int i, l;
		l = strlen(a);
		for (int i=0;i<l;i++)
		{
			printf("%c\n",a[i]);
		}
	}
