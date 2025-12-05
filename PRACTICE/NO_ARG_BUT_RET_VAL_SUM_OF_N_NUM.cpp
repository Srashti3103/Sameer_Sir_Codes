//NO ARGUMENT BUT RETURN VALUE
//SUM OF N NUMBERS 
#include<stdio.h>
int sum(){
	int n,sum=0;
	printf("ENTER THE VALUE OF N:\n");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		sum=sum+i;
	}
	return sum;
}
int main(){
	printf("SUM OF N NUMBER IS %d",sum());
}