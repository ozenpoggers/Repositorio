/*dadas medidas de uma sala em metros (comprimento e largura), informe sua área em metros quadrados*/
#include <stdio.h>
int main (void) {
    float c,l,m;
    printf("Digite o comprimento da sala em metros:");
    scanf("%f", &c);
    printf("Digite a largura da sala em metros:");
    scanf("%f", &l);
    m = c*l;
    printf("Area: %.1f metros quadrados\n", m);
return 0;
}

