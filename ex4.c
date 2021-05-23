#include <stdio.h>

int main(){

int a = 10;

int b = a + 1;

a = b + 1;

b = a + 1;

printf("A = %i", a);

a = b + 1;

printf("\n");

printf("A, B = %i, %i respectivamente", a, b);

return 0;
}



