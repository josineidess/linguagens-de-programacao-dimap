#include <stdio.h>
#include <stdlib.h>

int main() {
   
    int num = 10;
    int mascara = 4; //0b100 isso é 4 em binario

    if (num & mascara) {
        printf("O terceiro bit está ativivado.\n");
    } else {
       printf("O terceiro bit está desativado.\n"); 
    }

    if (num | mascara) { 
        printf(".\n");
    } else {
       printf("O terceiro bit está desativado.\n"); 
    }

    num = num & ~mascara; //desativando numeros especificos
    //sleep 5 & echo "comando" deixa o comando rodando em segundo plano
    //mkdir nova_pasta && cd nova_pasta só executa o segundo comando se o primeiro for bem sucedido
    //cat dados.txt || >> dados.txt o segundo comando só é executado se o primeiro comando der errado

    int i, j;
    for (i = 0, j = 10; i < j; i++, j--) {
        printf("i = %d, j = %d\n",i,j);
    }
    printf("i=%d >= j=%d\n",i,j);

    int x = (3,6,7); //o ultimo valor que é considerado
    printf("x = %d\n", x);
    return 0;
}