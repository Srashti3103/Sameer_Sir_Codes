//Input N Names and Sort N names using bubble sort 
#include<stdio.h>
#include<string.h>
int main(){
	char a[10][40],x[10];
	int n,t=0;
	printf("ENTER THE NUMBER OF NAMES :\n");
	scanf("%d",&n);
	printf("ENTER THE NAMES :\n");
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(int i=0;i<n-1;i++){
			for(int j=0;j<n-i-1;j++){
			if(strcmp(a[j],a[j+1])>0){
			strcpy(x,a[j]);
			strcpy(a[j],a[j+1]);
			strcpy(a[j+1],x);
			}	
		}
	}
	printf("SORTED NAMES :\n");
	for(int i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
}