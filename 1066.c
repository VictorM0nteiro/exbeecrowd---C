#include <stdio.h>
    int main(){
        int i, valor, par = 0, impar = 0, posi = 0, neg = 0;

        for ( i = 0; i < 5; i++){
            scanf("%d", &valor);
            if( valor % 2 == 0 && valor > 0){
                par++;
                posi++;
            }
            
            if ( valor % 2 == 0 && valor < 0){
                par++;
                neg++;
            }
            if ( valor == 0){
                par++;
            }
            if ( valor % 2 != 0 && valor > 0){
                impar++;
                posi++;
            }
            if ( valor % 2 != 0 && valor < 0){
                impar++;
                neg++;
            } 
        }
        printf("%d valor(es) par(es)\n", par);
        printf("%d valor(es) impar(es)\n", impar);
        printf("%d valor(es) positivo(s)\n", posi);
        printf("%d valor(es) negativo(s)\n", neg);
    }