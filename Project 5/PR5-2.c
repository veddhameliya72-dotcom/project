// develop a program to find the largest element from the given 2D array:

#include<stdio.h>
int main()
{
	int row,n,column,m;
    int large=0; 

// asks number of rows and columns for matrix of array from user:
    printf("\nEnter the array's row size:  ");
	scanf("%d",&n);
	printf("\nEnter the array's column size: ");
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

// prints largest element:
	for(row=0;row<n;row++){                           	                                    
		for(column=0;column<m;column++){                      
			if(arr[row][column]>large){
			
			large=arr[row][column];}          
		}// column                          
	}// row
 
 printf("Largest element you've entered in array is:%d",large);
}
/*

output:

Enter the array's row size:  3

Enter the array's column size: 3

Enter array's elements:
a[0][0]:2

a[0][1]:7

a[0][2]:1

a[1][0]:3

a[1][1]:5

a[1][2]:4

a[2][0]:8

a[2][1]:9

a[2][2]:0
Largest element you've entered in array is:9


*/