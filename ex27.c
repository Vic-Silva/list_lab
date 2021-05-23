#include <stdio.h>

int main(){

float estoqueAtual, quantidadeMax, quantidadeMinima, media;

printf("Digite o estoque atual\n");
scanf("%f", &estoqueAtual);

printf("Digite a quantidade maxima em estoque\n");
scanf("%f", &quantidadeMax);

printf("Digite a quantidade minima em estoque\n");
scanf("%f", &quantidadeMinima);

printf("\n");

media = (quantidadeMax + quantidadeMinima) / 2;

if(estoqueAtual >= media){
    printf("'Não efetuar compra");
}else{
    printf("Efetuar compra");
}


return 0;
}





