
#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    printf("valor A: %i", a);
    printf("\n");
    printf("valor B: %i", b);
    printf("\n");

    printf("fazendo a troca de valores...")    ;
    printf("\n");

    int c = b;

    b = a,
    a = c;

    printf("valor A: %i", a);
    printf("\n");
    printf("valor B: %i", b);

    return 0;
}
