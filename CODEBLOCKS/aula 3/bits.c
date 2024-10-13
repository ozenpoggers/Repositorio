//Dado o tamanho de um arquivo (em bits), bem como a velocidade da conexão (em bits por segundo),
//informe o tempo necessário para download do arquivo.

#include <stdio.h>
#include <locale.h>
int main(){
    int bits, velocidade, tempo;

    printf("Digite o tamanho do arquivo em bits:");
    scanf("%d", &bits);

    printf("Digite a velocidade da conexão em bits por segundo: ");
    scanf("%d", &velocidade);

    tempo = bits / velocidade;

    printf("Tempo estimado de download de %.1d segundos\n", tempo);
return 0;

}
