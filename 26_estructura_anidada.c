/*
    PROGRAMA QUE MUESTRA EL USO DE ESTRUCTURAS ANIDADAS
*/
#include <stdio.h>

typedef struct // estructura que define la fecha
{
    int dia, mes, anio;
}TFecha;

typedef struct  // estructura que define a una persona
{
    char nombre[20];
    int edad;
    int altura;
    int peso;
    TFecha fecha;
}TPersona;

typedef struct // estructura que define a un empleado
{
    TPersona per;
    int salario;
    int horas;
}TEmpleado;

void pideDatos(TEmpleado *); // prototipos de funcion
void muestraDatos(TEmpleado );

int main()
{
    TEmpleado empleado1;
    pideDatos(&empleado1);
    muestraDatos(empleado1);
    return 0;
}

void pideDatos(TEmpleado *ap)
{
    printf("Nombre\n");
    fflush(stdin);
    scanf("%d",(ap->per.nombre));
    printf("Edad\n");
    fflush(stdin);
    scanf("%d",(ap->per.edad));
    printf("Peso\n");
    fflush(stdin);
    scanf("%d",(ap->per.peso));
    printf("Altura\n");
    fflush(stdin);
    scanf("%d",(ap->per.altura));
    printf("Salario\n");
    fflush(stdin);
    scanf("%d",(ap->salario));
    printf("Horas trabajadas\n");
    fflush(stdin);
    scanf("%d",(ap->horas));
    printf("Fecha\n");
    fflush(stdin);
    scanf("%d-%d-%d",(ap->per.fecha.dia),(ap->per.fecha.mes),(ap->per.fecha.anio));
}

void muestraDatos(TEmpleado ap)
{
    printf("Nombre: %s\n",ap.per.nombre);
    printf("Edad: %d\n",ap.per.edad);
    printf("Peso: %d\n",ap.per.peso);
    printf("Altura: %d\n",ap.per.altura);
    printf("Salario: %d\n",ap.salario);
    printf("Horas trabajadas: %d\n",ap.horas);
    printf("Fecha: &d-%d-%d\n",ap.per.fecha.dia,ap.per.fecha.mes,ap.per.fecha.anio);
}
