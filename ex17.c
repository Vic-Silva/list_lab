#include <stdio.h>

int main(){

float valor;

printf("Digite o valor: \n");
scanf("%f", &valor);

if(valor > 10){
    printf("MAIOR QUE 10");
}else  if(valor == 10){
    printf("IGUAL A 10");
}else{
    printf("MENOR QUE 10");
}
return 0;
}

