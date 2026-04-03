#include <stdio.h>
int main()
{
	float a,b,c,d,e;
	printf("enter base salary:");
	scanf("%f",&a);
	 printf("enter hra");
	 scanf("%f",&b);
	 printf("enter da");
	 scanf("%f",&c);
	 printf("enter ta");
	 scanf("%f",&d);
	 e=a+(a/100.0*b)+(a/100.0*c)+(a/100.0*d);
	 printf("Gross salary is: %f",e);
	 
	
}