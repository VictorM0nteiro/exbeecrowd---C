#include <stdio.h>
    int main(){
        double a, b=1, c, s=0;

        for(a = 1; a <= 100; a++){
            c = 1/a;
            s += c;
        }
        printf("%.2lf\n", s);
        return 0;
    }