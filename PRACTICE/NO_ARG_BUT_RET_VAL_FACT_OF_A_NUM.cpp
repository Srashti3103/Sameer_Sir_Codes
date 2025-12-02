//NO ARGUMENT BUT RETURN VALUE 
//FACTORIAL OF A NUMBER 
#include<stdio.h>
int fact(){
	int num,f=1;
	printf("ENTER THE VALUE OF NUM :\n");
	scanf("%d",&num);//input
	//calculation 
	for(int i=1;i<=num;i++){
		f=f*i;
	}
	return f;
}
int main(){
	printf("FACTORIAL OF A NUMBER =%d",fact());//function calling //print function
}