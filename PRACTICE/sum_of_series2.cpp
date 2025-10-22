//1 - x^1 + x^2 - .....+ x^n print_sum_of_this_series
#include<stdio.h> 
#include<math.h> 
int main() 
{ 
int i , num , size  , sum = 1; 
printf(" ENTER num AND size \n "); 
scanf("%d%d" , &num , &size);
for( i = 1 ; i <= size ; i++) 
{ 
sum = sum + pow(-1,i) * pow(num,i) ; 
} 
printf(" ANS = %d\n" , sum); 
} 