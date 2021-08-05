/**
 *  NAME : Rob Langnau
 *  CLASS : CIS 209 - Intro Prog With C
 *  DATE : 08-JUN-2021
 *  DESC : Machine Problem 7 - Intro to C Programming
 *
 *  Chapter 7, page 333, Exercise 7.31
 *
 *
 */
#include <stdio.h>

void prtMenu();
double myAdd(double n1, double n2);
double mySub(double n1, double n2);
double myMult(double n1, double n2);
double myDiv(double n1, double n2);

int main(void) 
{
    int usrChoice = 9;
    double n1,n2,solution;

    /**
      * Declare and Init Array of Function Pointers.
      *     https://www.guru99.com/c-function-pointers.html#5
      **/
    double (*myFuncPtr[3])(double,double);
    myFuncPtr[0] = myAdd;
    myFuncPtr[1] = mySub;
    myFuncPtr[2] = myMult;
    myFuncPtr[3] = myDiv;
    
    do
    {
        prtMenu();
        scanf("%d",&usrChoice);
  
        switch(usrChoice)
        {
            case 1: 
                printf("\nGive me a number : ");
                scanf("%lf", &n1);
                printf("\nGive me another number : ");
                scanf("%lf", &n2);
                solution = (*(myFuncPtr[0]))(n1,n2);
                printf("\nCalculating : %.2lf and %.2lf\n", n1,n2);
                printf("\nThe Solution is = %.2f\n", solution);
                break;
            case 2: 
                printf("\nGive me a number : ");
                scanf("%lf", &n1);
                printf("\nGive me another number : ");
                scanf("%lf", &n2);
                solution = (*(myFuncPtr[1]))(n1,n2);
                printf("\nCalculating : %.2lf from %.2lf\n", n2,n1);
                printf("\nThe Solution is = %.2f\n", solution);
                break;
           case 3: 
                printf("\nGive me a number : ");
                scanf("%lf", &n1);
                printf("\nGive me another number : ");
                scanf("%lf", &n2);
                solution = (*(myFuncPtr[2]))(n1,n2);
                printf("\nCalculating : %.2lf and %.2lf\n", n1,n2);
                printf("\nThe Solution is = %.2f\n", solution);
                break;
          case 4: 
                printf("\nGive me a number : ");
                scanf("%lf", &n1);
                do
                {
                    printf("\nGive me another number : ");
                    scanf("%lf", &n2);
       
                    if(n2 == 0)
                        printf("\nError : Divide by Zero!");
                } while(n2 == 0);
                solution = (*(myFuncPtr[3]))(n1,n2);
                printf("\nCalculating : %.2lf by %.2lf\n", n1,n2);
                printf("\nThe Solution is = %.2f\n", solution);
                break;
          default: printf("\nInvalid selection");
                break;
        }
    } while(usrChoice < 1 || usrChoice > 4);
}

void prtMenu()
{
   printf("\n///************ Text Calculator Menu ************\\\\\\\n");
   printf("\tSelect from the following options : ");
   printf("\n1. Add - The sum of two numbers ");
   printf("\n2. Subtract - The difference between two numbers ");
   printf("\n3. Multiply - A set of two numbers ");
   printf("\n4. Divide - A set of two numbers ");
   printf("\n\nEnter your selection : ");
}

double myAdd(double n1, double n2)
{
    return n1 + n2;
}
double mySub(double n1, double n2)
{
    return n1 - n2;
}
double myMult(double n1, double n2)
{
    return n1 * n2;
}
double myDiv(double n1, double n2)
{
    return n1 / n2;
}
