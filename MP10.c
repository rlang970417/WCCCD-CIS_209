/**
 *  NAME : Rob Langnau
 *  CLASS : CIS 209 - Intro Prog With C
 *  DATE : 06-JUL-2021
 *  DESC : Machine Problem 10 - C Structures, Unions, and Bit Manip
 *
 *  Exercise 10.8.
 *
 *  (Using Unions) Create union integer with members char c, short s, int i, and long b.
 *   Write a program that inputs values of type char, short, int, and long and stores the values
 *   in union variables of type union integer. Each union variable should be printed as a char,
 *   a short, an int, and a long. Do the values always print correctly?
 *
 *
 */
#include <stdio.h>

union integer {
    char c;
    short s;
    int i;
    long b;
};


int main(void)
{    
    union integer t1, t2, t3, t4;
    
    printf("Enter a char: ");
    scanf("%c", &t1.c);
    fflush(stdin);
    
    printf("Enter a short: ");
    scanf("%hd", &t2.s);
    fflush(stdin);
        
    printf("Enter an integer: ");
    scanf("%d", &t3.i);
    fflush(stdin);
        
    printf("Enter a long: ");
    scanf("%ld", &t4.b);
    fflush(stdin);
    
    printf("\n\nt1.c as a char: %c\n", t1.c);    
    printf("t1.c as a short: %hd\n", t1.c);    
    printf("t1.c as an int: %d\n", t1.c);    
    printf("t1.c as a long: %ld\n", t1.c);
    
    printf("\n\nt2.s as a char: %c\n", t2.s);    
    printf("t2.s as a short: %hd\n", t2.s);    
    printf("t2.s as an int: %d\n", t2.s);    
    printf("t2.s as a long: %ld\n", t2.s);
    
    printf("\n\nt3.i as a char: %c\n", t3.i);    
    printf("t3.i as a short: %hd\n", t3.i);    
    printf("t3.i as an int: %d\n", t3.i);    
    printf("t3.i as a long: %ld\n", t3.i);
    
    printf("\n\nt4.b as a char: %c\n", t4.b);    
    printf("t4.b as a short: %hd\n", t4.b);    
    printf("t4.b as an int: %d\n", t4.b);    
    printf("t4.b as a long: %ld\n", t4.b);
    
    return 0;
}
