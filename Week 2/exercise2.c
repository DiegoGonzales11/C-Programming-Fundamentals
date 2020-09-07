/*-------------------------------------------------
/*	Program Name: Exercise 2
/*	Author: Gonzales Loayza Pool Diego
/*	Date: 06/09/2020
/*------------------------------------------------*/

#include <stdio.h>
#include <math.h>

int main(void){
    double two_pi = 2.0*M_PI;
    double h = 0.1;
    double x;
    for(x=0.0; x<two_pi; x+=h){
        printf("%5.lf: %.15f\n", x, sin(x)*sin(x)+cos(x)*cos(x));
    }
    return 0;
}