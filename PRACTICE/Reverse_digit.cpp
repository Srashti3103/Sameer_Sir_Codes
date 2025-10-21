//print digit in reverse 
#include<stdio.h>
int main()
{
// int l=0;
int t=0;
 int n;
 printf("enter N \n");
 
 scanf("%d",&n);//2514795
 while(n!=0)
 {
  
  t = n %10;
  printf("%d\n",t);
  n = n /10;
 }
}