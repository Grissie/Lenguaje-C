#include <stdio.h>
#define p printf
#define s scanf

int main(){
    int x=5;
    float y=5.67;
    char letra='H';
    p("%d de un entero\n",sizeof(x));
    p("%d de un flotante\n",sizeof(y));
    p("%d de un entero",sizeof(letra));
    return 0;
}
