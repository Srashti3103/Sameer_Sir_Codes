//union ------->>>> collection of different data type
#include<stdio.h>
typedef struct test1{
	int T;
	int F;
}a;
typedef struct test2{
	int T;
	int F;
}b;
int main(){
	printf("SIZE OF STRUCTURE :%d\n",sizeof(test1));
	printf("SIZE OF UNION :%d\n",sizeof(test2));
}