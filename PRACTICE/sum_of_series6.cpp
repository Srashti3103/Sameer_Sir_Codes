//sum_of_series  1 + (x^1)/1 + (x^2)/3 +(x^3)/5 + (x^4)/7 + .....
#include<stdio.h>
#include<math.h>
int main()
{
	int i, num , size ;
	float sum=1;
	printf("Enter num and size :");
	scanf("%d%d",&num,&size);
	for(i=1;i<=size;i++){
		sum=sum+pow(num,i)/(2*i-1);
	}
	printf("ANS = %f\n",sum);
}