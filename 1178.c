#include <stdio.h>
    int main(){
        double n, x[100];
        int i;
        scanf("%lf", &n);
        x[0] = n;

        for( i = 0; i < 100; i++){
            x[i] = n;
            n = n/2;
        }

        for ( i = 0; i < 100; i++){
            printf("N[%d] = %.4lf\n", i, x[i]);
        }
        return 0;
    }