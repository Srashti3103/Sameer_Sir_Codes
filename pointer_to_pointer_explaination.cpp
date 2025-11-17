//Explain pointer to pointer in c
#include<stdio.h>
int main(){
	int a=5;
	int *p;
	p=&a;
	printf("Address of a :%u\n",p);
	printf("Value of a :%d\n",*p);
	int **q;
	q=&p;
	printf("Address of p :%u\n",q);
	printf("Address of a :%u\n",*q);
	printf("Value of a :%d\n",**q);
	printf("Address of a:%u\n",&q);
}