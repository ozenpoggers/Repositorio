//calcular a soma dos numeros de 1 a 100

#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
    int i, soma;
    for (i=1; i<=100;i+=1){
        soma+=i;
    }
    printf("Soma dos n�meros de 1 a 100 �: %d\n", soma);
return 0;
}
