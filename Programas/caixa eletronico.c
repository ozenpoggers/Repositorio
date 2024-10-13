// Dado um número inteiro indicando uma operação num caixa eletrônico, informe a opção correspondente:
// 1 - Saldo, 2 - Extrato, 3 - Saque, 4 - Sair

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
    int op;

    printf("Digite a operação desejada (1 - Saldo, 2 - Extrato, 3 - Saque, 4 - Sair): ");
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
            printf("Opção inválida\n");
            break;
}
return 0;
}
