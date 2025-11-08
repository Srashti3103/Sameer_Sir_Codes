//array intialization and print >= 18 nos
#include<stdio.h>
int main()
{
	int arr[] = {30, 12,60,80,11};
	int count =0 , n=5;
	printf("Print >=18 no \n ");
	for(int i=0; i<n ; i++)
	{
		if(arr[i]>= 18)
		{
			printf("%d\n",arr[i]);
			count++;
		}
	}
	printf("count = %d\n",count);
	printf("Less than 18 = %d\n",n- count);
}