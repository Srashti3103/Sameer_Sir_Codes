//WAP PROGRAM TO FIND BIGGEST NUMBER USING POINTER
#include<stdio.h>
int main(){
	int a[10],n,big,*p;
	printf("ENTER THE SIZE \n");
	scanf("%d",&n);
	printf("ENTER THE NUMBER \n");
	for(p=a;p<(a+n);p++){
		scanf("%d",p);
	}
	big=a[0];
	for(p=a;p<(a+n);p++){
		if(big<*p){
			big=*p;
		}
	}
	printf("BIGGEST NUMBER =%d\n",big);
}