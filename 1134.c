#include <stdio.h>
    int main(){
        int n = 0, alcool = 0, gasolina = 0, diesel = 0;

        while(n!=4){
            scanf("%d", &n);

            if(n == 1){
                alcool++;
            }
            else if ( n == 2){
                gasolina++;
            }
            else if ( n == 3){
                diesel++;
            }
        }
        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n", alcool);
        printf("Gasolina: %d\n", gasolina);
        printf("Diesel: %d\n", diesel);
    }