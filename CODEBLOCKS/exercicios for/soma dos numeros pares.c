//Imprimir os números pares até um número digitado pelo usuário

#include <Stdio.h>
#include <Locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
    int numero, i;
    printf("Digite um número: ");
    scanf("%d", &numero);
    for (i = 2; i <= numero; i += 2){
        printf("%d\n", i);
    }
return 0;
}
