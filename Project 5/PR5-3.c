// develop a program to find the transpose matrix of a given 2D array:

#include<stdio.h>
int main()
{
	int row,n,column,m;


// asks number of rows and columns for matrix of array from user:
    printf("\nEnter the number of row: ");
	scanf("%d",&n);
	printf("\nEnter the number of column: ");
	scanf("%d",&m);


// array[arr] is created according to info given:		
		int arr[n][m];


// aks value for matrix of array[arr] from user:
printf("\nEnter array's elements:");
	for(row=0;row<n;row++){                           	                                    
		for(column=0;column<m;column++){                      
			printf("\na[%d][%d]:",row,column);              
			scanf("%d",&arr[row][column]);           
		}// column                          
	}// row


// printd the transpose matrix:	
	printf("\ntranspose matrix:\n");
	for(column=0;column<m;column++){
		for(row=0;row<n;row++){
			printf("%d ",arr[row][column]);
		}
		printf("\n");
	}
}

/*

output:

Enter the number of row: 3

Enter the number of column: 3

Enter array's elements:
a[0][0]:2

a[0][1]:4

a[0][2]:1

a[1][0]:3

a[1][1]:5

a[1][2]:4

a[2][0]:8

a[2][1]:2

a[2][2]:0

transpose matrix:
2 3 8
4 5 2
1 4 0

*/