//ARGUMENT BUT NO RETURN VALUE
//ADD TWO NUMBER 
#include<stdio.h>
void sum(int p,int q){
	printf("SUM =%d",p+q);
}
int main(){
	int a,b;
	printf("ENTER THE VALUE OF A AND B");
	scanf("%d%d",&a,&b);
	sum(a,b);
}