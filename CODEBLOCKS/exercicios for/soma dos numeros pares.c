//Imprimir os n�meros pares at� um n�mero digitado pelo usu�rio

#include <Stdio.h>
#include <Locale.h>

int main(){
setlocale(LC_ALL,"Portuguese");
    int numero, i;
    printf("Digite um n�mero: ");
    scanf("%d", &numero);
    for (i = 2; i <= numero; i += 2){
        printf("%d\n", i);
    }
return 0;
}
