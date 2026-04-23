// extend the program to count the frequency of each character in string:

#include <stdio.h>

int main()
{
    int n, i, j, count;
    
// aks no. of character:    
    printf("Enter number of characters in your string: ");
    scanf("%d", &n);
    
// aks to enter string:    
    char a[n];
    printf("Enter your string:\n");
    scanf("%s", a);

    for(i = 0; a[i] != '\0'; i++) {
        count = 1;

// checks whether the char is repeated or not and finds position:
        for(j = 0; j < i; j++) {
            if(a[i] == a[j]) {
                break;
            }
        }

// compares position of char with string and if it is repeated than skips the printing part: 
        if(j < i) {
            continue;
        }
// counts frquency:
        for(j = i + 1; a[j] != '\0'; j++) {
            if(a[i] == a[j]) {
                count++;
            }
        }

        printf("%c => %d\n", a[i], count);
    }


}

/*

output:
Enter number of characters in your string: 11
Enter your string:
development
d => 1
e => 3
v => 1
l => 1
o => 1
p => 1
m => 1
n => 1
t => 1

*/
