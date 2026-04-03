
#include<stdio.h>
int main()
{
	int angle1,angle2,angle3,sum=180;
	printf("enter value of angle1:");
	scanf("%d",&angle1);
	
	printf("enter value of angle2:");
	scanf("%d",&angle2);
	
	angle3=sum-angle1-angle2;
	printf("value of angle three is: %d",angle3);
}