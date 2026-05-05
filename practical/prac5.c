//Implement a C program to print the following pattern using nested for loop:

#include<stdio.h>
int main()
{
	int row, column, space;
	
	for(row=1;row<=5;row++){
		
	 for(space=5; space>row;space--){
			printf("_");
		}
		
		for(column=1;column<=row;column++){
			printf("*");
		}
		printf("\n");
	}
}
/*

output:
____*
___**
__***
_****
*****

*/