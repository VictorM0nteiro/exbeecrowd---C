#include <stdio.h>
    int main(){
        float a, b, c;
        scanf("%f %f %f", &a, &b, &c);

        if ( a < b){
            float temp = a;
            a = b;
            b = temp;
        }
        if ( a < c){
            float temp = a;
            a = c;
            c = temp;
        }
        if ( b < c){
            float temp = b;
            b = c;
            c = temp;
        }

        if ( a >= (b+c)){
            printf("NAO FORMA TRIANGULO\n");
        }
        else {
            if ( a*a == b*b + c*c){
                printf("TRIANGULO RETANGULO\n");
            }
            if ( a*a > b*b + c*c){
                printf("TRIANGULO OBTUSANGULO\n");
            }
            if ( a*a < b*b + c*c){
                printf("TRIANGULO ACUTANGULO\n");
            }
            if ( a == b && b == c && c == a){
                printf("TRIANGULO EQUILATERO\n");
            }
            else if ( a == b || b == c || c == a){
                printf("TRIANGULO ISOSCELES\n");
            }
            
        }
    }