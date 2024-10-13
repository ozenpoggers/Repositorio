//contar numeros ate 10
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
    int contador = 0;
    while (contador <=10){
        printf("%d\n", contador);
        contador += 1;

    }
    return 0;
}

