// develop a program that checks whether a given string is pallondrome or not without using string function:

#include <stdio.h>
int main()
{
	int n, count=1;
	
// aks number of char for users:	
	printf("Enter number of  character:");
	scanf("%d",&n);
	
// aks strings:	
	char a[n],b[n];
   printf("\nEnter any string:");
	scanf("%s",&a);
	
// prints reverse value in another string:	
	int i,j=0;
	
	for(i=n-1;a[i]>=0;i--){
		b[j]=a[i];
		j++;
	 }
	 
// compares both string:	 
    for(i=0;a[i] != '\0';i++){
    	
    	if(a[i]!=b[i]){
    		count=0;
	}
  }
// prints verdict whether it is pallandrone or not:
	count==1?printf("\npallandrone"):printf("\nnot pallandrone");
}
/*

output:
Enter number of  character:5

Enter any string:nayan

pallandrone
-------------

*/
