/*A program to compute area of circle and its circumference*/
#include<stdio.h>
#define pi 3.1416
int main(){
	float radius,area,circum;
	printf("\n Enter the radius of a circle:");
	scanf("%f", &radius);
	area=pi*radius*radius;
	circum= 2*pi*radius;
	printf("\n The area and circumference of the circle with radius %f \t is:%f and %f",radius,area,circum);
	return 0;
	
	
}
