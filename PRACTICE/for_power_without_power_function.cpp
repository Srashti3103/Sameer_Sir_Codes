//WAP FOR POWER WITHOUT USING POW()FUNCTION
#include<stdio.h> 
int main () 
{ 
int num,pow, i , p = 1; 
printf (" ENTER num AND pow \n "); 
scanf("%d%d",&num,&pow); 
for( i = 1 ; i <= pow ; i++) 
{ 
p = p * num ;
}
printf("%d\n",p);
}
