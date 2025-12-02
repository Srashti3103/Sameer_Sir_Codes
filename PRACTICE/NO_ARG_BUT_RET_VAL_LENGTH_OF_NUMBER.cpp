//NO ARGUMENT BUT RETURN VALUE 
//LENGTH of a number 
#include<stdio.h>
int len(){
	int n,count=0;
	printf("ENTER NUMBER \n");
	scanf("%d",&n);
	while(n!=0){
		n=n/10;
		count++;
	}
	return count;
}
int main(){
	printf("LENGTH OF A NUMBER :%d",len());
}