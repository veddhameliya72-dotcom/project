//  Q3. develop a program that prints the given left half trianlgle pattern using a nested for loops:

#include<stdio.h>
int main()
{
	int row, column,space;
	for(row=5;row>=1;row--){
// lefts space:		
		for(space=1;space<=row;space++){
			printf("  ");
		}
		for(column=row;column<=5;column++){
			printf("%d ",column);
// column finishes:		
		}
// row finishes:		
		    printf("\n");
	}
	
}

/*

output:
        5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5


*/