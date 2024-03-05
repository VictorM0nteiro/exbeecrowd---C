#include <stdio.h>
#define false 0
#define true 1
    int main(){
        int n , x, i, j;
        char primo;
        scanf("%d", &n);

        for( i = 0; i < n; i++){
            primo = true;
            scanf("%d", &x);

            if( x <= 1){
                primo = false;
            }
            else{
                for( j = 2; j*j <= x; j++){
                    if( x % j == 0){
                        primo = false;
                        break;
                    }
                }
            }

            if( primo == true){
                printf("%d eh primo\n", x);
            }
            else{
                printf("%d nao eh primo\n", x);
            }
        }
        return 0;
    }