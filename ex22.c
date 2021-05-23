#include <stdio.h>

int main(){

float valor1, valor2;

printf("Digite o primeiro valor: \n");
scanf("%f", &valor1);

printf("\n");

printf("Digite o segundo valor: \n");
scanf("%f", &valor2);

printf("\n");

if(valor1 > valor2){
    printf("posicao 1: %.f", valor1);
    printf("\n");
    printf("posicao 2: %.f", valor2);
}else if(valor1 < valor2){
    printf("posicao 1: %.f", valor2);
    printf("\n");
    printf("posicao 2: %.f", valor1);
}

printf("\n");


return 0;
}



