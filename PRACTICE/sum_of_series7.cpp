//sum_of_series 1 + (x^1)/1 + (x^2)/5 +(x^3)/9 + (x^4)/13 + .....
#include<stdio.h>
#include<math.h>
int main()
{
	int i, num , size ;
	float sum=1;
	printf("Enter num and size :");
	scanf("%d%d",&num,&size);
	for(i=1;i<=size;i++){
		sum=sum+pow(num,i)/(4*i-3);
	}
	printf("ANS = %f\n",sum);
}