#include <stdio.h>

void main(){
    int x=5;
    const int y=10; // el contido no se puede modificar
    printf("Valor de x = %d",x);
    int *const p1=&x; //no se puede modificar la direccion a la que apunta
    const int *p2=&y;
    //*p2=50; error al modificar el contenido en la variable
    *p1=3; // si se puede modificar el contenido
    // p1=&y; marca error

}
