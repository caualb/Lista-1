#include <stdio.h>
int main(){
int base =3;
int i;
int resultado=1;

    for(i=0; i<=7;i++){
        printf("%d^%d=%d\n", base, i, resultado);
        resultado = resultado * base;
    }


    return 0;
}
