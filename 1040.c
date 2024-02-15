#include <stdio.h>
    int main(){
        float n1, n2, n3, n4, n5, mediap, mediaf;
        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
        mediap = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;

        if( mediap >= 7.0 ){
            printf("Media: %.1f\n", mediap);
            printf("Aluno aprovado.\n");
        }
        else if ( mediap < 5.0 ){
            printf("Media: %.1f\n", mediap);
            printf("Aluno reprovado.\n");
        }
        else {
            printf("Media: %.1f\n", mediap);
            printf("Aluno em exame.\n");

            scanf("%f", &n5);
            printf("Nota do exame: %.1f\n", n5);

            mediaf = (mediap + n5)/2;

            if( mediaf >= 5){
                printf("Aluno aprovado.\n");
                printf("Media final: %.1f\n", mediaf);
            }

            else{
                printf("Aluno reprovado.\n");
                printf("Media final: %.1f\n", mediaf);
            }

        }

    }