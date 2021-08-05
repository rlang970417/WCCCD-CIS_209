/**
 *  NAME : Rob Langnau
 *  CLASS : CIS 209 - Intro Prog With C
 *  DATE : 08-JUN-2021
 *  DESC : Machine Problem 8 - Intro to C Programming
 *
 *  Chapter 8, page 372, Exercise 8.6 
 *
 *
 */
#include <stdio.h>
#include <ctype.h>      // Needed for function 'tolower' and 'toupper'

#define MAX 100

int main()
{      
    char s[MAX];
    
    printf("Enter a line of text: ");
    fgets(s, MAX, stdin);
    
    // If not a terminating char, printf the modified char.
    printf("%s", "\nLower: ");
    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%c", tolower(s[i]));
    }
    puts(" ");

    printf("%s", "Upper: ");
    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%c", toupper(s[i]));
    }
    puts(" ");

    return 0;
}
