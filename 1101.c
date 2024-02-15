#include <stdio.h>
    int main(){
        int m, n;

        while (1){
            scanf("%d %d", &m , &n);

            // Verifica se algum dos valores é menor ou igual a zero
            if ( m <= 0 || n <= 0){
                break;
            }
            int start = (m < n)? m:n;
            int end = (m > n)?m:n;

            int sum=0;
            printf("%d", start);
            sum += start;

            for ( int i = start + 1; i <= end; i++){
                printf(" %d", i);
                sum += i;
            }

            printf(" Sum=%d\n", sum);
        }

        return 0;
    }