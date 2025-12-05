//to print float variable using pointer array 
#include<stdio.h>
int main(){
	float a[]={10,20,30};
	int i,n=3;
	float *p;
	p=&0[a];
	printf("print number using pointer variable \n");
	for(int i=0;i<n;i++){
		printf("%u\t%f\n",p,*p);
		p++;
	}
}