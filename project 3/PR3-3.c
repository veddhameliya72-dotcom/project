//develop a program to find the sum of a number's first and last digits.

#include <stdio.h>
int main()
{
	int n ,last,first;
	
	printf("enter value:");
	scanf("%d",&n);
	
	last=n%10;printf("last digit: %d\n",last);
	
	while(n>=10){
		n/=10;
		
	}  
	first=n%10;
    printf("first digit: %d\n",first);
	printf("sum of first and last digit is: %d ",first+last);
	

}

/*

output:
enter value:384
last digit: 4
first digit: 3
sum of first and last digit is: 7

*/