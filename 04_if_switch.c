#include<stdio.h>
#define p printf
#define s scanf

void main(){
    char dia;
    p("Ingrese una letra: \n");
    s("%c",&dia);
    switch(dia){
    case 'd':
    case 'D':
        p("Hoy es DOMINGO\n");
        break;
    case 'l':
    case 'L':
        p("Hoy es LUNES\n");
        break;
    case 'm':
    case 'M':
        p("Hoy es MARTES\n");
        break;
    case 'n':
    case 'N':
        p("Hoy es MI%CRCOLES\n",144);
        break;
    case 'j':
    case 'J':
        p("Hoy es JUEVES\n");
        break;
    case 'v':
    case 'V':
        p("Hoy es VIERNES\n");
        break;
    case 's':
    case 'S':
        p("Hoy es S%CBADO\n",181);
        break;
    default:
        p("Usted ingreso %c\n",dia);
        break;
    }
}
