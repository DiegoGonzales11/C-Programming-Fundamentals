/*
#include <stdio.h>

#include <stdlib.h>

int main() {

    int i = 0; int j=0; char pruebaCadena [] = "abc";

    while (pruebaCadena[i] != '\0') { printf ("%c", pruebaCadena[i]); i=i+1; }

    printf ("%cUsando \\0: ", '\n');

    while (pruebaCadena[j] != '\0') { printf ("Iteracion %d - ", j+1); j=j+1; }

    printf ("%cUsando sizeof: ", '\n');

    j= 0; //Reinicializar j

    while (j < sizeof(pruebaCadena)) { printf ("Iteracion %d - ", j+1); j=j+1; }

    printf ("\nsizeof pruebaCadena es %d", sizeof(pruebaCadena));

    return 0; // Ejemplo aprenderaprogramar.com

}
*/
#include <stdio.h>

char num[]="12 13 14 15 16 17 18 19 20";
//char *ptr_num;
//char temp[3];
//ptr_num = num;
//int lst[];
int main(void){
    printf("this is the array %s\n\n", num); 
    int i=0, j=0, len; 
    while (num[i] != '\0'){ 
        i++; 
        //printf ("%d\n", i); 
    }
    len = i;
    for(i=0; i<len; i++){
        
    }
    /*
    int i = 0;
    while(*ptr_num != NULL){
        while(*ptr_num != 32){

        }
    }*/
    return 0;
}