#include <stdio.h>
    int main(){
        int t, n, i , k;
        long long int a = 0, b = 1, c = 0;
        scanf("%d", &t);

        for( i = 0; i < t; i++){
            scanf("%d", &n);

            if(n == 0){
                printf("Fib(%d) = 0\n", n);
            }
            else if( n == 1){
                printf("Fib(%d) = 1\n", n);
            }

            else{

                for( k = 0; k < n; k++){
                    a = b;
                    b = c;
                    c = a + b;
                }

                printf("Fib(%d) = %lld\n", n, c);
                a = 0;
                b = 1;
                c = 0;
            }
        }
        return 0;
    }