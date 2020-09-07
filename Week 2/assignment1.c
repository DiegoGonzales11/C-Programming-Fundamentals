/*-------------------------------------------------
/*	Program Name: Find the mistake  
/*	Author: Gonzales Loayza Pool Diego
/*	Date: 05/09/2020
/*------------------------------------------------*/



#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
    int radius;
    printf("Enter radius:");
    scanf("%d", &radius);
    printf("volume is : %lf \n\n", 4.0*PI*radius*radius*radius/3.0 );
    return 0;
}