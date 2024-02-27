#include <stdio.h>
#include <string.h>

    int main(){
        char s[60];
        char c;
        scanf("%s %c", &s, &c); // leio a entrada;

        int total = 0;

        for(int i = 0; i < strlen(s); i++){
            if(s[i] == c){
                total++; // checo se C está em S
            }
        }

    printf("%d\n", total);

    return 0;

    }