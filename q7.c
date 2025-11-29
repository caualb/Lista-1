#include <stdio.h>
int main(){
int A;
int B;
int div;

puts("entre com o valor A");
scanf("%d", &A);
puts("entre com o valor B");
scanf("%d", &B);

    while(B==0){
        puts ("valor invalido!");
        puts("entre com um valor valido:");
        scanf("%d", &B);
    }

    div = A/B;
    printf(" a divisao dos numeros A e B e: %d", div);

    return 0;
}
