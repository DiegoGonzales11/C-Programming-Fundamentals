/*-------------------------------------------------
/*	Program Name: Circle
/*	Author: Gonzales Loayza Pool Diego
/*	Date: 04/09/2020   
/*------------------------------------------------*/

#include <stdio.h>
#define	PI	3.1416
int main(void){
    double area = 0, radius = 0;
    printf("Enter the radius: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("radius of %lf meters; area id %lf sq. meters\n", radius, area);
    
    return 0;
}