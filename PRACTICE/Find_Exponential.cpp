//WAP TO FIND EXPONENTIAl SERIES 
#include<stdio.h>
#include<math.h>
int main(){
	int n,i,f=1;
	float x,s=1,p=1;
	printf("ENTER x AND n \n");
	scanf("%f%d",&x,&n);
	for(i=1;i<=n;i++){
		f=f*i;
		p=p*x;
		s=s+p/f;
	}
	printf("ANS=%f\n",s);
}