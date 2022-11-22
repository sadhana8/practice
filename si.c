/*A program to find simple interest*/
#include<stdio.h>
int main(){
	float p,t,r,i;
	printf("\n Enter principle,time, and rate:\n");
	scanf("%f%f%f", &p, &t,&r);
	i=(p*t*r)/100;
	printf("Interest= %f",i);
	return 0;
	
	
}
