#include <stdio.h>

int main()
{

    float total, custoDefabrica, imposto = 45, distribuidor = 28; //p significa porcentagem

    printf("Digite o custo de fabrica: \n");
    scanf("%f", &custoDefabrica);

    total = (custoDefabrica * imposto/100) + (custoDefabrica * distribuidor/28) + custoDefabrica;

    printf("Custo total: %.f",total);


    return 0;
}




