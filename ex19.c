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

media = (nota1 + nota2 + nota3) / 3;

printf("Sua media final: %.f", media);

printf("\n");

if(media >= 6){
    printf("APROVADO");
}else if(media < 6){
    printf("REPROVADO");
}

printf("\n");


return 0;
}

