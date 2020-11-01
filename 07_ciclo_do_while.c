#include <stdio.h>
#define p printf
#define s scanf
//se ejecuta una vez y al final pregunta por la condicion

int main(){
    int num;
    do{
        p("Ingrese un n%cmero: ",163);
        s("%d",&num);
    }while(num != -1);

    return 0;
}
