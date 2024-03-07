#include <stdio.h>
    int main(){
        char op;
        int i, j;
        double m[12][12], soma = 0.0;

        scanf(" %c", &op);

        for( i = 0; i < 12; i++){
            for( j = 0; j < 12; j++){
                scanf("%lf", &m[i][j]);
            }
        }

        for( i = 1; i < 12; i++){
            for( j = 0; j < i; j++){
                soma += m[i][j];
            }
        }

        if( op == 'S'){
            printf("%.1lf\n", soma);
        }
        else if ( op == 'M'){
            printf("%.1lf\n", soma/66); // (144 - 12)/2 = 66;
        }
    }