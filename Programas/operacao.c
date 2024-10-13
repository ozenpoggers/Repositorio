// Dados dois números reais e um caractere (+, -, *, / ) representando uma operação a ser efetuada com eles, calcule e informe o resultado da operação.

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
    float n1, n2, resultado;
    char op;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);

    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    printf("Digite a operação desejada (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op){
        case '+':
            resultado = n1 + n2;
            printf("Resultado: %.1f\n", resultado);
            break;
        case '-':
            resultado = n1 - n2;
            printf("Resultado: %.1f\n", resultado);
            break;
        case '*':
            resultado = n1 * n2;
            printf("Resultado: %.1f\n", resultado);
            break;
        case '/':
            if (n2 != 0){
            resultado = n1 / n2;
            printf("Resultado: %.1f\n", resultado);
            }else{
                printf("Erro: divisão por zero não é permitida\n");
            }break;
        default:
            printf("Operação inválida\n");
            break;

    }
getchar();
return 0;

}
