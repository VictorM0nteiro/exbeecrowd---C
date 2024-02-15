#include <stdio.h>
    int main(){
        int cont = 1, entrada;

        scanf("%d", &entrada);
        if(entrada % 2 == 0){
            entrada = entrada - 1;
        }
        for ( cont; cont <= entrada; cont+=2){
            printf("%d\n", cont);
        }
        return 0;
    }