#include <stdio.h>
int main(){
int num, A, B, menor, maior;
puts("entre com o valor A:");
scanf("%d", &A);
puts("entre com o valor B");
scanf("%d", &B);

if(A>B){
    maior=A;
    menor=B;
}else{
    maior=B;
    menor=A;
}
int i=0;
for(num = menor; num <= maior; num++){
        if(num % 3 == 0){
            i++;
        }
    }
printf("a quantidade de numeros divisiveis por 3 nesse intervalo e: %d", i);

    return 0;
}
