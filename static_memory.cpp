#include<stdio.h>
void fun();
int main(){
	fun();
	fun();
	fun();
}
void fun(){
	static int i=1;
	printf("%d\n",i);
	i++;
}