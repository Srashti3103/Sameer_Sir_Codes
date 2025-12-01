//To print fabonacci series through recursion
#include<stdio.h>
int fib(int n);
int main(){
	int n;
	printf("ENTER NUMBER \n");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
	printf("%4d\n",fib(i));
  	}
}
int fib(int n){
	 int f;
	 if(n==0||n==1){
	 	f=n;
	 }else{
	 	f=fib(n-1)+fib(n-2);
	 }
	 return(f);
}