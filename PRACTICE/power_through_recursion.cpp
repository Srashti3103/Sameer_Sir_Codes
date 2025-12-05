//To find power of n of any number through recursion
#include<stdio.h>
int power(int x,int n);
int main(){
	int x,n;
	printf("ENTER NUMBER AND POWER :\n");
	scanf("%d%d",&x,&n);
	printf("ANS : %d\n",power(x,n));
}
int power(int x,int n){
	int t;
	if(n==0){
		t=1;
	}else{
		t=x*power(x,n-1);
	}
	return(t);
}