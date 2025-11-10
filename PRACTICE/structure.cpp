// user define structure 
#include<stdio.h>
struct student 
//structure ------->>>>> 2 bytes
{
	char name[10];
	int roll;	
};
int main()
{
	struct student a ;
	printf("ENTER NAME AND ROLL NUMBER \n");
	scanf("%s%d",a.name,&a.roll);
	printf("NAME = %s \n", a.name);
	printf("ROLL NUMBER = %d \n",a.roll);
	printf("SIZE THE STUDENT = %d \n",sizeof(struct student));	
}