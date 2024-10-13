#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"Portuguese");
    int n, m, obstaculo;
    double fracasso, menorFracasso;
    int caminhoSeguro = 0;

    // Entrada do número de caminhos e obstáculos
    printf("Digite o número de caminhos e o número de obstáculos em cada caminho: ");
    scanf("%d %d", &n, &m);

    // Processar cada caminho
    for (int i = 0; i < n; i++) {
        fracasso = 1.0;  // Inicializa a probabilidade de fracasso para o caminho

        // Entrada dos obstáculos para o caminho atual
        printf("Digite os obstáculos para o caminho %d: ", i + 1);
        for (int j = 0; j < m; j++) {
            scanf("%d", &obstaculo);

            // Calcula a chance de fracasso para o obstáculo atual
            if (obstaculo == 1) {
                fracasso *= 0.10;  // Ponte
            } else if (obstaculo == 2) {
                fracasso *= 0.33;  // Estrada
            } else if (obstaculo == 3) {
                fracasso *= 0.56;  // Túnel
            } else if (obstaculo == 4) {
                fracasso *= 0.85;  // Escada
            }
        }

        // No primeiro caminho, inicializa o menor fracasso
        if (i == 0) {
            menorFracasso = fracasso;
            caminhoSeguro = 1;  // O primeiro caminho é considerado o mais seguro até agora
        }
        // Verifica se o caminho atual tem menor chance de fracasso
        else if (fracasso < menorFracasso) {
            menorFracasso = fracasso;
            caminhoSeguro = i + 1;  // Atualiza o caminho mais seguro
        }
    }

    // Saída do caminho mais seguro
    printf("O caminho mais seguro é o caminho %d\n", caminhoSeguro);

    return 0;
}
