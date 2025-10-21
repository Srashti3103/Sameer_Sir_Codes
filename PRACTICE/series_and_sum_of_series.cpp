//Print_series_and_find_sum_of_series_without_using_pow()_function
#include<stdio.h>
#include<math.h>
int main()
{
	int i, num , size ,sum=1;
	printf("Enter num and size :");
	scanf("%d%d",&num,&size);
	for(i=1;i<=size;i++){
		printf(" %d ^ %d +",num, i);
		sum=sum+pow(num,i);
	}
	printf("ANS = %d\n",sum);
}