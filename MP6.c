/**
 *  NAME : Rob Langnau
 *  CLASS : CIS 209 - Intro Prog With C
 *  DATE : 08-JUN-2021
 *  DESC : Machine Problem 6 - Intro to C Programming
 *
 *  Chapter 6, page 276, Exercise 6.36 
 *
 *
 */
#include <stdio.h>

#define MAX 100

void stringReverse(char* passStr);

int main(void)
{
    char usrStr[MAX];
    
    printf("%s", "Enter a string to reverse: ");
    scanf("%s", usrStr);
    
    printf("Reverse the string : %s\n", usrStr);
    stringReverse(usrStr);
    puts(" ");
    
    return 0;
}

void stringReverse(char* passStr)
{
    // This should support spaces in the string.
    if (*passStr != ' ' && *passStr == '\0')
    {
        return;    // exit function if we are at the terminating character
    }
    else
    {
        // Move character over a subscript. Seems to perform better than for-loop.
        stringReverse(passStr+1);
        
        printf("%c",passStr[0]);
    }
    
}
