//pointer and structure
//INPUT AND PRINT ONE STUDENT RECORD    
#include<stdio.h>  
struct student{
char name[10];  
int roll;  
};  
int main(){
struct student a,*p;
p = &a;  
printf(" ENTER NAME AND ROLL \n ");  
scanf("%s%d", p -> name, &p -> roll);  
printf(" NAME = %s \n ", p -> name );  
printf(" ROLL = %d \n ", p -> roll );
}  
 
 
