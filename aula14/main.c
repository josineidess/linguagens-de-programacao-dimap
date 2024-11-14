#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define TAXA_DE_JUROS 0.05

int teste() {
   static const int a = 2;
   exit(0);
   return a;
}

int main() {  
    const float PI = 3.14259;

    const float *ptr = &PI;


    printf("valor de PI: %.4f\n", PI);
    teste();
    int b = teste();
    printf("%d\n",b);

    int *ptr1 = (int *)malloc(sizeof(int)); //calloc já começa com 0, malloc armazena um lixo

    printf("Digite um número inteiro: ");
    scanf("%d", ptr1); //passa o endereço do ponteiro
    printf("Você digitou: %d\n", *ptr1);
     
    free(ptr1);

    //ponteiro duplo
    int *ptr2 = (int *)malloc(sizeof(int));
    int **ptr3 = &ptr2;

    printf("Digite um número inteiro: ");
    scanf("%d", *ptr3); //passa o endereço do ponteiro(conteudo do ptr2)
    printf("Você digitou: %d\n", **ptr3); //conteudo do ptr2

    free(ptr2);

    return 0;
}