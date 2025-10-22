//Decimal to Octal conversion 
#include<stdio.h>
#include<math.h>
int main()
{
    //declare variables
    int n, rem, i=0;
    long long octal=0;
    //input a decimal number
    printf("Enter a decimal number ");
    scanf("%d",&n);
    //loop to convert decimal to octal
    while(n!=0)
    {
        rem=n%8;
        octal=octal+rem*pow(10,i);
        i++;
        n=n/2;
    }
    //primt the octal number
    printf("Octal number is %lld",octal);
    return 0;
}