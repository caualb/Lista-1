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

for(num = menor; num <= maior; num++){
    if(num % 4 == 0){
    printf("o quandrado de %d e: %d\n", num, num * num);

}
}



    return 0;
}
