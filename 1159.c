#include <stdio.h>
    int main(){
        int x, i,k, soma = 0;

        do{
            scanf("%d", &x);
            if( x == 0){
                return 0;
            }
            for(k = 0, i = x; k < 5; i++){

                if( i % 2 == 0){
                    soma += i;
                    k++;
                }
            }
            printf("%d\n", soma);
            soma = 0;
        }
        while( x != 0);
    }