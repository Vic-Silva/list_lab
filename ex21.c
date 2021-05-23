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
    printf("MAIOR VALOR, PRIMEIRO: %.f", valor1);
}else if(valor1 < valor2){
    printf("MAIOR VALOR, SEGUNDO: %.f", valor2);
}

printf("\n");


return 0;
}


