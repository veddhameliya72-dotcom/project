//Write a C program that prompts the user to enter an integer. Using a loop, calculate and display the factorial of that number.


#include <stdio.h>
int main()
{
	int x, factorial = 1;
	printf("Enter a number:");
	scanf("%d",&x);
	
	for(int i=1;i<=x;i++){
		
		factorial=factorial*i;
	}
	printf("Factorial : %d",factorial);
}
/*

output:
Enter a number:5
Factorial : 120

*/