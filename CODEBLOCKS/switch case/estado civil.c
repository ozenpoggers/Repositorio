//Dada uma letra (S, C, D ou V), informe o estado civil correspondente por extenso (Solteiro, Casado, Divorciado ou Viúvo)

#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

    char estado;

    printf("Qual seu estado civil (ex: s para Solteiro, c para Casado...): ");
    scanf("%c", &estado);

    switch (estado){

    case 's':
    printf("Solteiro\n");
    break;

    case 'c':
    printf("Casado\n");
    break;

    case 'd':
    printf("Divorciado\n");
    break;

    case 'v':
    printf("Viúvo(a)\n");
    break;
return 0;
}


}
