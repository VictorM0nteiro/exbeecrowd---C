#include <stdio.h>
    int main(){
        float a;
        scanf("%f", &a);

        if ( a <= 400.00){
            printf("Novo salario: %.2f\n", a + (a*15/100));
            printf("Reajuste ganho: %.2f\n", a*15/100);
            printf("Em percentual: 15 %%\n");
        }
        else if ( a > 400.00 && a <= 800.00){
            printf("Novo salario: %.2f\n", a + (a*12/100));
            printf("Reajuste ganho: %.2f\n", a*12/100);
            printf("Em percentual: 12 %%\n");
        }
        else if ( a > 800.00 && a <= 1200.00){
            printf("Novo salario: %.2f\n", a + (a*10/100));
            printf("Reajuste ganho: %.2f\n", a*10/100);
            printf("Em percentual: 10 %%\n");
        }
        else if ( a > 1200.00 && a <= 2000.00){
            printf("Novo salario: %.2f\n", a + (a*7/100));
            printf("Reajuste ganho: %.2f\n", a*7/100);
            printf("Em percentual: 7 %%\n");
        }
        else {
            printf("Novo salario: %.2f\n", a + (a*4/100));
            printf("Reajuste ganho: %.2f\n", a*4/100);
            printf("Em percentual: 4 %%\n");
        }
        return 0;
    }