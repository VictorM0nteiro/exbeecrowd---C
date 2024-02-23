#include <stdio.h>
    int main(){
        int n = 0, i;

        scanf("%d", &n);
        int num = 1;
        for(i = 0; i < n; i++){
            printf("%d ", num++);
            printf("%d ", num++);
            printf("%d ", num++);
            printf("PUM\n");
            num++;
        }
    }