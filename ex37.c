#include <stdio.h>
#include <string.h>

int main(){

float idadeHomem1, idadeHomem2, idadeMulher1, idadeMulher2;
float homemNovo, homemVelho, mulherNova, mulherVelha;

printf("Escreva a idade do homem 1: ");
scanf("%f", &idadeHomem1);
printf("\n");
printf("Escreva a idade do homem 2: ");
scanf("%f", &idadeHomem2);
printf("\n");

printf("Escreva a idade a mulher 1: ");
scanf("%f", &idadeMulher1);
printf("\n");
printf("Escreva a idade a mulher 2: ");
scanf("%f", &idadeMulher2);
printf("\n");

if(idadeHomem1 > idadeHomem2){
    homemVelho = idadeHomem1;
    homemNovo = idadeHomem2;
}else if(idadeHomem1 < idadeHomem2){
    homemVelho = idadeHomem2;
    homemNovo = idadeHomem1;
}

if(idadeMulher1 > idadeMulher2){
    mulherVelha = idadeMulher1;
    mulherNova = idadeMulher2;
}else if(idadeMulher1 < idadeMulher2){
    mulherVelha = idadeMulher2;
    mulherNova = idadeMulher1;
}

printf("A soma das idades do homem mais velho com a mulher mais nova: \n");
printf("%.f", homemVelho + mulherNova);
printf("\n");

printf("O produto das idades do homem mais novo com a mulher mais velha: \n");
printf("%.f", homemNovo * mulherVelha);

return 0;
}











