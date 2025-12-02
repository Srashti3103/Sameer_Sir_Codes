//No Argument BUT Return Value 
//power
#include<stdio.h>
#include<math.h>
int power(){
	int x,n,p;
	printf("ENTER THE NUMBER AND IT'S POWER\n");
	scanf("%d%d",&x,&n);//input
	p=pow(x,n);//calcualtion
	return p;
}
int main(){
	printf("POWER OF NUMBER = %d",power());//calling and print
}