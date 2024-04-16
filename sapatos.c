#include <stdio.h>

int main()
{
    float salario = 0;
    float comissao = 0;
    float vendas_mes = 0;
    int sapatos = 0;

        printf("\nvamos calcular seu salario,\ndigite o valor (em reais) das vendas no mes: ");
        scanf("%f", &vendas_mes);

        printf("\nagora digite o numero de pares de sapatos vendidos: ");
        scanf("%i", &sapatos);

    comissao = 0.2 * vendas_mes;
    sapatos = 5.0 * sapatos;
    salario = sapatos + comissao;

        printf("\nseu salario do mes e R$%.2f.", salario);

    return 0;
}