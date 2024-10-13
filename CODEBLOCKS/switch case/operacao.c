// Dados dois n�meros reais e um caractere (+, -, *, / ) representando uma opera��o a ser efetuada com eles, calcule e informe o resultado da opera��o.

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
    float n1, n2, resultado;
    char op;

    printf("Digite o primeiro n�mero: ");
    scanf("%f", &n1);

    printf("Digite o segundo n�mero: ");
    scanf("%f", &n2);

    printf("Digite a opera��o desejada (+, -, *, /): ");
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
                printf("Erro: divis�o por zero n�o � permitida\n");
            }break;
        default:
            printf("Opera��o inv�lida\n");
            break;

    }
getchar();
return 0;

}
