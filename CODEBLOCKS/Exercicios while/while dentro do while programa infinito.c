#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
    float nota1=0, nota2=0, media = 0;
    int resp;
    resp=1;
    while (resp==1){

        printf("Digite a primeira nota: ");
        scanf("%f", & nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2 ;
        printf("M�dia do aluno = %.2f\n", media);

        printf("Digite sua operaco\n1. Continuar \n0. Sair \nSua escolha: ");
        scanf("%d", &resp);

        while (resp !=0 && resp !=1){
            printf("Operaco Invalida!\n 1.Continuar \n 0. Sair \nSua escolha: ");
            scanf ("%d", &resp);
        }
    }
        printf("Programa encerrado.\n");
        return 0;
}
