//ARRAY OF POINTER
#include<stdio.h>
int main(){
	int a=2,b=3,c=4;
	int *p[10];
	p[0]=&a;
	p[1]=&b;
	p[2]=&c;
	for(int i=0;i<3;i++){
		printf("%d\n",*p[i]);
	}
}