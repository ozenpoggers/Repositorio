/*Dados o valor de uma compra e o percentual de desconto, calcule o valor a
ser pago. Considere que o valor do desconto é um número real entre 0 e 1.
*/

#include <stdio.h>
int main(void) {
    float valor_compra,percentual_desconto,valor_final,desconto;

    //solicita o valor da compra
    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    //qual o percentual do desconto
    printf("Digite o percentual de desconto (exemplo: 0.20 para 20%%): ");
    scanf("%f", &percentual_desconto);

    //calculo do valor do desconto
    desconto = valor_compra * percentual_desconto;

    //calculo do valor final
    valor_final = valor_compra - desconto;

    //informa o valor final da compra
    printf("O valor final a ser pago: %.2f\n", valor_final);

return 0;

}
