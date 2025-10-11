// quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d;
	printf("Enter a,b and c :");
	scanf("%f%f%f",&a,&b,&c);
	d= b*b - 4*a*c;
	if(d<0)
	{
		printf("Roots are imaginary");
	}
	else
	{
		float x1=((-b+sqrt(d))/2*a);
		float x2=((-b-sqrt(d))/2*a);
		printf("x = %f",x1);
		printf("x = %f",x2);
	}
}
