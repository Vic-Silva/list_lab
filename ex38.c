#include <stdio.h>
#include <string.h>

int main(){

float kgMorango, kgMaca, totalMorango, totalMaca, totalKg, totalValor;

printf("Digite quantos quilos de morango comprou: ");
scanf("%f", &kgMorango);
printf("\n");

printf("Digite quantos quilos de maca comprou: ");
scanf("%f", &kgMaca);
printf("\n");

totalKg = kgMaca + kgMorango;

if(kgMorango > 5){
    totalMorango = kgMorango * 2.20;
    printf("\n");
}else if(kgMorango <= 5){
    totalMorango = kgMorango * 2.50;
    printf("\n");
}

if(kgMaca > 5){
    totalMaca = kgMaca * 1.50;
    printf("\n");
}else if(kgMaca <= 5){
    totalMaca = kgMaca * 1.80;
    printf("\n");
}

totalValor = totalMaca + totalMorango;

if(totalKg > 8 || totalValor > 25){
    printf("Valor total: %.2f", totalValor-(0.1*totalValor));
}else{
    printf("Valor total: %.2f", totalValor);
}

return 0;
}











