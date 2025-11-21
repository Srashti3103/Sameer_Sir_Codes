//CALL BY ADDRESS OR POINTER 
#include<stdio.h>
void swap(int *p,int *q);
int main(){
	int a=5,b=2;
	swap(&a,&b);
	printf("AFTER SWAP\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}
void swap(int *p,int *q){
	int c;
	c=*p;
	*p=*q;
	*q=c;
}