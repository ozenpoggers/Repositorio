#include <stdio.h>
#include <locale.h>
int main (){
setlocale(LC_ALL, "Portuguese");
    float comprimento, largura, area;
    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);
    printf("Digite a largura: ");
    scanf("%f", &largura);
    area = (comprimento * largura);
    printf("�rea de: %.2f m�\n", area);
return 0;
}
