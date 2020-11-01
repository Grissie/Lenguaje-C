#include <stdio.h>
#define p printf
#define s scanf

int i,j;
void ordena(int *const arreglo,const int tam); // const hace que no se pueda modificar los elementos ni tamaño del arreglo
int main(){
    int a[10]={-5,6,8,9,0,-34,123,45,67,23};
    p("Arreglo sin ordenar\n");
    for(i=0; i<10; i++)
        p("\t%d",a[i]);
    p("\n");
    p("Arrelo ordenado\n");
    ordena(a,10);
    for(i=0; i<10; i++)
        p("\t%d",a[i]);
    return 0;
}

void ordena(int *const arreglo,const int tam){
    void intercambia(int *puntero01, int *puntero02); //Prototipo de la funcion, recibe dos apuntadores (direcciones)
    for(i=0; i<tam-1; i++){
        for(j=0; j<tam-1; j++){
            if(arreglo[j]>arreglo[j+1])
            intercambia(&arreglo[j],&arreglo[j+1]); //se pasan direcciones de memoria
        }
    }
}

void intercambia(int *puntero1,int *puntero2){
    int auxiliar=*puntero1;
    *puntero1=*puntero2;
    *puntero2=auxiliar;
}
