/*program to find square root of a given number*/
#include<stdio.h>
#include<math.h>
int main()
{
	float n,s;
	printf("Enter a number:");
	scanf("%f",&n);
	s=sqrt(n);
	printf("Square root of %f is %f ",n,s);
	getch();
}

