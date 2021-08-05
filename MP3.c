/**
 *  NAME : Rob Langnau
 *  CLASS : CIS 209 - Intro Prog With C
 *  DATE : 20-MAY-2021
 *  DESC : Machine Problem 3 - Structured Program Development
 *
 *  Exercise 3.24.
 *
 *  (Tabular Output) Write a program that uses looping to print the following
 *   table of values. Use the tab escape sequence, \t, in the printf statement 
 *   to seperate the columns with tabs.
 *
 *
 */
/**
 *
 */
#include <stdio.h>

int main(void)
{
    // Print header to STDOUT. Make use of tabular columns.
    printf("\n%s\t%s\t%s\t%s\n", "N", "10*N", "100*N", "1000*N");

    for(size_t i=1; i<=10; i++)
    {
        // Loop over counter. Multiply counter by 10,100, and 1000. Print to STDOUT
        printf("\n%u \t %u \t  %u \t %u", i,i*10,i*100,i*1000); 
        /* 
           The following would improve the UX of the program. 
           It conflicts with the requirements though.
        */
        // printf("\n%u \t %3u \t  %4u \t %5u", i,i*10,i*100,i*1000); 
    }
    puts("");

    return 0;
}
