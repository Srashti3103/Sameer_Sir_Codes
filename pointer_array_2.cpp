//To input and print in numbeer using pointer
#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int a[n];
	printf("Enter Numbers \n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("NUMBERS = \n");
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}