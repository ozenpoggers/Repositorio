#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
    float comm, vendas;
    printf("Digite o total da venda: ");
    scanf("%f", &vendas);
    comm = (vendas *10 ) / 100;
    printf("Valor da comiss�o � de: R$%.2f\n", comm);
return 0;
}
