#include <stdio.h>

int main() {
    float a, b, c, ar, per;
    scanf("%f %f %f", &a , &b , &c);

    ar = (a + b) * c / 2;
    per = a + c + b;

    if ( a+b > c && a+c > b && b+c > a) {  //Lembrar de colocar mais possibilidades//
        printf("Perimetro = %.1f\n", per);
    } else {
        printf("Area = %.1f\n", ar);
    }

    return 0;
}