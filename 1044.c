#include <stdio.h>
    int main(){
        int a, b;
        scanf("%d %d", &a , &b);

        if( b%a == 0 || a%b == 0){ // % serve utilizar no lugar / quando eu quero utilizar o resto, nesse caso pegará o resto e se for == 0 executará.//
            printf("Sao Multiplos\n");
        }
        else {
            printf("Nao sao Multiplos\n");
        }
    }