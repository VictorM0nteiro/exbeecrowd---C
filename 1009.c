#include <stdio.h>
    int main(){
    char nome[20];
    float a, b;
    scanf("%s", &nome);
    scanf("%f", &a);
    scanf("%f", &b);
    double tot = a + b*0.15;
    printf("TOTAL = R$ %.2lf\n",tot);
    return 0;
    }
