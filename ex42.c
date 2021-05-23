#include <stdio.h>
#include <stdbool.h>

int main(){

float n1, n2, n3, media, mediaAproveitada;

printf("Digite a nota 1: ");
scanf("%f", &n1);
printf("\n");

printf("Digite a nota 2: ");
scanf("%f", &n2);
printf("\n");


printf("Digite a nota 3: ");
scanf("%f", &n3);
printf("\n");

media = (n1 + n2 + n3)/3;

mediaAproveitada = ((n1) + (n2 * 2) + (n3 * 3) + media)/7;

if(mediaAproveitada >=9){
    printf("CONCEITO: A");
}else if(mediaAproveitada >=7.5 && mediaAproveitada < 9){
    printf("CONCEITO: B");
}else if(mediaAproveitada >=6 && mediaAproveitada < 7.5){
    printf("CONCEITO: C");
}else if(mediaAproveitada < 6){
    printf("CONCEITO: D");
}


return 0;
}















