#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");

    float salario, reajuste, aumento, novo;

    printf("Digite o sal�rio: ");
    scanf("%f", &salario);

    printf("Digite o reajuste (ex: para 15%% coloque 0.15): ");
    scanf("%f", &reajuste);

    aumento = salario * reajuste;
    novo = salario + aumento;

    printf("Sal�rio reajustado: R$%.2f\n", novo);

    return 0;
}
