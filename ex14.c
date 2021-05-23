#include <stdio.h>

int main()
{

    float salario, salariofixo, comissao, qtCarrosVendidos, vendaEfetuadas, vPc;


     printf("Numero de carros vendidos: \n");
     scanf("%f", &qtCarrosVendidos);

     printf("\n");
     printf("\n");

     printf("Valor total de suas vendas: \n");
     scanf("%f", &vendaEfetuadas);
     vPc = vendaEfetuadas*qtCarrosVendidos;



     printf("\n");
     printf("\n");

     printf("Salario fixo: \n");
     scanf("%f", &salariofixo);

     comissao =  vPc*(0.05);

     salario = salariofixo + comissao;

     printf("\n");
     printf("\n");

     printf("salario final: %f", salario);

    return 0;
}





