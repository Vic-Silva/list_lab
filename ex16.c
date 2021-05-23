#include <stdio.h>

int main(){

float nota1, nota2, nota3, media;

printf("Digite a primeira nota: \n");
scanf("%f", &nota1);

printf("\n");

printf("Digite a segunda nota: \n");
scanf("%f", &nota2);

printf("\n");

printf("Digite a terceira nota: \n");
scanf("%f", &nota3);

printf("\n");

media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

printf("Sua media final: %.f", media);

return 0;
}
