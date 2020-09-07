/*-------------------------------------------------
/*	Program Name: Sine function of X
/*	Author: Gonzales Loayza Pool Diego
/*	Date: 06/09/2020
/*------------------------------------------------*/

#include <stdio.h>
#include <math.h>   //Library to have math functions

int main(void){
    double x;       //Ddeclare the variable X

    printf("Enter a number betwen 0 to 1: ");       //Set the instructions for the user
    scanf("%lf", &x);                               //Get the value of X   

    printf("\nThe sine of your number %lf is:", x); //Print the value of the sin using the 
    printf("\n    sin(%lf) = %lf", x, sin(x));      //mathematical function of math library

    return 0;
}