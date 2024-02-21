#include <stdio.h>

int main() {
    float nota1, nota2;
    int notas_validas = 0;

    while (notas_validas < 2) {
        scanf("%f", &nota1);

        if (nota1 < 0 || nota1 > 10) {
            printf("nota invalida\n");
        } else {
            notas_validas++;

            scanf("%f", &nota2);

            if (nota2 < 0 || nota2 > 10) {
                printf("nota invalida\n");
            } else {
                notas_validas++;
            }
        }
    }

    float media = (nota1 + nota2) / 2;
    printf("media = %.2f\n", media);

    return 0;
}