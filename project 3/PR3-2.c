// develop a program to count the total number of digits in a number.

#include<stdio.h>
int main()
{
	int n ,d = 0;
	
	printf("enter a number:");
	scanf("%d",&n);
	
	while(n!=0){
	    n/=10;	
		d=d+1;
	}
	printf("total number of digits: %d",d);
	
}

/*

output:
enter a number:732
total number of digits: 3

*/
