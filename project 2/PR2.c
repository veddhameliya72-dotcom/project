#include<stdio.h>
int main()
{
	int marks;
	char ch;
	printf("enter your marks:");
	scanf("%d",&marks);
	
	marks>=90
	?(ch = 'A',printf("Grade A/n")):
	(marks>=80)?(ch = 'B',printf("Grade B\n")):
	(marks>=70)?(ch = 'C',printf("Grade c\n")):
	(marks>=35)?(ch = 'D',printf("Grade D\n")):
	(ch = 'F',printf("Grade F\n"));
	
	switch(ch){
		case 'A':printf("Excellent work");
		break;
		case 'B':printf("Well done");
		break;
		case 'C':printf("Good job");
		break;
		case 'D':printf("You passed");
		break;
		case 'F':printf("Fail");
		break;
     }

  if(ch == 'A'|| ch =='B'|| ch == 'C'|| ch == 'D')printf("congratulations! \n you are eligible for next level.");else	printf("please try  again next time");
}








/*output:

1.
enter your marks:92
Grade A

2.
enter your marks:92
Grade A
Excellent work
3.
enter your marks:95
Grade A
Excellent workcongratulations!
 you are eligible for next level.


*/
