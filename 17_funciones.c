#include <stdio.h>
#define p printf
#define s scanf

int i,j; //Variables globales

void pideMatriz(int m[][],int x,int y); //Prototipos de funciones
void muestraMatriz();

int main(){
    int fil1,fil2,col1,col2;
    p("Datos de la primera matriz\n");
    p("Numero de filas: ");
    s("%d",&fil1);
    p("Numero de columnas: ");
    s("%d",&col1);
    int matrizA[fil1][col1];
    pideMatriz(matrizA,fil1,col1);

    p("\nDatos de la segunda matriz\n");
    p("Numero de filas: ");
    s("%d",&fil2);
    p("Numero de columnas: ");
    s("%d",&col2);
    int matrizB[fil2][col2];

    return 0;
}

void pideMatriz(int m[][],int x, int y]){
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            p("Valor en [%d][%d]: ",i,j);
            s("%d",&m[i][j]);
        }
    }
}
