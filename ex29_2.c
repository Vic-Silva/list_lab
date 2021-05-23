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
    printf("ultimo: %.f", num);
    printf("\n");
    if(num2 < num3){
    printf("segundo: %.f", num2);
    printf("\n");
    printf("primeiro: %.f", num3);
    printf("\n");
    printf("soma dos dois maiores: %.f", num2 + num3);
    }else{
    printf("segundo: %.f", num3);
    printf("\n");
    printf("primeiro: %.f", num2);
    printf("\n");
    printf("soma dos dois maiores: %.f", num3 + num2);
    }
}

    if(num2 < num3 && num2 < num){
    printf("ultimo: %.f", num2);
    printf("\n");
    if(num3 < num){
    printf("segundo: %.f", num3);
    printf("\n");
    printf("primeiro: %.f", num);
    printf("\n");
    printf("soma dos dois maiores: %.f", num3 + num);
    }else{
    printf("segundo: %.f", num);
    printf("\n");
    printf("primeiro: %.f", num3);
    printf("\n");
    printf("soma dos dois maiores: %.f", num + num3);
    }
}

    if(num3 < num && num3 < num2){
    printf("ultimo: %.f", num3);
    printf("\n");
    if(num2 < num){
    printf("segundo: %.f", num2);
    printf("\n");
    printf("primeiro: %.f", num);
    printf("\n");
    printf("soma dos dois maiores: %.f", num2 + num);
    }else{
    printf("segundo: %.f", num);
    printf("\n");
    printf("primeiro: %.f", num2);
    printf("\n");
    printf("soma dos dois maiores: %.f", num + num2);
    }
}

return 0;
}









