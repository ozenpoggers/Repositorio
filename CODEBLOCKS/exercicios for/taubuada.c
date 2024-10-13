// Dado um número inteiro, exiba a sua tabuada.

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
    int numero, contador, resultado;

    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("\nTrabuada do: %d \n\n", numero);

    for (contador = 1; contador <= 10; contador +=1){
        resultado = numero * contador;
        printf("%d x %2d = %3d\n", numero, contador, resultado);

        }
return 0;
}
