//print sum and average oif the aray
#include<stdio.h>
int main()
{
	int n ;
	printf("Enter the size of array :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array :");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
    }
    float sum =0 , avg ;
    for(int i=0 ; i<n ; i++)
    {
    	sum =sum + arr[i];
	}
	avg = sum / n;
	printf("sum of element of arary :%f\n",sum);
	printf("Average = %f \n ",avg);
}