//Calcule �ndice de massa corp�rea (IMC) de uma pessoa � igual ao seu peso (em quilogramas) dividido pelo quadrado de sua altura (em metros).

#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
    float peso, altura, imc;

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC � :%.2f\n", imc);
return 0;


}
