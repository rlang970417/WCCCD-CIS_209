/**
 *  NAME : Rob Langnau
 *  CLASS : CIS 209 - Intro Prog With C
 *  DATE : 08-JUN-2021
 *  DESC : Machine Problem 5 - Intro to C Programming
 *
 *  Chapter 5, page 206, Exercise 5.9
 *
 *  Note: Use the following GCC argurments when compiling. Needed for "math.h"
 *       gcc MP5.c -o MP5 -lm 
 *
 *
 */
#include <stdio.h>
#include <math.h>

double calculateCharges(double hours);

int main(void)
{
    double totalCharge, totalHours, charge, car1Hours, car2Hours, car3Hours;
    totalCharge = totalHours = charge = car1Hours = car2Hours = car3Hours = 0.0;
    
	printf("Enter the hours parked for car 1: ");
	scanf("%lf", &car1Hours);
    printf("Enter the hours parked for car 2: ");
	scanf("%lf", &car2Hours);
    printf("Enter the hours parked for car 3: ");
	scanf("%lf", &car3Hours);
	
    // Header
    printf("\n\n\nCar\tHours\tCharge\n");
	
    // Car 1
	charge = calculateCharges(car1Hours);
	totalCharge += charge;
	totalHours += car1Hours;
	printf("1%12.1f%9.2f\n", car1Hours, charge);
    
    // Car 2
	charge = calculateCharges(car2Hours);
	totalCharge += charge;
	totalHours += car2Hours;
	printf("2%12.1f%9.2f\n", car2Hours, charge);
    
    // Car 3
	charge = calculateCharges(car3Hours);
	totalCharge += charge;
	totalHours += car3Hours;
	printf("3%12.1f%9.2f\n", car3Hours, charge);

	// Total
	printf("TOTAL%8.1f%9.2f\n", totalHours, totalCharge);
    
    return 0;
}


/* 
 * calculateCharges : calculate and return a vehicle's
 *          parking charges with PARAM of hours it was parked.
 */
double calculateCharges(double hours)
{	
	double result;
	if (hours <= 3)
		result = 2.00;
	else if (hours >= 11)
		result = 10.00;
	else
		result = 2.00 + ceil((hours - 3)) * 0.50;
	return result;
}
