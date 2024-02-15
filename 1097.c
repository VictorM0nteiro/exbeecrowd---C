#include <stdio.h>
    int main(){
        int i, j;

        for(i = 1; i < 3; i+=2){
            for( j = 7; j >= 5; j--){
                printf("I=%d J=%d\n", i, j);
            }
        }
        for(i = 3; i < 5; i+=2){
            for( j = 9; j >= 7; j--){
                printf("I=%d J=%d\n", i, j);
            }
        }
        for(i = 5; i < 7; i+=2){
            for( j = 11; j >= 9; j--){
                printf("I=%d J=%d\n", i, j);
            }
        }
        for(i = 7; i < 9; i+=2){
            for( j = 13; j >= 11; j--){
                printf("I=%d J=%d\n", i, j);
            }
        }
        for(i = 9; i < 11; i+=2){
            for( j = 15; j >= 13; j--){
                printf("I=%d J=%d\n", i, j);
            }
        }
    return 0;
}