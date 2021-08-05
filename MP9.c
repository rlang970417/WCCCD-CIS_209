/**
 *  NAME : Rob Langnau
 *  CLASS : CIS 209 - Intro Prog With C
 *  DATE : 06-JUL-2021
 *  DESC : Machine Problem 9 - C Formatted I/O
 *
 *  Exercise 9.8.
 *
 *  (Printing Numbers in Various Field Widths) Write a program to test the results of printing the integer 
 *   value 12345 and the floating-point value 1.2345 in fields of various sizes. What happens when
 *   the values are printed in fields containing fewer digits than the values?
 *
 *
 */
#include <stdio.h>

int main(void)
{
    int i = 12345;
    double j = 1.2345;


    printf("%2d\n",i);
    printf("%5d\n",i);
    printf("%6d\n",i);
    printf("%10d\n",i);
    puts("");
    printf("%2f\n",j);
    printf("%5f\n",j);
    printf("%6f\n",j);
    printf("%10f\n",j);

    return 0;
}
