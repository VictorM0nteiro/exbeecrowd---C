#include <stdio.h>
    int main(){
        int n, i;
        scanf("%d", &n);

        if( n > 5 && n < 2000){
            for ( i = 2; i <= n; i+=2){
                printf("%d^2 = %lld\n", i, (long long)i*i );
            }
        }
        return 0;
    }