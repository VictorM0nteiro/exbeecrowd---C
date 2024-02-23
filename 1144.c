#include <stdio.h>
    int main(){
        int i, n, n2, n3;
        scanf("%d", &n);
        
        for(i = 1; i <= n; i++){
            n2 = pow(i, 2);
            n3 = pow(i, 3);
            printf("%d %d %d\n", i, n2, n3);
            printf("%d %d %d\n", i, n2+1, n3+1);
        }
        return 0;
    }
