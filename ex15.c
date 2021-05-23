#include <stdio.h>

int main()
{

    float celcius, fahrenheit, transicao;

    printf("Digite a temperatura em em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("\n");
    printf("\n");

    transicao = (fahrenheit - 32)/9;

    printf("\n");
    printf("\n");

    celcius = transicao * 5;


    printf("Temperatura em celcius: %.f", celcius);

    return 0;
}






