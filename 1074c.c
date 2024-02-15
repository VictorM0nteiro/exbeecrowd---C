#include <stdio.h>
    int main(){
        int n, i, V;
        scanf("%d", &n);

        for ( i = 0; i < n; i++){
            scanf("%d", &V);
            if ( V == 0){
                printf("NULL\n");
            }
            else if(V > 0 && V%2 == 0){
                printf("EVEN POSITIVE\n");
            }
            else if(V > 0 && V%2 != 0){
                printf("ODD POSITIVE\n");
            }
            else if(V < 0 && V%2 == 0){
                printf("EVEN NEGATIVE\n");
            }
            else if(V < 0 && V%2 != 0){
                printf("ODD NEGATIVE\n");
            }
        }
        return 0;
    }
