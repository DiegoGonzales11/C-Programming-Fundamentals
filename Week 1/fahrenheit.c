/*-------------------------------------------------
/*	Program Name: Fahrenheit
/*	Author: Gonzales Loayza Pool Diego
/*	Date: 05/09/2020
/*------------------------------------------------*/

#include <stdio.h>

int main(void){
    int fahrenheit, celsius;

    printf("Please enter fahrenheit as an integer: ");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8;
    printf("\n%d fahrenheit is %d ce celsius. \n", fahrenheit, celsius);

    return 0;
}