#include <stdio.h>

void imprimeValor();

int main(){
    imprimeValor();
    imprimeValor();
    imprimeValor();
    return 0;
}

void imprimeValor(){
    static int i=0; // valor de la ultima ejecucion
    printf("Valor %d\n",i);
    i++;
}
