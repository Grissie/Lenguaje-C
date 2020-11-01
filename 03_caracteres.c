#include<stdio.h>
#include <stdlib.h>
#define p printf

void main(){
    char letra;
    char nombre[100];

    p("Ingrese su nombre completo: ");
    gets(nombre); // cadena de caracteres

    p("Ingrese una letra: ");
    letra=getchar(); // un solo caracter

    puts(nombre); // imprime una cadena de caracteres
    putchar(letra); // imprime una letra
}
