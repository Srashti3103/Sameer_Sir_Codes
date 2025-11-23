#include<stdio.h>
int main(){
	int a=5,b=2,c;
	int *p,*q;
	p=&a;
	q=&b;
	c=*p+*q;
	printf("SUM = %d\n",c);
}