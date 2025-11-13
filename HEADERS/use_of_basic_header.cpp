//use of header file baasic.h
#include"Basic.h"
int main(){
	float radius,area;
	printf("ENTER RADIUS\n");
	scanf("%f",&radius);
	area=circle_area(radius);
	printf("AREA OF A CIRCLE = %f\n",area);
}