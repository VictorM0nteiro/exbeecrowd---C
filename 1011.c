#include <stdio.h>

int main() {
    double raio , vol, pi = 3.14159;
    scanf("%lf", &raio);
    vol = (4/3.0) * pi * pow(raio,3);
    printf("VOLUME = %.3lf\n", vol);
    return 0;
}
