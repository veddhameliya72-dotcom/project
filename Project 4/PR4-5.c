//develop a program that prints the given full pyramid pattern using a nested for loop.


#include<stdio.h>
int main()
{
	int row,column,space;
	for(row=5;row>=1;row--){
		for(space=1;space<=row;space++){
			
			printf("  ");
		}
		for(column=row;column<=5;column++){
			printf("%d ",column);

		}
		for(column=4;column>=row;column--){
			printf("%d ",column);
			}
		printf("\n");
	}
	
}
/*

output:
          5
        4 5 4
      3 4 5 4 3
    2 3 4 5 4 3 2
  1 2 3 4 5 4 3 2 1

*/