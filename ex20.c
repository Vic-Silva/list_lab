#include <stdio.h>

int main(){

int ano, anoAtual, idade;

printf("Digite o ano que voce nasceu: \n");
scanf("%i", &ano);

printf("Digite o ano atual: \n");
scanf("%i", &anoAtual);

idade = anoAtual - ano;

if(idade >= 18){
    printf("VOCE PODE VOTAR");
}else if(idade < 18){
    printf("VOCE NAO PODE VOTAR");
}

printf("\n");

return 0;
}


