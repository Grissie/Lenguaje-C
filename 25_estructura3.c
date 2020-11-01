/*
    EL PROGRAMA TRUENA CUANDO LLEGA A LA LINEA 77, ESPECIFICAMENTE CUANDO LLEGA A LEER EL VALOR DEL PRECIO DEL DISCO
*/

#include <stdio.h>
#include <string.h> // manejo de cadena de caracteres

#define TAM 3 // constante macro

typedef struct disco
{
    char titulo[40];
    char artista[40];
    int canciones;
    float precio;
    char fechaCompra[40];
}TDisco; // se define la estructura con sus respectivos campos

void leeDatos(TDisco *);  // prototipo de funcion

int i; // variable global

int main()
{
    TDisco disco1,disco2,disco3;
    TDisco *apunt=&disco3;  // se pasa la direccion de memoria de la variable 'disco3' al apuntador
    puts("Pide datos por teclado");
    puts("Titulo");
    gets(disco1.titulo); // otra manera de leer es con 'scanf' y seria: scanf("%s",&(disco1.artista))
    puts("Artista");
    gets(disco1.artista);
    puts("Fecha de compra");
    gets(disco1.fechaCompra);
    puts("No. de canciones");
    scanf("%d",&(disco1.canciones));
    puts("Precio");
    scanf("%f",&(disco1.precio));

    puts("\nImprime datos disco1 con printf");
    printf("Artista: %s\n",disco1.artista);
    printf("Titulo: %s\n",disco1.titulo);
    printf("Canciones: %d\n",disco1.canciones);
    printf("Precio: %.28f\n",disco1.precio);
    printf("Fecha de compra: %s\n",disco1.fechaCompra);

    disco2 = disco1; // es correcto ya que ambas variables son del mismo tipo funciona como int x=6,y; y=x;

    puts("\nImprime datos disco2con printf");
    printf("Artista: %s\n",disco2.artista);
    printf("Titulo: %s\n",disco2.titulo);
    printf("Canciones: %d\n",disco2.canciones);
    printf("Precio: %.28f\n",disco2.precio);
    printf("Fecha de compra: %s\n",disco2.fechaCompra);

    puts("Pedir los datos del disco3 desde el apuntador");
    strcpy(apunt->artista,"Rammstein");
    strcpy(apunt->titulo,"Mutter");
    apunt->canciones=12;
    apunt->precio=350.00;
    strcpy(apunt->fechaCompra,"12-06-2017");

    puts("\nImprime datos disco3 con printf");
    printf("Artista: %s\n",disco3.artista);
    printf("Titulo: %s\n",disco3.titulo);
    printf("Canciones: %d\n",disco3.canciones);
    printf("Precio: %.28f\n",disco3.precio);
    printf("Fecha de compra: %s\n",disco3.fechaCompra);



    TDisco almacen[TAM];
    TDisco *ap=almacen; // apunta a la direccion de memoria del arreglo denominado 'almacen'

    for(i=0; i<TAM; i++)
    {
        printf("\nDatos del alamcen[%d]\n",i+1);
        leeDatos(ap+i); // recorre las posiciones a las que se esta apuntando  ap+0 = 0  ap+1 etc...
    }

    return 0;
}

void leeDatos(TDisco *apun)
{
    puts("Titulo");
    fflush(stdin); // limpiar el buffer
    scanf("%s",(*apun).titulo); // otra manera de guardar el valor en el campo es: p->titulo
    puts("Artista");
    fflush(stdin);
    scanf("%s",(*apun).artista);
    puts("Fecha de compra");
    gets(apun->fechaCompra);
    puts("Canciones");
    scanf("%d",(*apun).canciones);
    puts("Precio");
    fflush(stdin);
    scanf("%f",(*apun).precio);
}

