#include <stdio.h>

int main() {
    float precos[] = {0, 4.00, 4.50, 5.00, 2.00, 1.50};
    int codigo_item, quantidade;
    scanf("%d %d", &codigo_item,  &quantidade);

    if( codigo_item >= 1 && codigo_item <= 5){
        float valor_conta = quantidade * precos[codigo_item];
        printf("Total: R$ %.2f\n", valor_conta);
    }
    else {
        printf("Codigo Invalido");
    }

}