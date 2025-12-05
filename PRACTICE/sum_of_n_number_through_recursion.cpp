//sum of n number through recursion 
#include<stdio.h>
int sum(int n);
int main(){
	int n,s;
	printf("ENTER NO :\n");
	scanf("%d",&n);
	printf("SUM : %d\n",sum(n));
}
int sum(int n){
	int s;
	if(n==0){
		s=0;
	}else{
		s=n+sum(n-1);
	}
	return(s);
}