#include <stdio.h>
    int main(){

        int Inter = 0, Gremio = 0, VInter = 0, VGremio = 0, Empates = 0, Njogos = 0, Op = 0;

        while(1){
            scanf("%d %d", &Inter, &Gremio);
            Njogos++;

            if(Inter > Gremio){
                VInter++;
            }
            else if(Inter < Gremio){
                VGremio++;
            }
            else{
                Empates++;
            }


            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &Op);

            if(Op!=1){
                break;;
            }
        }

        printf("%d grenais\n", Njogos);
        printf("Inter:%d\n", VInter);
        printf("Gremio:%d\n", VGremio);
        printf("Empates:%d\n", Empates);

        if (VInter > VGremio){
            printf("Inter venceu mais\n");
        }
        else if(VInter < VGremio){
            printf("Gremio venceu mais\n");
        }
        else{
            printf("Nao houve vencedor\n");
        }
        
        return 0;
    }
    