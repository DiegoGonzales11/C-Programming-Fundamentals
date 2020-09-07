/*-------------------------------------------------
/*	Program Name: Sine and cosine funtions
/*	Author: Gonzales Loayza Pool Diego
/*	Date: 07/09/2020
/*------------------------------------------------*/

#include <stdio.h>
#include <math.h>

int main(void){
    double i;   
    printf("\tX\t|\tCos( x )\t|\tSin( x )");        //print the header of the table
    printf("\n-------------------------------------------------------------");      //print a line division 
    for(i=0; i<=1; i+=0.1){
        printf("\n%lf\t|\t%lf\t|\t%lf", i, cos(i), sin(i));         //print the value of sine and cosine of each input
    }    
    return 0;
}