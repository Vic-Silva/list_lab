#include <stdio.h>

int main()
{
    int brancos, nulos, validos, total;

    float pBrancos, pNulos, pValidos; //p significa porcentagem

    printf("Digite o total de votos brancos: \n");
    scanf("%i", &brancos);

    printf("Digite o total de votos nulos: \n");
    scanf("%i", &nulos);

    printf("Digite o total de votos validos: \n");
    scanf("%i", &validos);

    total = validos + brancos + nulos;
    printf("\n");
    printf("\n");

    printf("Total de votos foi de %i: \n", total);

    //porcentagens
    printf("\n");
    printf("\n");

    pBrancos = (brancos * 100);
    pBrancos = pBrancos / total;
    printf("votos brancos em porcentagem: %.f", pBrancos);

    printf("\n");
    printf("\n");

    pNulos = (nulos * 100);
    pNulos = pNulos / total;
    printf("votos nulos em porcentagem: %.f", pNulos);

    printf("\n");
    printf("\n");

    pValidos = (validos * 100);
    pValidos = pValidos / total;
    printf("votos validos em porcentagem: %.f", pValidos);

    printf("\n");
    printf("\n");

    return 0;
}


