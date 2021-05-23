#include <stdio.h>

int main(){

int x = 1, y = 2;

int z = y - x;

printf("Z = %i", z);

x = 5;

y = x + z;

printf("\n");

printf("X, Y, Z = %i, %i, %i respectivamente", x, y, z);

return 0;
}


