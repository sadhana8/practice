/*program to find power of a given number*/
#include<stdio.h>
#include<math.h>
int main()
{
	float n,m,p;
	printf("Enter two number:\n");
	scanf("%f%f",&n,&m);
	p=pow(n,m);
	printf("power= %f",p);
	return 0;
}

