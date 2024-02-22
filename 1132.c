#include <stdio.h>
    int main(){
        int x, y, soma = 0, i, temp = 0;

        scanf("%d %d", &x, &y);

        if (y < x){
            temp = x;
            x = y;
            y = temp;
        }
        
        for(i = x; i <= y; i++){
            if(i % 13 != 0){
                soma+=i;
            }
        }
        printf("%d\n", soma);
        return 0;

    }