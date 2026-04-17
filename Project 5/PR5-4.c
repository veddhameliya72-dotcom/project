// develop a program to find the sum of row or clumn:

#include<stdio.h>
int main()
{
	int row,n,column,m;
    int sum_row,sum_column;
    int sumr=0,sumc=0;

// asks number of rows and columns for matrix of array from user:
    printf("\nEnter the array's row size: ");
	scanf("%d",&n);
	printf("\nEnter the array's column size: ");
	scanf("%d",&m);


// array[arr] is created according to info given:	
		int arr[n][m];


// aks value for matrix of array[arr] from user:
	printf("\nEnter array's element:");
	for(row=0;row<n;row++){                           	                                    
		for(column=0;column<m;column++){                      
			printf("\na[%d][%d]:",row,column);              
			scanf("%d",&arr[row][column]);           
		}// column                          
	}// row

// asks row no.:
printf("\nEnter row number: ");
scanf("%d",&sum_row);

// prints element of row:
printf("\nElements of row %d are: ",sum_row);
	for(row=0;row<n;row++){                           	                                    
		for(column=0;column<m;column++){                      
		if(row==sum_row){
			printf("%d ",arr[row][column]);
		}           
		}// column                          
	}// row

// prints sum of row:
printf("\nSum of row %d: ",sum_row);
	for(row=0;row<n;row++){                           	                                    
		for(column=0;column<m;column++){                   	
		if(row==sum_row){
			sumr=sumr+arr[row][column];
		}
		}// column                          
	}// row
	printf("%d ",sumr);

// asks column no.:
printf("\n\nEnter column number:");
scanf("%d",&sum_column);

// prints element of column:
printf("\nElements of column %d are: ",sum_column);
	for(row=0;row<n;row++){                           	                                    
		for(column=0;column<m;column++){                      
		if(column==sum_column){
			printf("%d ",arr[row][column]);
		}           
		}// column                          
	}// row

// prints sum of column:
printf("\nSum of column %d: ",sum_column);
	for(row=0;row<n;row++){                           	                                    
		for(column=0;column<m;column++){                   	
		if(column==sum_column){
			sumc=sumc+arr[row][column];
		 }
		}// column                          
	}// row
		printf("%d",sumc);
}

/*

output:
Enter the array's row size: 3

Enter the array's column size: 3

Enter array's element:

a[0][0]:2

a[0][1]:7

a[0][2]:1

a[1][0]:3

a[1][1]:5

a[1][2]:4

a[2][0]:8

a[2][1]:9

a[2][2]:6

Enter row number:0

Elements of row 0 are: 2 7 1
Sum of row 0: 10

Enter column number:2

Elements of column 2 are: 1 4 6
Sum of column 2: 11

*/