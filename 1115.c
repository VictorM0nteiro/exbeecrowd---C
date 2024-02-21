#include <stdio.h>
    int main(){
        int x, y;

        while(1){
            scanf("%d %d", &x, &y);

            if( x == 0 || y == 0){
                break;
            }
            else if ( x > 0 && y > 0){ //Primeiro quad
                printf("primeiro\n");
            }
            else if ( x < 0 && y > 0){ // segundo quad
                printf("segundo\n");
            }
            else if ( x < 0 && y < 0){ // terceiro quad
                printf("terceiro\n");
            }
            else if ( x > 0 && y < 0){ //quarto quad
                printf("quarto\n");
            }
        }
        return 0;
    }
