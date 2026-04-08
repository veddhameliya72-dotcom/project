// develop a program that prints all alphabet from 'a' to 'z' by skipping 3 alphabets usin a do while loop.

#include<stdio.h>
int main()
{
	char i,n;
	printf("enter last alphabet:");
	scanf("%c",&n);
	
	i= 'a';
	
	do{
		printf("%c ",i);
		i++;
	    i++;
			i++;
			i++;
	}while(i<=n);
	
	
}

/*

output:
enter last alphabet:z
a e i m q u y

*/