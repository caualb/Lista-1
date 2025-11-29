#include <stdio.h>
int main(){
float valor;
int prestacao;
float entrada;
int valor_int;

puts("informe o valor da mercadoria");
scanf("%f", &valor);

valor_int = (int) valor;
prestacao = valor_int / 3;
entrada = valor - 2 * prestacao;

printf(" o valor das prestacoes vai ser de %d reais\n", prestacao);
printf("o valor da entrada vai ser de %.2f reais", entrada);


 return 0;
}
