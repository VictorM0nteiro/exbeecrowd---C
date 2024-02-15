#include <stdio.h>
    int main(){
        char t;
        int n, C, R, S, soma, k;
        C = 0, R = 0, S = 0, soma = 0;
        scanf("%d", &n);

        while(n--){
            scanf("%d %c", &k, &t);
            soma += k;
            if ( t == 'C'){
                C += k;
            }
            else if ( t == 'R' ){
                R += k;
            }
            else if ( t == 'S'){
                S += k;
            }
        }

        printf("Total: %d cobaias\n", soma);
        printf("Total de coelhos: %d\n", C);
        printf("Total de ratos: %d\n", R);
        printf("Total de sapos: %d\n", S);
        printf("Percentual de coelhos: %.2f %%\n", ((float)C*100)/soma);
        printf("Percentual de ratos: %.2f %%\n", ((float)R*100)/soma);
        printf("Percentual de sapos: %.2f %%\n", ((float)S*100)/soma);

        return 0;

        
    }