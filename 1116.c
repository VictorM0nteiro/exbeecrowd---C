#include <stdio.h>
    int main(){
       int  n, x, y, i;
       scanf("%d", &n);

       for(i = 0; i < n; i++){
        scanf("%d %d", &x, &y);

        if ( y == 0){
            printf("divisao impossivel\n");
        }
        else {
            float resultado = (float) x/y;
            printf("%.1f\n", resultado);
        }

       }
       return 0;
    }