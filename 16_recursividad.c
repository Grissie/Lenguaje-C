#include <stdio.h>
#define p printf
#define s scanf
//La recursividad es llamarse asi mismo

long factorial(long x){
    if(x<=1)
        return 1;
    else
        return(x*factorial(x-1));
}

int main(){
    int i;
    for(i=0; i<=10; i++){
        p("%2d! = %d\n",i,factorial(i));
    }
    return 0;
}
