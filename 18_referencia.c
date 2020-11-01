#include <stdio.h>
#include <ctype.h> // manejo de tupper e islower
#define p printf

void convierteMayusculas(char *apuntador); //Prototipo

int main(){
    char cadena[]="Esta es una cadena de caracteres y mi edad es 25 !"; //el nombre decualquier arreglo es un apuntador(direccion de memoria)
    p("Cadena antes de la conversion: %s\n",cadena);
    convierteMayusculas(cadena);
    p("\nCadena despues de la conversion: %s\n",cadena);
    return 0;
}

void convierteMayusculas(char *apuntador){
    while(*apuntador != '\0'){
        if(islower(*apuntador)) //si es minuscula
            *apuntador=toupper(*apuntador); //se convierte a mayuscula
        apuntador++;
    }
}
