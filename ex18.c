#include <stdio.h>

int main(){

float valor;

printf("Digite o valor: \n");
scanf("%f", &valor);

if(valor < 0){
    printf("NEGATIVO");
}else  if(valor >= 0){
    printf("POSITTIVO");
}
return 0;
}


