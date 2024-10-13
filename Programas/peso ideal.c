// Dados o sexo e a altura de uma pessoa, determine seu peso ideal, de acordo com as f�rmulas a seguir:
// Para homens o peso ideal � 72.7*altura-58
// Para mulheres o peso ideal � 62.1*altura-44.7

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
            printf("Peso ideal �: %.2f\n", pesoIdeal);
            break;
        case 'f':
            pesoIdeal = (62.1 * altura) - 44.7;
            printf("Peso ideal �: %.2f\n", pesoIdeal);
            break;
        default:
            printf("Op��o Inv�lida\n");
            break;
    }
return 0;

}
