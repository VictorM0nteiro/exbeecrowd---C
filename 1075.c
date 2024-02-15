#include <stdio.h>
    int main(){
        int i, n;
        scanf("%d", &n);

        for( i = 1; i <=10000; i++){ // aqui o i tem que ser = 1 e n <= 10000
            if(i%n == 2){
                printf("%d\n", i);
            }
        }
        return 0;
    }