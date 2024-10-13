/*Dados o valor de uma compra e o percentual de desconto, calcule o valor a
ser pago. Considere que o valor do desconto é um número real entre 0 e 1.*/

#include <stdio.h>

int main() {
    float valor_compra, percentual_desconto, valor_desconto, valor_final;

    // Solicita o valor da compra
    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    // Solicita o percentual de desconto
    printf("Digite o percentual de desconto (exemplo: 0.20 para 20%%): ");
    scanf("%f", &percentual_desconto);

    // Calcula o valor do desconto
    valor_desconto = valor_compra * percentual_desconto;

    // Calcula o valor final a ser pago
    valor_final = valor_compra - valor_desconto;

    // Exibe o valor final a ser pago
    printf("O valor a ser pago e: %.2f\n", valor_final);

    return 0;
}

