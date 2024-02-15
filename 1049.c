#include <stdio.h>

int main() {
    char class1[20], class2[20], class3[20];
    scanf("%s %s %s", class1, class2, class3);

    int result = strcmp(class1, class2, class3);

    if (strcmp(class1, "vertebrado") == 0){
        if (strcmp(class2, "ave") == 0){
            if (strcmp( class3, "carnivoro") == 0 ){
                printf("aguia\n");
            }
            else if ( strcmp ( class3, "onivoro") == 0){
                printf("pomba\n");
            }
        }
        else if(strcmp(class2, "mamifero") == 0){
            if (strcmp( class3, "onivoro") == 0){
                printf("homem\n");
            }
            else if (strcmp( class3, "herbivoro") == 0){
                printf("vaca\n");
            }
        }
    } 

    else if (strcmp(class1, "invertebrado") == 0){
        if (strcmp(class2, "inseto") == 0){
            if (strcmp( class3, "hematofago") == 0 ){
                printf("pulga\n");
            }
            else if ( strcmp ( class3, "herbivoro") == 0){
                printf("lagarta\n");
            }
        }
        else if(strcmp(class2, "anelideo") == 0){
            if (strcmp( class3, "hematofago") == 0){
                printf("sanguessuga\n");
            }
            else if (strcmp( class3, "onivoro") == 0){
                printf("minhoca\n");
            }
        }
    }

        return 0;
        

}