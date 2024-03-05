#include <stdio.h>
    int main(){
        int x[10], y , i, a = 0;
        scanf("%d", &y);

        for( i = 0; i < 10; i++, y *= 2){
            x[i] = y;
            printf("N[%d] = %d\n", a, y);
            a++;
        }
        return 0;
    }