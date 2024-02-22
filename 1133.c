#include <stdio.h>
    int main(){
        int x, y, temp = 0, i;

        scanf("%d %d", &x, &y);

        if(y < x){
            temp = x;
            x = y;
            y = temp;
        }

        for( i = x+1; i < y; i++){
            if (i % 5 == 2 || i % 5 == 3 ){
                printf("%d", i);
            }
        }

    return 0;

    }