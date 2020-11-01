#include <stdio.h>
#define p printf
#define s scanf
#define TAM 5

int i=0; //variable global
void pideArreglo(int A[],int tam); //prototipos de funciones
void imprimeArreglo(int A[],int B[],int tam);

int main(){
    int arregloA[TAM],arregloB[TAM];
    p("Primer arreglo: \n");
    pideArreglo(arregloA,TAM);
    p("\nSegundo arreglo: \n");
    pideArreglo(arregloB,TAM);

    imprimeArreglo(arregloA,arregloB,TAM);
    return 0;
}

void pideArreglo(int A[],int tam){
    for(i=0; i<tam; i++){
        p("Valor [%d]: ",i);
        s("%d",&A[i]);
    }
}

void imprimeArreglo(int A[],int B[],int tam){
    for(i=0; i<tam; i++){
        p("\n");
        p("\t[%d] + \t[%d] = [%d]",A[i],B[i],A[i]+B[i]);
    }
}
