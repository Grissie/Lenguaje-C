#include <stdio.h>
void valores(int *X,int *Y); //puede llevar o no nombre cada parametro
void suma(int X, int Y,int *Z); // pasar dos valores y una referencia
void imprime(int X,int Y,int Z);

int main(){
    int a,b,suma=0;
    valores(&a,&b);
    printf("valores ingresados: %d  y %d\n",a,b);
    suma(a,b,&suma);
    imprime(a,b,suma);
    return 0;
}

void valores(int *X,int *Y){
    printf("Primer valor: ");
    scanf("%d",X);
    printf("Segundo valor: ");
    scanf("%d",Y);
}

void suma(int X,int Y,int *Z){
    *Z=X+Y;
}

void imprime(int X,int Y,int Z){
    printf("%d + %d = %d",X,Y,Z);
}
