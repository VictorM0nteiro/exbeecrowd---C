#include <stdio.h>

int main() {
    double a, b, c, tri, cir, trap, quad, ret;
    scanf("%lf %lf %lf", &a, &b, &c);
    tri = a*c/2;
    cir = 3.14159 * pow(c,2);
    trap = (a+b)*c/2;
    quad = pow(b,2);
    ret = a*b;
    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", quad);
    printf("RETANGULO: %.3lf\n", ret);
    return 0;

}
