#include <stdio.h>
#define p printf
#define s scanf

void main(){
    int i=0,contador=0;
    char cadena[100]={'H','o','l','a',' ','W','e','r','a',',',' ','c','o','m','o',' ','é','s','t','a','s','?'};

    while(cadena[i]!='\0'){
        contador++;
        i++;
    }
    p("Numero de caracteres en la cadena %d",contador);
}
