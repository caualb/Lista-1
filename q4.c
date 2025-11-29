#include <stdio.h>
int main(){
int pedro=110;
int jose=150;
int anos=0;

while(jose>=pedro){
    jose += 2;
    pedro += 3;
    anos ++;
}
    printf("pedro passou jose em : %d", anos);
    return 0;
}
