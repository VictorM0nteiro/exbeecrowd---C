#include <stdio.h>
    int main(){
        int n[100], i,p, j = 0;

        for (i = 0; i <= 100; i++ ){
            scanf("%d", &n[i]);
        }
        for (i = 0; i < 100; i++){
            if(n[i]> j){
                j = n[i];
                p = i + 1;
            }
        }
        printf("%d\n", j);
        printf("%d\n", p);
        return 0;
    }