//Dadas as medidas de uma sala em metros (comprimento e largura), bem como o preço do metro quadrado
//de carpete, informe o custo total para forrar o piso da sala


#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
    float comprimento, largura, area, preco, valorFinal;

    printf("Digite o comprimento da sala em metros: ");
    scanf("%f", &comprimento);

    printf("Digite a largura da sala em metros: ");
    scanf("%f", &largura);

    printf("Digite o preço do carpete por metro: ");
    scanf("%f", &preco);

    area = comprimento * largura;
    valorFinal = preco * area;

    printf("Valor final R$: %.2f\n", valorFinal);
return 0;

}
