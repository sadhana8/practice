/*wap to add subtract multiply and divide two whole number*/
#include<stdio.h>
int main()
{
	int a,b,c;
	float d;
	printf("Enter two whole numbers:\n");
	scanf("%d%d",&a,&b);
		c=a+b;
		printf("\nSum=%d",c);
		c=a-b;
		printf("\nDifference=%d",c);
		c=a*b;
		printf("\nMultiplication=%d",c);
		d=a/b;
		printf("\n	Division=%f",d);
		return 0;
	
}

