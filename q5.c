#include <stdio.h>
int main (){
int x;
int y;
int maior;

puts("entre com seu numero:");
scanf("%d", &x);
maior=x;

while (x){
maior = (x>maior)?x:maior;
printf("o maior numero e: %d\n", maior);

puts("entre com um numero:");
scanf("%d", &x);

}
puts("adeus!!");
    return 0;
}
