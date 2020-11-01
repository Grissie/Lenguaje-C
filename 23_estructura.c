#include <stdio.h>

struct persona // se define una estructura que tiene 4 campos y esta se toma como otra variable
{
    char nombre[80];
    int edad;
    float peso;
    float altura;
};

int  main()
{
    struct persona empleado1,empleado2; // se declaran dos variables del tipo persona
    struct persona *apuntador=&empleado2; // apuntador que apunta a la direccion memoria de empleado1

    puts("Primer empleado");
    printf("Nombre: ");
    gets(empleado1.nombre); // se guarda el nombre en su campo
    printf("Edad: ");
    scanf("%d",&empleado1.edad); // se guarda el valor en el campo de la estructura
    printf("Peso: ");
    scanf("%f",&empleado1.peso);
    printf("Altura: ");
    scanf("%f",&empleado1.altura);

    puts("Segundo empleado");
    printf("Nombre: ");
    fflush(stdin);
    gets(empleado2.nombre);
    printf("Edad: ");
    scanf("%d",&empleado2.edad);
    printf("Peso: ");
    scanf("%f",&empleado2.peso);
    printf("Altura: ");
    scanf("%f",&empleado2.altura);

    puts("\nDatos del primer empleado");
    printf("Nombre: %s\n",empleado1.nombre);
    printf("Edad: %d\n",empleado1.edad);
    printf("Peso: %.2f\n",empleado1.peso);
    printf("Altura: %.2f\n",empleado1.altura);

    puts("\nDatos del segundo empleado");
    printf("Nombre: %s\n",(*apuntador).nombre);  // (*apuntador) indica que vaya a la direccion y busque el campo deseado
    printf("Edad: %d\n",(*apuntador).edad);
    printf("Peso: %.2f\n",(*apuntador).peso);
    printf("Altura: %.2f\n",(*apuntador).altura);

    return 0;
}

