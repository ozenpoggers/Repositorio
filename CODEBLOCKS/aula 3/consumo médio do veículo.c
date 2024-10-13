#include <stdio.h>
#include <locale.h>
int main (){
setlocale(LC_ALL, "Portuguese");
    float km, combustivel, consumo;

    printf("Digite a distancia percorrida: ");
    scanf("%f", &km);

    printf("Digite a quantidade de combustível gasto: ");
    scanf("%f", &combustivel);

    consumo =  km / combustivel;

    printf("O consumo médio do veículo foi de: %.2f km/L\n", consumo);
return 0;
}
