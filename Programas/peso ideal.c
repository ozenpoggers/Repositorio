// Dados o sexo e a altura de uma pessoa, determine seu peso ideal, de acordo com as fórmulas a seguir:
// Para homens o peso ideal é 72.7*altura-58
// Para mulheres o peso ideal é 62.1*altura-44.7

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
    float altura, pesoIdeal;
    char sexo;

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    printf("Digite o sexo (m ou f): ");
    scanf(" %c", &sexo);

    switch (sexo){
        case 'm':
            pesoIdeal = (72.7 * altura) - 58;
            printf("Peso ideal é: %.2f\n", pesoIdeal);
            break;
        case 'f':
            pesoIdeal = (62.1 * altura) - 44.7;
            printf("Peso ideal é: %.2f\n", pesoIdeal);
            break;
        default:
            printf("Opção Inválida\n");
            break;
    }
return 0;

}
