#include <stdio.h>
int main(){
    int num;

    for (num= 15; num <= 90; num++){
        if(num % 4 == 0){
            printf("o quadrado de %d e: %d\n", num, num * num);

        }

    }

    return 0;
}
