#include <stdio.h>
#include <stdbool.h>

int main(){

char nome;
float precoUnitario, total, totalAPagar, quantidadeAdquirida;


printf("Digite a descricao do produto (nome): \n");
scanf("%s", &nome);
printf("\n");


printf("Digite o preco do produto: \n");
scanf("%f", &precoUnitario);
printf("\n");


printf("Digite a quantidade que voce comprou: \n");
scanf("%f", &quantidadeAdquirida);
printf("\n");


total = (quantidadeAdquirida * precoUnitario);

printf("Total a pagar: %f", total);

printf("\n");

if(quantidadeAdquirida <= 5){
    totalAPagar = total - (0.02*total);
    printf("\n");
    printf("Desconto: %f", (0.02*total));
    printf("\n");
    printf("Total a pagar: %2.f", totalAPagar);
}else if(quantidadeAdquirida > 5 && quantidadeAdquirida <= 10){
    totalAPagar = total - (0.03*total);
    printf("\n");
    printf("Desconto: %f", (0.03*total));
    printf("\n");
    printf("Total a pagar: %.2f", totalAPagar);
}else if(quantidadeAdquirida > 10){
    totalAPagar = total - (0.05*total);
    printf("\n");
    printf("Desconto: %f", (0.05*total));
    printf("\n");
    printf("Total a pagar: %.2f", totalAPagar);
}

return 0;
}














