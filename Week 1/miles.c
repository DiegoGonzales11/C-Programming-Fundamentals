/*-------------------------------------------------
/*	Program Name: Miles
/*	Author: Gonzales Loayza Pool Diego
/*	Date: 05/09/2020
/*------------------------------------------------*/

#include <stdio.h>

int main(void){
    int miles = 26, yards = 385;
    double kilometers;

    kilometers = 1.609 * (miles + yards / 1760.0);
    printf("\nA marathon is %f kilometers.\n", kilometers);

    return 0;
}