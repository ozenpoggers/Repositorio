// Dado um n�mero inteiro indicando uma opera��o num caixa eletr�nico, informe a op��o correspondente:
// 1 - Saldo, 2 - Extrato, 3 - Saque, 4 - Sair

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
    int op;

    printf("Digite a opera��o desejada (1 - Saldo, 2 - Extrato, 3 - Saque, 4 - Sair): ");
    scanf("%d", &op);

    switch (op){
        case 1:
            printf("Saldo\n");
            break;
        case 2:
            printf("Extrato\n");
            break;
        case 3:
            printf("Saque\n");
            break;
        case 4:
            printf("Sair\n");
            break;
        default:
            printf("Op��o inv�lida\n");
            break;
}
return 0;
}
