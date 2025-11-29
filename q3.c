#include <stdio.h>
int main(){
int num;
int fat=1;
int i;

puts("escreva seu numero em hexadecimal:");
scanf("%x", &num);
if(num<0){
    puts("o fatorial nao existe");
}else{

for(i=1; i<=num;i++){
    fat *= i;
}
    printf("o fatorial do numero e: %d", fat);

}


        return 0;
    }
