#include <stdio.h>
int main(){
int A, B, maior, menor, somatorio ,num,i;

puts("entre com o valor A:");
scanf("%d", &A);
puts("entre com o valor B:");
scanf("%d", &B);

    if(A>B){
        maior=A;
        menor=B;
    }else if(B>A){
        maior=B;
        menor=A;
    }else{
        puts("opcao invalida!!");
        return 0;
    }

    for(num=menor; num<=maior;num++){
        if(num % 2 == 0){
            somatorio=0;
            for(i=0; i<=num;i++){
                somatorio+=i;
            }
            printf("o somatorio de %d e: %d\n", num, somatorio);
        }
    }

    return 0;
}
