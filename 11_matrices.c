#include <stdio.h>
#define p printf
#define s scanf

void main(){
    int matriz[4][2],i,j;

    for(i=0; i<4; i++){
        for(j=0; j<2; j++){
            p("Valor en [%d][%d]: ",i,j);
            s("%d",&matriz[i][j]);
        }
    }
    for(i=0; i<4; i++){
        for(j=0; j<2; j++){
            p("\t[%d]",matriz[i][j]);
        }
        p("\n");
    }
}
