#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter temperature in celcius:" );
	scanf("%f",&c);
	f=c*9/5+32;
	printf("Tempreture in fahrenheit=%f", f);
	return 0;
}
