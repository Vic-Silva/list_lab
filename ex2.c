#include <stdio.h>

int main(){

int a = 30, b = 20;

int c = a + b;

printf("C = %i", c);

b = 10;

printf("\n");

printf("B e C = %i e %i respectivamente", b, c);

c = a + b;

printf("\n");

printf("A, B e C = %i, %i, %i respectivamente", a, b,c);

return 0;
}

