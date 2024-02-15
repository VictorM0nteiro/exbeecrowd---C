#include <stdio.h>
    int main(){
        int d, d2, h, h2, m, m2, s, s2;
        scanf ("Dia %d", &d);
        scanf ("%d : %d : %d\n",&h, &m, &s );
        scanf ("Dia %d", &d2);
        scanf("%d : %d : %d", &h2, &m2, &s2);

        s = s2 - s;
        m = m2 - m;
        h = h2 - h;
        d = d2 - d;

        if ( s < 0){
            s+=60;
            m--;
        }
        if ( m < 0){
            m+=60;
            h--;
        }
        if ( h < 0){
            h+=24;
            d--;
        }
            printf("%d dia(s)\n", d);
            printf("%d hora(s)\n", h);
            printf("%d minuto(s)\n", m);
            printf("%d segundo(s)\n", s);

        return 0;

    }          
                                                                       