/*-------------------------------------------------
/*	Program Name: Pointers
/*	Author: Gonzales Loayza Pool Diego
/*	Date: 07/09/2020
/*------------------------------------------------*/

#include <stdio.h>

int main(void){
    const int SIZE = 5;

    int grades[SIZE] = {78, 67, 92, 83, 88};
    double sum = 0.0;
    double *ptr_to_sum = &sum;
    int i;

    printf("\n my grades are:\n");

    for (i = 0; i < 4; i++)
        printf("%d\t", grades[i]);
    printf("\n\n");

    for (i = 0; i < 5; i++)
        sum = sum + grades[i];  
    printf("my average is %.2f\n\n", sum/5);
    printf("\n\n");

    printf("sum is at %p, or %lu and is %lf\n", ptr_to_sum, ptr_to_sum, *ptr_to_sum);
    printf("grades are at %lu to %lu\n", grades, grades + 5);
    
    return 0;
};
