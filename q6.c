#include <stdio.h>
int main(){
int candidato;
int branco=0, renata=0, paulo=0, nulo=0, total=0;

puts("escolha o seu candidato");
puts("Renata numero: 7");
puts("Paulo numero: 5");
puts("voto nulo numero: 0");
puts("escolha seu candidato");
scanf("%d", &candidato);

while(candidato>=0){

    if (candidato == 7){
    renata++;
    puts("voce votou na Renata!\n");
    }else if(candidato == 5){
    paulo++;
    puts("voce votou no Paulo!\n");
    }else if(candidato == 0){
    branco++;
    puts("voce votou em branco!\n");
    }else{
    nulo++;
    puts("voce votou nulo!\n");
    }

puts("escolha o seu candidato");
puts("Renata numero: 7");
puts("Paulo numero: 5");
puts("voto nulo numero: 0");
puts("escolha seu candidato");
scanf("%d", &candidato);
}
    total = renata + paulo + branco + nulo;

printf("%d pessoas realizaram a votacao.\n", total);
printf("%d %% das pessoas votaram na renata\n", (renata * 100)/ total);
printf("%d %% das pessoas votaram no paulo\n", (paulo * 100)/total);
printf("%d %% das pessoas votaram em branco\n", (branco * 100)/total);
printf("%d %% das pessoas votaram nulo\n", (nulo * 100)/total);

    if(renata>paulo){
        puts("renata foi eleita");
    }else if(renata<paulo){
        puts("paulo foi eleito");
    }else{
        puts("deu empate!");
    }

    return 0;
}
