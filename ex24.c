#include <stdio.h>

int main(){

    //considerar dias trabalhados por semana como 6 dias;
    //considerar 24 (6*4 = 24) dias de trabalho por mês;

float extra, salarioPorHora, salarioPorMes, salarioPorSemana, salarioTotal, horasPorDia, horasPorSemana = 40, horasPorMes;

printf("Digite o salario por hora: \n");
scanf("%f", &salarioPorHora);

printf("Digite as horas trabalhadas por mes: \n");
scanf("%f", &horasPorMes);


horasPorDia = horasPorMes / horasPorSemana;

salarioPorSemana = salarioPorHora * horasPorSemana;

salarioPorMes = salarioPorSemana *  4;

salarioTotal = (0.5 * salarioPorMes) + salarioPorMes;

printf("\n");

printf("salario por mes: %.f", salarioPorMes);

printf("\n");

printf("salario total: %.f", salarioTotal);


return 0;
}




