//Write a C program that uses pointers to swap the values of two integers. Implement a function for the swapping operation. 

#include<stdio.h>
void swap(int *a, int *b)
{
int	swapper;
swapper = *a;
*a =*b;
*b= swapper;
	
}

int main()
{
	int x, y;
 printf("Enter two number: \n");
 scanf("%d%d",&x,&y);
 
  printf("values before swapping: x:%d::y:%d\n",x,y);

  swap(&x, &y);
  
    printf("values after swapping: x:%d::y:%d\n",x,y); 
}
/*

output:
Enter two number:
1 2
values before swapping: x:1::y:2
values after swapping: x:2::y:1

*/