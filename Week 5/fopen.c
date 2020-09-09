/*-------------------------------------------------
/*	Program Name: fopen()
/*	Author: Gonzales Loayza Pool Diego
/*	Date: 08/09/2020
/*------------------------------------------------*/

#include <stdio.h>

int main(void){
    FILE *fp;
    char ch, filename[40], mode[4];

    while(1){
        //get the file
        printf("\nEnter a filename: ");
        gets(filename);
        printf("\nEnter a mode (max 3 characters): ");
        gets(mode);

        //open the file
        fp = fopen(filename, mode);
        if (fp != NULL){
            printf("\nSuccessful openning %s in mode %s.\n", filename, mode);
            fclose(fp);
            puts("enter x to exit, any other to continue. ");
            if ((ch = getch()) == 'x')
                break;
            else
                continue;
        }
        else{
            fprintf(stderr, "\nError openning file %s in mode %s.\n", filename, mode);
            puts("enter x to exit, any other to continue. ");
            if ((ch = getch()) == 'x')
                break;
            else
                continue;
        }
    }
    return 0;
}