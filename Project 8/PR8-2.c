// develop a program to cubes of given elements of 2D array using pointer with udf:

#include<stdio.h>
int cube(int *a)
{
	return (*a)*(*a)*(*a);
}
int main()
{

   int n;
   printf("Enter array's size :");
   scanf("%d",&n);
	int a[n][n];
	
	for(int i=0;i<n;i++){
		
       for(int j = 0;j<n;j++){
       	
       	printf("a[%d][%d]:",i,j);
       	scanf("%d",&a[i][j]);
	   }
	}
	for(int i=0;i<n;i++){
		
       for(int j = 0;j<n;j++){
       	
	    int	 result = cube(&a[i][j]);
       	
       	printf("%d ",result);
       	
	   }printf("\n");
	}
	
}
/*

output:
Enter array's size :2
a[0][0]:3
a[0][1]:2
a[1][0]:5
a[1][1]:4
27 8
125 64

*/