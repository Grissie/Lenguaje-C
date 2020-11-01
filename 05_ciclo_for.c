#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int numeros[10],i;
    p("Ingrese d%cgitos\n",161);
    for(i=0; i<10; i++){
        p("N%cmero %d: ",163,i+1);
        s("%d",&numeros[i]);
    }

    p("\n\nIngresaste los n%cmeros\n",163);
    for(i=0; i<10; i++)
        p("%d\n",numeros[i]);
    return 0;
}
