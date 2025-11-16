// use string functions strlen , strlwr , strupr , strcpy
#include<stdio.h>
#include<string.h>
int main ()
{
	char a[10], b[10],c[10];
	printf("Enter the name \n");
	scanf("%s",a);
	//strcpy ----->>>> copy string 
	strcpy(b,a);
	//strlwr ----->>>>string in lower case
	strlwr(b);
	//strcpy ----->>>>copy string
	strcpy(c,a);
	//strupr ---->>>>string in upper case
	strupr(c);
	printf(" a = %s \n ",a );
	printf(" b = %s \n ",b );
	printf(" c = %s \n ",c );
	
}