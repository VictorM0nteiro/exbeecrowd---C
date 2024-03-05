#include <stdio.h>

int main() {
    double M[12][12];
    int L, i, j;
    char T;
    double soma = 0.0;

    scanf("%d", &L);
    scanf(" %c", &T); // Note o espaço antes do %c para evitar problemas com o caractere de quebra de linha

    // Preenchendo a matriz
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    // Calculando a soma ou média dos elementos na área verde da matriz
    for (j = 0; j < 12; j++) {
        soma += M[L][j];
    }

    // Imprimindo o resultado
    if (T == 'S') {
        printf("%.1lf\n", soma);
    } else if (T == 'M') {
        printf("%.1lf\n", soma / 12.0);
    }

    return 0;
}
