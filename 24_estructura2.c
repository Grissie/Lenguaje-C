#include <stdio.h>
typedef struct persona //usar typedef evitar escribir struct
{
    char nombre[40];
    int edad;
    int altura;
}TPersona; // estructura=coleccion de datos

void imprime(TPersona *); // prototipo de funcion

void main()
{
    TPersona Amigos[]={{"Juan",18,155},{"Ana",22,165},{"Alberto",20,175}};  // se declara un arreglo de tipo 'TPersona'
    TPersona *apuntador=Amigos; // apunta ala direccion de memoria del arreglo 'Amigos'
    int i;
    for(i=0; i<3; i++)
    {
        imprime(apuntador); // funcion que imprime los datos y se le pasa como parametro cada direccion de
        apuntador++;
    }
}

void imprime(TPersona *apu) // funcion que imprime el resultado y cuyo parametro es un apuntador a una estructura
{
    printf("\nNombre: %s\n",(*apu).nombre);
    printf("Edad: %d\n",(*apu).edad);
    printf("Altura: %d\n",(*apu).altura);
}
