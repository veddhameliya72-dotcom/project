//  Q2. develop a prgram that prints the given floyd's triangle pattern using nested for loops:

#include<stdio.h>
int main()
{
		int row,column,num=10;
	for(row=1;row<=4;row++){
		for(column=1;column<=row;column++){
		 num++;
		 printf("%d ",num);
// column finishes:
		}
// row finishes:		
		printf("\n");
	}
}

/*

output:
11
12 13
14 15 16
17 18 19 20

*/
