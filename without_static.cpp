//Static Storage Class
//Keywoed--->>>Static
//scope--->>>local or global
//Memory--->>>RAM
//Default Value--->>>ZERO
#include<stdio.h>
void fun();
int main(){
	fun();
	fun();
	fun();
}
void fun(){
	int i=1;
	printf(" %d\n",i);
	i++;
}