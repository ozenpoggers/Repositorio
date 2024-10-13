#include <stdio.h>
int main(){
int n1, n2, resultado;
char op;
printf("Digite o primeiro numero:");
scanf("%d", &n1);
printf("Digite o segundo numero:");
scanf("%d", &n2);
printf("Escolha a operacao: ");
scanf(" %c", &op);
switch (op){
case '*':
    resultado = n1*n2;
    printf("Resultado: %d\n", resultado);
    break;
case '/':
    resultado = n1/n2;
    printf("Resultado: %d\n", resultado);
    break;
case '+':
    resultado=n1+n2;
    printf("Resultado: %d\n", resultado);
    break;
case '-':
    resultado=n1-n2;
    printf("Resultado: %d\n", resultado);
    break;
default:
    printf("Operacao invalida\n");

}
}
