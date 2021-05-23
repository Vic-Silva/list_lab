#include <stdio.h>
#include <string.h>

int main(){

int codTentativa, senhaTentativa;
int codCorreto = 1234;
int senhaCorreta = 9999;

printf("Digite seu codigo de usuario: ");
scanf("%i", &codTentativa);

printf("\n");

if(codCorreto != codTentativa){
    printf("USUARIO INVALIDO: ");
}else if (codCorreto == codTentativa){
printf("\n");

printf("Digite sua senha: ");
scanf("%i", &senhaTentativa);

if(senhaCorreta == senhaTentativa){
    printf("Acesso permitido");
}else if(senhaTentativa != senhaCorreta){
    printf("SENHA INCORRETA");
}

}

return 0;
}












