/*-------------------------------------------------
/*	Program Name: Simple array as parameter
/*	Author: Gonzales Loayza Pool Diego
/*	Date: 07/09/2020
/*------------------------------------------------*/

#include <stdio.h>
#define SIZE 5

double average_grades(int how_many, int grades[]){
    int i;
    double sum = 0.0;

    for (i = 0; i < how_many; i++){
        sum += (*grades + i);
        //sum += grades[i];
        printf("%d \t", (*grades + i));
        printf("%lf \n", sum);
    }
        
    return (sum / how_many);
}

void print_grades(int how_many, int *grades){
    int i;

    printf("I have %d grades\n", how_many);
    for (i = 0; i < how_many; i++)
        printf("%d\t", (*grades + i));
}

int main(void){
    int grades[SIZE] = {78, 67, 92, 83, 88};
    
    print_grades(SIZE, grades);
    printf("\n\n");
    printf("my average is %.2f\n\n", average_grades(SIZE, grades));

    return 0;
}
