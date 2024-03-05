#include <stdio.h>
    int main(){
        int n, x, k, i, soma;
        scanf("%d", &n);

        for ( i = 0; i < n; i++){
            scanf("%d", &x);

            for( k = 1; k < x; k++){
                if ( x % k == 0){
                    soma += k;
                }
            }

            if( soma != x){
            printf("%d nao eh perfeito\n", x);
            }
            else {
            printf("%d eh perfeito\n", x);
            }
            soma = 0;
        }
    }