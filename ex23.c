#include <stdio.h>

int main(){

int inicio, fim, result;

printf("Digite a hora de comeco da partida\n");
scanf("%i", &inicio);

printf("\n");

printf("Digite a hora de fim da partida: \n");
scanf("%i", &fim);

if(fim < inicio){
    result = 24 - (inicio - fim);
    printf("horas de jogo: %i", result);
}else{
    result = (fim - inicio);
    printf("horas de jogo: %i", result);
}


return 0;
}



