#include<stdio.h>
#define p printf // constantes simbolicas
#define s scanf
#define TAM 10

int i; // variable globale

int main(){
    float radio, suma=0;
    double PI = 3.1416F; // constante flotante
    float calif[TAM];
    p("Ingrese el radio: ");
    s("%f",&radio);

    p("\n");
    for(i=0; i<TAM; i++){
        p("Calificaci%cn %d: ",162,i+1);
        s("%f",&calif[i]);
    }

    for(i=0; i<TAM; i++){
        suma+=calif[i];
    }
    p("\n");
    p("-------------------\n");
    p("C%circulo de radio %.2f [u], cuya %crea es %.2f [u^2]\n",161,radio,160,PI*radio*radio);
    p("Promedio %.2f",suma/TAM);

    return 0;
}
