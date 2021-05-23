#include <stdio.h>

int main(){

float fixo, vendas, total;

printf("Digite o salario fixo\n");
scanf("%f", &fixo);

printf("Digite o valor das vendas\n");
scanf("%f", &vendas);

printf("\n");

if(vendas <= 1500){
    total = (0.03 * fixo) + fixo;
    printf("Salario total: %.f", total);
}else if (vendas > 1500){
    total = (0.05 * fixo) + fixo;
    printf("Salario total: %.f", total);
}


return 0;
}




