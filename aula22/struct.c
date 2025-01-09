#include <stdio.h>

int main(void) {

    struct Produto {
        int codigo;
        char descricao[20];
        float valor;
        int estoque;
    };

    struct Produto produtos[3] = {{104, "caneta", 3.25, 1598}, {105, "lapis", 2., 2365}, {106, "caderno", 10.85, 127}};

    int i;
    for(i = 0; i < 3; i++){
        printf("Produto = %i\n", i +1);
        printf("tdescricao = %s\n", produtos[i].descricao);
        printf("valor unitario = %.2f\n", produtos[i].valor);
    }

 
 return 0;
}