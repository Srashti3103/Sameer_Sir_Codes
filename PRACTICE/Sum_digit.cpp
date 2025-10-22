//print sum of digit 
#include<stdio.h>
int main()
{
int t=0;
 int n;
 printf("enter N \n");
 
 scanf("%d",&n);//2514795
 int sum =0;
 while(n!=0)
 {
  
  t = n %10;
  sum =sum+t;
  n = n /10;
  
  
 }
 
  printf("%d\n",sum);
}