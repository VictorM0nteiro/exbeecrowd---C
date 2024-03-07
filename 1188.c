#include <stdio.h>
    int main(){
        char op;
        int i, j;
        double m[12][12], soma = 0;

        scanf("%c", &op);

        for( i = 0; i < 12; i++){
            for( j = 0; j < 12; j++){
                scanf("%lf", &m[i][j]);
            }
        }

        for ( i = 7; i < 12; i++){
            for ( j = 11 - i + 1; j <= i - 1; j++){
                soma += m[i][j];
            }
        }

        if( op == 'S'){
            printf("%.1lf\n", soma);
        }
        else{
            printf("%,1lf\n", soma/30);
        }
        return 0;
    }