/*
    Programa que simula una calcualdora de matrices, con opciones para realizar segun se le indique, ademas del uso de funciones
    para el reuso de codigo
*/

#include <stdio.h>
#define REN 2 // constante, asi al cambiar el tamaño de la matriz, todo lo demas de manera automatica se modifica
#define COL 2 // constante

//prototipos de funciones
void eligeOpcion();
void pideMatriz(int a[REN][COL]);
void imprimeMatriz(int a[REN][COL]);
void sumaMatrices(int a[REN][COL],int b[REN][COL]);
void restaMatrices(int a[REN][COL],int b[REN][COL]);
void transpuestaMatriz(int a[REN][COL]);

// variables globales
int C[REN][COL],i,j,k,aux;

// Funcion principal, esta en la que se compila y ejecuta
int main()
{
    int A[REN][COL], B[REN][COL];
    char opcion;
    do
    {
        eligeOpcion();     // se imprime el menu de opciones, que es una funcion aparte
        opcion = getchar();
        switch(opcion)
        {
            case 'a':
                pideMatriz(A);
                pideMatriz(B);
                imprimeMatriz(A);
                imprimeMatriz(B);
                sumaMatrices(A,B);
                imprimeMatriz(C);
                break;
            case 'b':
                pideMatriz(A);
                pideMatriz(B);
                imprimeMatriz(A);
                imprimeMatriz(B);
                restaMatrices(A,B);
                imprimeMatriz(C);
                break;
            case 'c':
                pideMatriz(A);
                pideMatriz(B);
                imprimeMatriz(A);
                imprimeMatriz(B);
                multiplicaMatrices(A,B);
                imprimeMatriz(C);
                break;
            case 'd':
                pideMatriz(A);
                imprimeMatriz(A);
                transpuestaMatriz(A);
                break;
            case 'e':
                break;
            default:
                puts("Opcion no valida\n");
        }
    }
    while(opcion != 'e');
    return 0;
}

// funcion que visualiza el menu de opciones
void eligeOpcion()
{
    puts("\n\t\t\tCALCULADORA DE MATRICES\n");
    puts("Elija una opcion:\n");
    puts("a. Sumar");
    puts("b. Restar");
    puts("c. Multiplicar");
    puts("d. Transpuesta");
    puts("e. Salir");
    puts("Opcion: ");
}

// funcion que pide los valoes de la matriz desde el teclado
void pideMatriz(int a[REN][COL])
{
    printf("Ingrese valores a la matriz\n");
    for(i=0; i<REN; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("Valor [%d] [%d]: \n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
}

// funcion que imprime los valores de la matriz
void imprimeMatriz(int a[REN][COL])
{
     printf("Matriz\n");
    for(i=0; i<REN; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("\t%d",a[i][j]);
        }
        puts("\n");
    }
}

// suma las dos matrices que se pasan como parametros
void sumaMatrices(int a[REN][COL],int b[REN][COL])
{
    puts("Suma de las matrices\n");
    for(i=0; i<REN; i++)
    {
        for(j=0; j<COL; j++)
            C[i][j] = a[i][j] + b[i][j];
    }
}

// resta las dos matrices que se pasan como parametros
void restaMatrices(int a[REN][COL],int b[REN][COL])
{
    puts("Resta de las matrices\n");
    for(i=0; i<REN; i++)
    {
        for(j=0; j<COL; j++)
            C[i][j] = a[i][j] - b[i][j];
    }
}

// funcion que realiza el producto de las dos matrices
void multiplicaMatrices(int a[REN][COL],int b[REN][COL])
{
    puts("Producto de las matrices\n");
    for(i=0; i<REN; i++)
    {
        for(j=COL-1; j>=0; j--)
        {
            C[i][j]=0;
            for(k=0; k<REN; k++)
            {
                C[i][j] = C[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
}

//funcion que hace la transpuesta de la matriz que se pasa como parametro
void transpuestaMatriz(int a[REN][COL])
{
    puts("Matriz transpuesta\n");
    for(i=0; i<COL; i++)
    {
        for(j=0; j<REN; j++)
            printf("\t%d",a[j][i]);
        puts("\n");
    }
}


