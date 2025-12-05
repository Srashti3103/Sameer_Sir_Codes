//NO ARGUMENT AND NO RETURN VALUE 
//FACTORIAL OF A NUMBER 
#include<stdio.h>
void fact(){
	int num,f=1;
	printf("ENTER THE NUMBER\n");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		f=f*i;
	}
	printf("factorial =%d",f);
}
int main(){
	fact();
}