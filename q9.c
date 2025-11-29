#include <stdio.h>
int main(){
int a=1;
int b=1;
int prox;
int i;
printf("a sequencia ate o20 termo e: %d %d ", a, b);
for(i=3; i <= 20; i++){
prox = a + b;
printf("%d ", prox);
a = b;
b = prox;
}
printf("\n");



    return 0;
}
