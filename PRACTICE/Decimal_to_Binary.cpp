//Decimal to Binary conversion
#include<stdio.h>
#include<math.h>
int main()
{
    //declare variables
    int n,rem, i=0;
    long long binary=0;
    //input a decimal number
    printf("Enter a decimal number:");
    scanf("%d",&n);
    //loop to convert decimal to binary
    while(n!=0)
    {
        rem=n%2;
        binary=binary+rem*(long long )pow(10,i);
        i++;
        n=n/2;
    }
    //print the binary number
    printf("Binary number is %lld",binary);
    return 0;
}