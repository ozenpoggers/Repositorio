// imprimir numeros de 1 a 10

#include <stdio.h>
int main(){
    int numero = 1, contador, resultado;
    for (contador = 1; contador <=10; contador += 1){
        resultado = numero * contador;
        printf("%d\n", resultado);
    }
return 0;
}
