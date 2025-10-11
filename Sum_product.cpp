//print evensum oddsum or product of sums of digits
#include<stdio.h>
int main()
{
// int l=0;
int t=0;
 int n;
 printf("enter N \n");
 
 scanf("%d",&n);//2514795
 
 int evensum=0;
 int oddsum=0;
 
 while(n!=0)
 {
  
  t = n %10;
  printf("%d\n",t);
  
  if(t%2==0)
  {
   evensum=evensum+t;
  }
  else
  {
   oddsum=oddsum+t;
  }
  
  
  n = n /10;
  
  
 }
 
  printf("%d\n",evensum);
 printf("%d\n",oddsum);
   
   printf("---------------");
    printf("%d\n",evensum*oddsum);
   
 
}