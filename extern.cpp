#include<stdio.h>
void fun();
int main(){
	extern int a ;
	printf("%d\n",a);
	fun();
}
int a=3;
void fun(){
	printf("%d\n",a);
}