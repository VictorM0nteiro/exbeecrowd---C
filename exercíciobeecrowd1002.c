#include <stdio.h>

int main(){
    float pi = 3.14159;
    float raio;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    printf("A= %.4f\n", pi * raio * raio);

    return 0;
}
