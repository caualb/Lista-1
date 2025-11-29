#include <stdio.h>
int main (){
    int dia;

    do { 
puts("entre com um numero de 1 a 7:");
scanf("%d", &dia);

switch(dia){
    case 1 :
    puts("domingo");
    break;
case 2 :
    puts("segunda-feira");
    break;
case 3 :
    puts("terça-feira");
    break;
case 4 :
    puts("quarta-feira");
    break;
case 5 :
    puts("quinta-feira");
    break;
case 6 :
    puts("sexta-feira");
    break;
case 7 :
    puts("sabado");
    break;
case 0 :
    puts("saindo");
    break;
default:
    puts("dia invalido");
    }

}while(dia!=0);
    return 0;
}
