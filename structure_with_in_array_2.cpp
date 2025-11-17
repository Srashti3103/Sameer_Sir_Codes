//Array within structure and array of structure 
#include<stdio.h>
struct student
{
	char name [10];
	int roll ;
	int m[3];
	float s, p;
} a[10];
int main()
{
	int i , j , n;
	printf("ENTER NO. OF STUDENTS \n");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("ENTER NAME AND ROLL \n");
		scanf("%s%d",a[i].name,&a[i].roll);
		a[i].s =0;
		printf("ENTER NAME AND ROLL \n");
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i].m[j]);
			a[i].s=a[i].s/3;
		}
		printf("name \t roll \t total \t\t per\n");
		for(i=0; i<n; i++)
		{
			printf("%s \t%d \t%f \t%f \n",a[i].name,a[i].roll,a[i].s,a[i].p);
		}
	}
}