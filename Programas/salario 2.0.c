#include <stdio.h>

int main() {
    float s,r,ns;

    //solicita o salario atual
    printf("Digite o salario atual:");
    scanf("%f", &s);

    //solicita o valor do reajuste
    printf("Digite o percentual de reajuste (exemplo: para 15%% informe 0.15): ");
    scanf("%f", &r);

    //calcula o novo salario
    ns = s *(1 + r);

    //mostrar o valor do novo salario
    printf("O novo salario e: %.2f\n", ns);

return 0;
}
