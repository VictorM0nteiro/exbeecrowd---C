#include <stdio.h>
    int main(){
        int i, j;
        char op;
        double m[12][12], soma = 0;

        scanf("%c", &op);

        for( i = 0; i < 12; i++){
            for( j = 0; j < 12; j++){
                scanf("%lf", &m[i][j]);
            }
        }

        for( i = 1; i <= 10; i++){
            if( i <= 5){
                for( j = 0; j < i; j++){
                    soma += m[i][j];
                }
            }
            else{
                for( j = 0; j < 11 - i; j++ ){
                    soma += m[i][j];
                }
            }
        }

        if ( op == 'S'){
            printf("%.1lf\n", soma);
        }
        else{
            printf("%.1lf\n", soma/30);
        }
    }