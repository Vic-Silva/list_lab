#include <stdio.h>

int main(){

float nMacas;


printf("Digite o numero de macas compradas: \n");
scanf("%f", &nMacas);

if(nMacas < 12){
    printf("Numero de macas: %.2f: ", nMacas);
    printf("\n");
    printf("Valor total: %.2f: ", (nMacas * 1.3));
    }else if(nMacas >= 12){
     printf("Numero de macas: %.2f: ", nMacas);
    printf("\n");
     printf("Valor total: %.2f: ", (nMacas));
    }

return 0;
}

