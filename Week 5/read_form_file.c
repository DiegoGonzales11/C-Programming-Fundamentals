#include <stdio.h>
main()
{

    FILE *myFile;
    myFile = fopen("somenumbers.txt", "r");

    //read file into array
    int numberArray[20];
    int i=0;
    while(feof(myFile) == 0){
        fscanf(myFile, "%d", &numberArray[i]);
        i++;
    }
    /*
    for (i = 0; i < 20; i++)
    {
        fscanf(myFile, "%d", &numberArray[i]);
    }
    */
    for (i = 0; i < 20; i++)
    {
        printf("Number is: %d\n\n", numberArray[i]);
    }


}