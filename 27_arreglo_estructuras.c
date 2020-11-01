/*
    PROGRAMA QUE MANEJA UN ARRAY DE TIPO 'STRUCT'
*/

#include <stdio.h>
#define TAM 2 // constante macro

typedef struct{
    char nombre[40];
    int edad;
    float peso;
    float altura;
}Persona;   // define la estructura y sus campos

int main(){
    Persona grupo[TAM]; // se define un grupo de tipo de personas
    int i;
    for(i=0; i<TAM; i++)
    {
        printf("Persona %d\n",i+1);
        printf("Nombre: ");
        fflush(stdin);
        scanf("%[^\n]s",grupo[i].nombre);
        printf("Edad: ");
        scanf("%d",&(grupo[i].edad));
        printf("Altura: ");
        scanf("%f",&(grupo[i].altura));
        printf("Peso: ");
        scanf("%f",&(grupo[i].peso));
    }

    for(i=0; i<TAM; i++)
    {
        printf("\nPersona %d\n",i+1);
        printf("Nombre: %s\n",grupo[i].nombre);
        printf("Edad: %d\n",grupo[i].edad);
        printf("Altura: %.2f\n",grupo[i].altura);
        printf("Peso: %.2f\n",grupo[i].peso);
    }
    return 0;
}
