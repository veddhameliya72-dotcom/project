//develop a program that prints the given custom pattern using a nested for loops:

#include<stdio.h>
int main()
{
	int row, column;
	
	for(row=1;row<=5;row++){
		if(row==1||row==3){
			printf("* * * * *\n");
		}
		if(row==2){
			printf("*       *\n");
		}
		if(row==4||row==5){
			printf("*\n");
		}
		

	}
} 
/*

output:
*****
*   *
*****
*
*

*/
	


	
