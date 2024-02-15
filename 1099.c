#include <stdio.h>
    int main(){
        int n, i, x, y;
        scanf("%d", &n);
        for( i = 0; i <= n; i++){
            scanf("%d %d", &x, &y);

            // Se x for maior que y, troca os valores
            if ( x > y){
                int temp = x;
                x = y;
                y = temp;
            }
            int sum = 0;

            //Loop de x até y, incluindo x e y
            for (int j = x +1; j < y; j++){
                if ( j % 2 != 0){
                    sum += j;
                }
            }
        
        printf("%d\n", sum);

        }
        return 0;
    }