//write a program to print 1 to 100 number except 20 to 30
#include<stdio.h>
int main()
{
	//intialization
	int i;
	//loopimg statement
	for(i=0;i<=100;i++){
		//coditon for not print number between 20 too 30
		if(i>=20 && i<=30){
			continue;
		}
		printf("%d\t",i);//print numbers
	}
}