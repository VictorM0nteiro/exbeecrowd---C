#include <stdio.h>

int main() {
    int idade;
    scanf("%d", &idade);
    int ano = idade / 365;
    int mes = (idade % 365)/30;
    int dia = (idade % 365)%30;
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
    return 0;
}


