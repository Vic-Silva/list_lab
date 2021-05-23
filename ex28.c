#include <stdio.h>

int main(){

float num;

printf("Digite o numero\n");
scanf("%f", &num);

if(num > 0){
    printf("Positivo");
}else if(num < 0){
    printf("Negativo");
}else if(num == 0){
    printf("Zero");
}


return 0;
}






