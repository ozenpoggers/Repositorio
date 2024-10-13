/*Dado um salário e um percentual de reajuste, calcule o salário reajustado.
Considere que o reajuste será dado por um número real entre 0 e 1. Por
exemplo, se o reajuste for de 15%, o usuário deverá informar o número 0.15*/

#include <stdio.h>

int main() {
    float salario, reajuste, novo_salario;

    // Solicita o salário atual
    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    // Solicita o percentual de reajuste
    printf("Digite o percentual de reajuste (exemplo: 0.15 para 15%%): ");
    scanf("%f", &reajuste);

    // Calcula o novo salário
    novo_salario = salario * (1 + reajuste);

    // Exibe o novo salário
    printf("O novo salario e: %.2f\n", novo_salario);

    return 0;
}
