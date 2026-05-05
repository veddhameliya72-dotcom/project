//Create a C program that defines a function to check if a given number is a leap year or not.

#include<stdio.h>

void leap_year()
{
	
	int year;
	printf("Enter a number :");
	scanf("%d",&year);
	
	if(year%4==0){
		printf("leap year");
	}else {
		printf("not a leap year");
	}
}

int main()
{

  leap_year();	
	
}
/**

output:
Enter a number :2024
leap year

/