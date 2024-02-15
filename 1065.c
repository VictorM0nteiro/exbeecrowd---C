#include <stdio.h>
    int main (){
        int i, par, valor;

        for ( i = 0; i < 5; i++){
            scanf("%d", &valor);
            if ( valor % 2 == 0){
                par++;
            }
        }
        printf("%d valores pares\n", par);

    }