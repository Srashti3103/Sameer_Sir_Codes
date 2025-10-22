//sum_of_series  1 + (x^1)/2 + (x^2)/4 +(x^3)/6 + (x^4)/8 + ..... 
#include<stdio.h>
#include<math.h>
int main()
{
	int i, num , size ;
	float sum=1;
	printf("Enter num and size :");
	scanf("%d%d",&num,&size);
	for(i=1;i<=size;i++){
		sum=sum+pow(num,i)/(2*i);
	}
	printf("ANS = %f\n",sum);
}