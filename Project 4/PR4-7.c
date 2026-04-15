// Q7. develop a program that prints the given custom pattern using a nested for loops:

#include<stdio.h>
int main()
{
	int row, column;
	
	for(row=1;row<=5;row++){
// prints 1st and 3rd row of pattern:
		if(row==1||row==3){
			printf("* * * * *\n");
		}
// prints 2nd row of pattern:		
		if(row==2){
			printf("*       *\n");
		}
// prints 4th and 5th row of pattern:		
		if(row==4||row==5){
			printf("*\n");
		}
	}
} 
/*

output:
* * * * *
*       *
* * * * *
*
*

*/
	


	
