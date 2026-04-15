//  Q1.  develop a pattern that prints the given right half triangle pattern using a nested for loops:

#include<stdio.h>
int main()
{
	
	int row,column;
	for(row=41;row<=45;row++){
		for(column=41;column<=row;column++){
			printf("%d ",column);
// column finishes:			
		}
// row finishes:		
		printf("\n");
	}
 } 
 
 /*
 
output:
41
41 42
41 42 43
41 42 43 44
41 42 43 44 45

 
 */