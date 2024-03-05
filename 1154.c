#include <stdio.h>
    int main(){
        int n, count = 0;
        float media;

        while(1){
            scanf("%d", &n);
            if(n < 0){
                break;
            }
            else{
                count++;
                media += n;
            }
        }
        printf("%.2f\n", media/count);
    }