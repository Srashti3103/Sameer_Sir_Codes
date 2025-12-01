//Division of two pointer using pointer
#include<stdio.h>
int main(){
	float a=5,b=2,c;
	float *p,*q;
	p=&a;
	q=&b;
	c=*p/(*q);
	printf("Division = %d\n",c);
}