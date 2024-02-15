#include <stdio.h>
    int main(){
        int cont = 0, entrada;
        scanf("%d", &entrada);
        if (entrada%2 == 0){
            entrada= entrada + 1;
        }
        // Loop para imprimir os 6 números ímpares consecutivos a partir de entrada
        for( cont; cont < 6; cont++){
            printf("%d\n", entrada);
            entrada +=2; // Incrementa entrada para o próximo número ímpar
        }
        return 0;
    }