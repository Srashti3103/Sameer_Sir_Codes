//WAP to input and print number using loop through pointer 
#include<stdio.h>
int main(){
	int a[10],n,*p;
	printf("Enter the size of array :");
	scanf("%d",&n);
	printf("Enter number :");
	for(int i=0;i<n;i++){
		scanf("%d",(a+i));
	}
	printf("NUMBERS OF ARRAY :");
	for(int i=0;i<n;i++){
		printf("%d\n",*(a+i));
	}
}