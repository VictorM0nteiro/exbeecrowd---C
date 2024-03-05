#include <stdio.h>
    int main(){
        int n, x[1000], i, k = 0;
        scanf("%d", &n);

        for( i = 0; i < 1000; i++){
            x[i] = k;
            k++;

            if( k == n ){
                k = 0;
            }
        }
        for( i = 0; i < 1000; i++){
            printf("N[%d] = %d\n", i, x[i]);
        }
        return 0;
    }