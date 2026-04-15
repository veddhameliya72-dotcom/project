//  Q6. develop a program that prints the given custom numeric pattern using a nested for loop.

#include<stdio.h>
int main()
{
	int row,column,space;
	
	for(row=1;row<=5;row++){
// for triangle:1	 
	 for(column=1;column<=row;column++)
	 {printf("%d",column);
	 }
// for space:	 
	 for(space=5;space>row;space--){
	 	printf("  ");
	 }
// for traingle:2	 
	 for(column=row;column>=1;column--){
	 	printf("%d",column);
// column finishes:	 
	 }
// row finishes:
	 printf("\n");
	}
 } 
 /*
 
 output:
1        1
12      21
123    321
1234  4321
1234554321
 
 */