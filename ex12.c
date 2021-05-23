#include <stdio.h>

int main()
{

    float salario, reajuste; //p significa porcentagem

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("\n");
    printf("\n");

    printf("Digite o percentual de reajuste em porcentagem:");
    scanf("%f", &reajuste);

    printf("\n");
    printf("\n");

    //porcentagens

    salario =  salario + (salario * (reajuste/100));
    printf("Salario + reajuste: %.f", salario);

    printf("\n");
    printf("\n");

    return 0;
}



