#include <stdio.h>
    int main(){
        int n, x, in = 0, out = 0;
        scanf("%d", &n);

        //Loop para cada caso de teste
        for ( int i = 0; i < n; i++){  // COm o valor de N é definido quantos valores serão colocados
            //Leitura do valor x
            scanf("%d", &x);
            // Verifica se X está dentro do intervalo [10, 20]
            if(x >= 10 && x <=20){
            in++;
        }
            else{
            out++;
        }
        }
        printf("%d in\n", in);
        printf("%d out\n", out);

        return 0;
    }