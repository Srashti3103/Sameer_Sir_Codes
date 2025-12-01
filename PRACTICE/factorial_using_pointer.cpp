//Factorial Using Pointer  Variables
#include<stdio.h>
int main(){
	int n,i,f=1;
	int *p,*q;
	p=&n;
	q=&f;
	printf("Enter Number:\n");
	scanf("%d",p);
	for(i=1;i<=*p;i++){
		*q=*q*i;
	}
	printf("FACTORIAL=%d\n",*q);
}