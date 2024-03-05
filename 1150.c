#include <stdio.h>
    int main(){
        int x, z, count = 1, soma = 0;
        scanf("%d", &x);

        do{
            scanf("%d", &z);
        }
        while(z<=x);
        soma = x;

        do{
            x++;
            soma+=x;
            count++;
        }
        while(soma <= z);
        printf("%d\n", count);
        return 0;
    }
