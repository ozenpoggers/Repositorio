#include <stdio.h>
#include <locale.h>

int main() {
    int valor, notas100, notas50, notas20, notas10, notas5, notas2, resto;

    printf("Digite o valor a ser sacado: ");
    scanf("%d", &valor);

    // Calculando o número de notas de 100
    notas100 = valor / 100;
    resto = valor % 100;

    // Calculando o número de notas de 50
    notas50 = resto / 50;
    resto = resto % 50;

    // Calculando o número de notas de 20
    notas20 = resto / 20;
    resto = resto % 20;

    // Calculando o número de notas de 10
    notas10 = resto / 10;
    resto = resto % 10;

    // Calculando o número de notas de 5
    notas5 = resto / 5;
    resto = resto % 5;

    // Calculando o número de notas de 2
    notas2 = resto / 2;
    resto = resto % 2;

    printf("%d de 100\n", notas100);
    printf("%d de 50\n", notas50);
    printf("%d de 20\n", notas20);
    printf("%d de 10\n", notas10);
    printf("%d de 5\n", notas5);
    printf("%d de 2\n", notas2);

    return 0;
}


