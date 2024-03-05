#include <stdio.h>
    int main(){
        double m[12][12];
        int c, i , j;
        char t;
        double soma = 0.0;

        scanf("%d", &c);
        scanf(" %c", &t);

        for( i = 0; i < 12; i++){
            for( j = 0; j < 12; j++){
                scanf("%lf", &m[i][j]);
            }
        }

        for( j = 0; j < 12; j++){
            soma += m[i][c];
        }

        if( t == 'S'){
            printf("%.1lf\n", soma);
        }
        else if( t == 'm'){
            printf("%.1lf\n", soma/12);
        }
        return 0;
    }