//develop a program that finds the length of the string using pointer:

#include<stdio.h>
int main()
{
   char	s[100];
   char *p;
   int lenght = 0;
	gets(s);
	
	p = s;

	for(;*p != NULL;p++){
	lenght++;
	}
 printf("Length  of  the  string  is  : %d",lenght);
}
/*

output:
abcd efg
Length  of  the  string  is  : 8

*/