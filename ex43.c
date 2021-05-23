#include <stdio.h>
#include <stdbool.h>

int main(){

int idade, anoNacimento, anoIngresso, codEmpregado, tempoTrabalhando;

printf("Digite o ano de nascimento: ");
scanf("%i", &anoNacimento);
printf("\n");

idade = 2021 - anoNacimento;

printf("Digite o ano de Ingresso na empresa: ");
scanf("%i", &anoIngresso);
printf("\n");

tempoTrabalhando = 2021 - anoIngresso;


printf("Digite o codigo do empregado: ");
scanf("%i", &codEmpregado);
printf("\n");



if(idade >=60 && idade < 65){
    if(tempoTrabalhando >= 25){
        printf("Requerer aposentadoria");
    }else if(tempoTrabalhando < 25){
        printf("Não requerer");
    }
}else if(idade >=65){
    if(tempoTrabalhando >= 30){
        printf("Requerer aposentadoria");
    }else if(tempoTrabalhando < 30){
        printf("Não requerer");
    }
}


return 0;
}
















