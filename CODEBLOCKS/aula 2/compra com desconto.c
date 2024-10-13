#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
    float compra, desconto, valorDesconto, valorFinal;

    printf("Digite o valor da compra:");
    scanf("%f", &compra);

    printf("Digite o valor do desconto (para 10%% digite 0,10): ");
    scanf("%f", &desconto);

    valorDesconto = compra * desconto;
    valorFinal = compra - valorDesconto;

    printf("Valor com desconto: R$%.2f\n", valorFinal);
    return 0;
}
