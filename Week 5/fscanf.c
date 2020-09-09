/*-------------------------------------------------
/*	Program Name: fscanf()
/*	Author: Gonzales Loayza Pool Diego
/*	Date: 08/09/2020
/*------------------------------------------------*/

#include <stdio.h>

int main(void){
    float num[5];
    float f1, f2, f3, f4, f5;
    FILE *fp;

    fp = fopen("input.txt", "r");
    if (fp == NULL){
        fprintf(stderr, "Error opening file.");
        exit(1);
    }

    fscanf(fp, "%f %f %f %f %f", &f1, &f2, &f3, &f4, &f5);
    printf("The values are %f, %f, %f, %f and %f\n\n", f1, f2, f3, f4, f5);
    fclose(fp);
    int i;
    for (i = 0; i<5; i++){
        fscanf(fp, "%f", num[i]);
        printf("%f\n",num[i]);
    }
    for (i=0; i<5; i++){
        printf("%f \t", num[i]);
    }

    return 0;
}