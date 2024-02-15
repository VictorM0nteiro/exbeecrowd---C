#include <stdio.h>
    int main (){
        int i, vp = 0;
        float valor;

        for ( i = 0; i < 6; i++){
            scanf("%f", &valor);

            if ( valor > 0){
                vp++;
            }
        }
        printf("%d valores positivos\n", vp);
    }
