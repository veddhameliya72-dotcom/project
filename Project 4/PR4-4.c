//  Q4. develop a program that develops the given inverted left half trianglr pattern using a nested for loop:

#include<stdio.h>
int main()
{
	int row, column, space;
	for(row=5;row>=1;row--){
// lefts space:		
		for(space=5;space>=row;space--){
			printf("  ");
		}
		for(column=1;column<=row;column++){
			printf("%d ",(row+column)%2);
// [(row+column)%2]  if: sum is odd it prints 1 else 0. 
// column finishes:			
		}
// row finishes:
		printf("\n");
	}
}

/*

output:
0 1 0 1 0
  1 0 1 0
    0 1 0
      1 0
        0

*/