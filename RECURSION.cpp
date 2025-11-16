//Factorial through recursion 
#include<stdio.h>
int fact(int n);
int main(){
	int n,t; 
	printf("ENTER NO :\n");
	scanf("%d",&n);
	printf("FACTORIAL = %d\n",fact(n));
}
//RECURSION
int fact(int n){
	int f;
	if(n==0){
		f=1;
	}else{
		f=n*fact(n-1);
	}
	return(f);
}