#include <stdio.h>
    int main (){
        int i, vp = 0;
        double  valor, soma = 0, media;

        for ( i = 0; i < 6; i++){
            scanf("%lf", &valor);
    
            if ( valor > 0.0 ){
                vp++;
                soma = soma + valor; // aqui está o essencial soma = soma + valor
            }
        }
        media = soma / vp; // aqui está o essencial media = soma / vp

        printf("%d valores positivos\n", vp);
        printf("%.1lf\n", media); // aqui está o essencial %.1lf
        return 0;
    }
