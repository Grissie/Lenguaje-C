#include <stdio.h>
#define p printf
#define s scanf

//Prototipos de funciones
int cuadrado(int y);
void intercambio(int *x,int *y);

//Funcion que obtiene el cuadrado de un numero
int cuadrado(int y){
    return y*y;
}

//La funcion hace uso de apuntadores
void intercambio(int *x,int *y){
    int aux;
    aux=*x;
    *x=*y;
    *y=aux;

}
int main(){
    int a=89,b=34;
    int x;
    p("Numero: ");
    s("%d",&x);
    p("Cuadrado de %d es %d\n",x,cuadrado(x));
    p("Valor de a, antes del intercambio: %d\n",a);
    p("Valor de b, antes del intercambio: %d\n",b);
    intercambio(&a,&b);
    p("Valor de a, despues del intercambio: %d\n",a);
    p("Valor de b, despues del intercambio: %d\n",b);
    return 0;
}
