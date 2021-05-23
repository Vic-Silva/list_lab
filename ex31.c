#include <stdio.h>

int main(){

float a, b, c;

printf("Digite o primeiro numero\n");
scanf("%f", &a);

printf("Digite o segundo numero\n");
scanf("%f", &b);

printf("Digite o terceiro numero\n");
scanf("%f", &c);

if(a + c > b && c + b > a && a + b > c){
    printf("FORMOU UM TRIAGULO");
}else{
    printf("NAO FORMOU UM TRIANGULO");
}


return 0;
}










