/*-------------------------------------------------
/*	Program Name: Show a simple .txt file
/*	Author: Gonzales Loayza Pool Diego
/*	Date: 08/09/2020   
/*------------------------------------------------*/

#include <stdio.h>

int main(void){
    FILE *flujo = fopen("list.txt", "r"); 
    /*
    se crea una variable de nombre"flujo" 
    que es del tipo "FILE" (es una estructura)
    y se abre el archivo con la funcion fopen()
    los modos son:  -lectura r
                    -escritura w
                    -binario b
    */
    if (flujo == NULL){ //si la asignacion no es correcta devuelve nulo
        perror("Error en la apertura del archivo");
        return 1;
    }

    char caracter;

    while (feof(flujo) == 0 ){  //devuelve 0 mientras no termine el archivo
        caracter = fgetc(flujo);
        printf("%c", caracter);
    }

    fclose(flujo);          //cierra el archivo
    printf("\n\nSe ha leido el archivo correctamente.");

    return 0;
}
