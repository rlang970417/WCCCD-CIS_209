/**
 *  NAME : Rob Langnau
 *  CLASS : CIS 209 - Intro Prog With C
 *  DATE : 20-MAY-2021
 *  DESC : Machine Problem 4 - C Program Control
 *
 *  Exercise 4.16.
 *
 *  (Triangle-Printing-Program) Write a program that prints the following
 *  patterns seperately, one below the other. Use for loops to generate the patterns. 
 *  All asterisks (*) should be printed by a single printf statement of the form
 *  printf("%s", "*");
 *
 *  Note: Functions are not introduced until the next chapter but,
 *        the source becomes a mess without the use of functions 
 *        for a program of this size.
 *
 *
 */
#include <stdio.h>

void patternA(int n);
void patternB(int n);
void patternC(int n);
void patternD(int n);

int main(void)
{
    int n = 10;
    puts("(A)");
    patternA(n);
    puts("(B)");
    patternB(n);
    puts("(C)");
    patternC(n);
    puts("(D)");
    patternD(n);
    
    return 0;

}

// Pattern A : Right Triangle Star Pattern
/*
     *
     * *
     * * *
     * * * *
     * * * * *
*/
void patternA(int n)
{
    int i, j;
    
    for (i=0; i<=n-1; i++)  
    {  
        for (j=0; j<=i; j++)   
        {  
            printf("%s", "*");  
        }   
        puts("");   
    }
    puts(""); 
}

// Pattern B : Downward Triangle Star Pattern
/*
   * * * * * 
   * * * * 
   * * * 
   * * 
   *
*/    
void patternB(int n) 
{   
    int i, j; 
    
    for (i=n-1; i>=0 ; i--)
    {
        for (j=0; j<=i; j++)
        {
            printf("%s", "*");
        }
        puts("");
    }
    puts("");
}

//Pattern C : Right down Mirror Star Pattern
/*
    *****
     ****
      ***
       **
        *
*/    
void patternC(int n)
{
    int i, j, k;
    
    for (i=n; i>= 1; i--)  
    {  
        for (j=n; j>i; j--)  
        {  
            printf("%s", " ");  
        }  
        for (k=1;k<=i;k++)  
        {  
            printf("%s", "*");  
        }  
        puts("");  
    } 
    puts("");
}

//Pattern D : Left Triangle Star Pattern
/*
            * 
          * * 
        * * * 
      * * * * 
    * * * * * 
*/
void patternD(int n) 
{   
    int i,x,y,z = 0;
            
    for(i=1;i<n;i++)
    {
        for(x=i;x<=n;x++)
        {
            printf("%s", " ");
        }
        for(y=1;y<=i;y++)
        {
            printf("%s", "*");
        }
        puts("");
    }  
}
