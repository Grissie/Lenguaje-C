#include <stdio.h>
#define p printf
#define s scanf

int main(){

    int numeros[10]={4,-8,90,123,45,-56,56,78,34,-120},i=0;
    int max,min,posmax,posmin,aux;
    posmax=i;
    posmin=i;
    max=numeros[0];
    min=numeros[0];
    for(i=0; i<10; i++){
        if(numeros[i]>max){
            aux=numeros[i];
            max=aux;
            posmax=i;
        }
        if(numeros[i]<min){
            aux=numeros[i];
            min=aux;
            posmin=i;
        }
    }
    p("Numero mayor es %d, en la posicion %d\n",max,posmax);
    p("Numero menor es %d, en la posicion %d\n",min,posmin);
    return 0;
}
