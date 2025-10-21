 //print number of digit in number 
 #include<stdio.h>
int main()
{
 int l=0;
 int n;
 printf("enter N \n");
 scanf("%d",&n);//2514795
 while(n!=0)
 {
  n = n /10;
  l++;
 }
 	printf("Length =%d",l);
}