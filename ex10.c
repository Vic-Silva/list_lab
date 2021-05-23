#include <stdio.h>

int main()
{
    int idadeEmanos, idadeEmMeses, idadeEmDias;

    printf("Digite a idade em anos: \n");
    scanf("%i", &idadeEmanos);

    printf("Digite a idade em meses: \n");
    scanf("%i", &idadeEmMeses);

    printf("Digite os dias que está com essa idade: \n");
    scanf("%i", &idadeEmDias);

    int idade = (365 * idadeEmanos) + (idadeEmMeses * 30) + idadeEmDias;

    printf("Sua idade em dias: %i", idade);



    return 0;
}

