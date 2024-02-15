#include <stdio.h>
    int main(){
        int n;
        scanf("%d", &n);
        int hora = n / 3600;
        int minuto = (n % 3600)/ 60;
        int segundo = ( n % 3600)% 60;
        printf("%d:%d:%d\n", hora, minuto, segundo);
        return 0;
    }
