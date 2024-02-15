#include <stdio.h>
    int main(){
        int a, b;
        scanf("%d", &a);
        scanf("%d", &b);
        double media = (float)a*(float)b/12;
        printf("%.3lf\n", media);
    }
