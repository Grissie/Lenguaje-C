#include <stdio.h>

int main(){
    int num;
    float sueldo;
    char nombre[100];
    printf("\nIngrese su edad: ");
    scanf("%d",&num);
    printf("\nIngrese su nombre completo: ");
    scanf("%s",nombre);
    fflush(stdin);
    printf("\nIngrese su sueldo mensual: ");
    scanf("%f",&sueldo);

    printf("\n");
    printf("----------------------");
    printf("\nEdad: %d",num);
    printf("\nNombre: %s",nombre);
    printf("\nSueldo: %.2f",sueldo);
    printf("\nHola mundo !");
    return 0;
}
