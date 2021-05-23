#include <stdio.h>
#include <string.h>

int main(){

float litros;
char tipo_combustivel;

printf("Tipo de combustivel (A para Alcool) (G para gasolina)");
printf("\n");
scanf("%c",&tipo_combustivel);
printf("\n");

printf("Litros: \n");
scanf("%f", &litros);
printf("\n");

if(strcmp(tipo_combustivel, "A") == 0){
    printf("Valor total: %.f", (litros* 2.90));
}else if(strcmp(tipo_combustivel, "G") == 0){
    printf("Valor total: %.f", (litros* 3.30));
}

return 0;
}










