#include <stdio.h>
int main(){
int num;
int i;

puts("entre com o seu valor:");
scanf("%d", &num);
printf(" a tabuada do %d e:\n", num);
for(i=1; i<=10; i++){
    
    printf(" %d x %d = %d\n", num, i, num*i);


}


    return 0;
}
