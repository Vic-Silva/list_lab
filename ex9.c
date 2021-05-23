#include <stdio.h>

int main()
{
    float l, h;

    printf("Digite a largura: \n");
    scanf("%f", &l);

    printf("Digite a altura: \n");
    scanf("%f", &h);

    printf("\n");

    float area = l * h;

    printf("Area: %.f", area);


    return 0;
}
