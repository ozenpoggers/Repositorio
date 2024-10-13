/*Dado um sal�rio e um percentual de reajuste, calcule o sal�rio reajustado.
Considere que o reajuste ser� dado por um n�mero real entre 0 e 1. Por
exemplo, se o reajuste for de 15%, o usu�rio dever� informar o n�mero 0.15*/

#include <stdio.h>

int main() {
    float salario, reajuste, novo_salario;

    // Solicita o sal�rio atual
    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    // Solicita o percentual de reajuste
    printf("Digite o percentual de reajuste (exemplo: 0.15 para 15%%): ");
    scanf("%f", &reajuste);

    // Calcula o novo sal�rio
    novo_salario = salario * (1 + reajuste);

    // Exibe o novo sal�rio
    printf("O novo salario e: %.2f\n", novo_salario);

    return 0;
}
