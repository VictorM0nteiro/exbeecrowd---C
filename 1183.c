#include <stdio.h>
    int main(){
        char op;
        double m[12][12];
        int i, j;
        double soma = 0.0;

        scanf(" %c", &op );

        for( i = 0; i < 12; i++){
            for( j = 0; j < 12; j++){
                scanf("%lf", &m[i][j]);
            }
        }

        for( i = 0; i < 12; i++){
            for( j = i+1; j < 12; j++){
                soma += m[i][j];
            }
        }

        if( op == 'S'){
            printf("%.1lf\n", soma);
        }
        else if( op == 'M'){
            printf("%.1lf\n", soma/66); // (114 - 12)/2 -> 66
        }
        
        return 0;

    }