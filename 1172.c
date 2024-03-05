#include <stdio.h>
    int main(){
        int x[10], i, a = 0;

        for( i = 0; i < 10; i++){
            scanf("%d", &x[i]);
            if( x[i] <= 0){
                x[i] = 1;
            }
            printf("X[%d] = %d\n", a, x[i]);
            a++;
        }
        return 0;
    }