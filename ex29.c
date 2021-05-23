#include <stdio.h>

int main(){

float num, num2, num3;

printf("Digite o primeiro numero\n");
scanf("%f", &num);

printf("Digite o segundo numero\n");
scanf("%f", &num2);

printf("Digite o terceiro numero\n");
scanf("%f", &num3);

if(num < num2 && num < num3){
    if(num2 < num3){
    printf("\n");
    printf("maior: %.f", num3);
    }else{
    printf("maior: %.f", num2);
    printf("\n");
    }
}

if(num2 < num3 && num2 < num){
    if(num3 < num){
    printf("\n");
    printf("maior: %.f", num);
    }else{
    printf("\n");
    printf("maior: %.f", num3);
    }
}

if(num3 < num && num3 < num2){
    if(num2 < num){
    printf("maior: %.f", num);
    }else{
    printf("\n");
    printf("maior: %.f", num2);
    }
}

return 0;
}








