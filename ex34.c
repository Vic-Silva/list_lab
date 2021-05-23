#include <stdio.h>

int main(){

float x, y;
char resposta;

printf("Digite o primeiro numero\n");
scanf("%f", &x);

printf("Digite o segundo numero\n");
scanf("%f", &y);

float z = (x*y)+5;

if(z<=0){
     resposta = "A";
}else if(z<=100){
     resposta = "B";
}else{
     resposta = "C";
}

printf("\n");

printf("z: %.f", z);

printf("\n");

printf("Resposta: %c", resposta);

return 0;
}











