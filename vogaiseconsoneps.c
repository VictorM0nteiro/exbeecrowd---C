#include <stdio.h>
#include <string.h>

    int main(){
        char palavra[60], consoantes[60], vogais[60];
        int cont1, cont2;
        cont1 = cont2 = 0;
        scanf("%s", &palavra);

        for( int i = 0; palavra[i]!='\0'; i++){
            if( palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == "u"){
                vogais[cont1]=palavra[i];
                cont1++;
            }
            else{
                consoantes[cont2]=palavra[i];
                cont2++;
            }
        }
        vogais[cont1]='\0';
        consoantes[cont2]='\0';
        printf("Vogais: %s\nConsoantes: %s\n", vogais, consoantes);
    }