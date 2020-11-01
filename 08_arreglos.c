#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int i=0;
    int numeros[10]; // arreglo de enteros
    float calif[5]={6.57,8.79,5.56,9.50,8.79}; // arreglo de numeros flotantes
    char cadena[100]={'H','o','l','a',' ','m','u','n','d','o'}; // arreglo de caracteres

    //recorrer la cadena de texto e imprimir caracter
    while(cadena[i] != '\0'){
        putchar(cadena[i]);
        i++;
    }
    p("\n");
    for(i=0; i<5; i++)
        p("Calificaci%cn %d: %.2f\n",162,i+1,calif[i]);
    return 0;
}
