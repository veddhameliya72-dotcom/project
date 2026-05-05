// claculator

#include<stdio.h>

// function for addtiion:
void add(int a,int b)
{
	printf("Addition :%d\n\n",a+b);
	
}

// function for subtraction:
void sub(int a,int b)
{
 if(a>b){
 	printf("subtraction: %d\n\n",a-b);
 }else{
 	printf("subtraction: %d\n\n",b-a);
 }
	
}

// function for multiplication:
void mul(int a,int b)
{
	printf("multiplication: %d\n\n",a*b);
	
}

// function for division:
void div(int a,int b)
{
  if(a!=0&&b!=0){
  	printf("division of num1/num2: %.2f\n",a/b);
	printf("division of num2/num1: %.2f\n\n",b/a);
	
  }else if(a!=0||b!=0){
  	printf("division: 0\n\n");
  }else
  {
  printf("NOT DEFINED\n\n");
  }
  	
}


// function for remainder:
void rem(int a,int b)
{
	printf("remainder of num1%num2: %d\n",a%b);
	printf("remainder of num2%num1: %d\n\n",b%a);
}

// function for choice:
void choice()
{
// aks which operation do want to perform:
	int ch;
	printf("#MENU#\n");
	printf("*press 1.* for ADDTION\n");
	printf("*press 2.* for SUBTACTION\n");
	printf("*press 3.* for MULTIPLICATION\n");
	printf("*press 4.* for DIVISION\n");
	printf("*press 5.* for REMAINDER\n");
	printf("*press 6.* for EXIT\n");
	
	printf("Enter your choice:\n");
	scanf("%d",&ch);
	
	
	switch (ch){
	
// addtion:	
		case 1:{ 
		int x,y;
		printf("enter two numbers:\n");
		scanf("%d %d",&x,&y);
		add(x,y);
		choice();
			break;
		}
// subtractoin:		
		case 2:{
			int x,y;
		    printf("enter two numbers:\n");
		    scanf("%d %d",&x,&y);
		     
			sub(x,y);
			choice();
			break;
		}
// multiplication:		
		case 3:{
			int x,y;
		    printf("enter two numbers:\n");
		    scanf("%d %d",&x,&y);
						
			mul(x,y);
			choice();
			break;
		}
// division:		
		case 4:{
			int x,y;
		    printf("enter two numbers:\n");
		    scanf("%d %d",&x,&y);
						
			div(x,y);
			choice();
			break;
		}
		
// remainder:		
		case 5:{
			int x,y;
		    printf("enter two numbers:\n");
		    scanf("%d %d",&x,&y);
						
			rem(x,y);
			choice();
			break;
		}
		
// exit:		
		case 6:{
			return;
			break;
		}
	}
}

int main()
{

	choice();
	
}
/*

output:
#MENU#
*press 1.* for ADDTION
*press 2.* for SUBTACTION
*press 3.* for MULTIPLICATION
*press 4.* for DIVISION
*press 5.* for REMAINDER
*press 6.* for EXIT
Enter your choice:
1
enter two numbers:
1 2
Addition :3

#MENU#
*press 1.* for ADDTION
*press 2.* for SUBTACTION
*press 3.* for MULTIPLICATION
*press 4.* for DIVISION
*press 5.* for REMAINDER
*press 6.* for EXIT
Enter your choice:
2
enter two numbers:
1 2
subtraction: 1

#MENU#
*press 1.* for ADDTION
*press 2.* for SUBTACTION
*press 3.* for MULTIPLICATION
*press 4.* for DIVISION
*press 5.* for REMAINDER
*press 6.* for EXIT
Enter your choice:
3
enter two numbers:
2 3
multiplication: 6


*/