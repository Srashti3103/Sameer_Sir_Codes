//find_series_without_using_pow()_function
#include<stdio.h>
#include<math.h>
int main()
{
	int i, num , size ,sum=1,pow=1;
	printf("Enter num and size :");
	scanf("%d%d",&num,&size);
	for(i=1;i<=size;i++){
		pow=pow*num;
		sum=sum+pow;
	}
	printf("ANS = %d\n",sum);
}