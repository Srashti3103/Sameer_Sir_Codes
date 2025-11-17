//STRUCTURE WITH A STRUCTURE 
#include<stdio.h>
struct company{
	char name[10];
	int code;
	struct branch{
		char bname[10];
		int bcode;
	}b;
}c;
int main(){
	printf("ENTER THE NAME AND CODE OF COMPANY :\n");
	scanf("%s%d",c.name,&c.code);
	printf("ENTER THE NAME AND CODE OF BRANCH :\n");
	scanf("%s%d",c.b.bname,&c.b.bcode);
	printf("COMPANY NAME :%s\n",c.name);
	printf("COMPANY CODE :%d\n",c.code);
	printf("BRANCH NAME :%s\n",c.b.bname);
	printf("BRANCH CODE :%d\n",c.b.bcode);
	
	
}