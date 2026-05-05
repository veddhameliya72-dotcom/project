//Develop a C program that reads a sentence from the user. Create a function to count the occurrences of each vowel in the sentence and display the counts.

#include<stdio.h>
void vowel(){
	int vowel = 0;
	char a[100];
	gets(a);

//	puts(a);
   
   for(int i=0;a[i] != NULL;i++){
   	
   	if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
	   {
   		vowel++;
   		
	   }

   	
   }
   printf("Vowel : %d",vowel);	
}
int main()
{

 vowel();

}
/*

output:
abcd ef gh ij kl m no p qr stu  vwxyz
Vowel : 5

*/