#include <stdio.h>
int longitud(const char *cad);

void main(){
    int *apuntadores[5]; // arreglo de 5 apuntadores
    static char cadena[]="Universidad Pontifica de Peru";
    printf("La longitud de la cadena: %s es %d",cadena,longitud(cadena));
}

int longitud(const char *cad){
    int cuenta=0;
    while(*cad++){
        cuenta++;
    }
    return cuenta;
}
