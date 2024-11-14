#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int adicionarPontuacao(float *ptr1) {
    
    if (ptr1 == NULL) {
        printf("Falha na alocação de memória!");
        return 1;
    } 
    
    printf("Digite um número float: ");
    scanf("%f", ptr1); 
    printf("Você digitou: %.2f\n", *ptr1);
     
    free(ptr1);

    return 0;
}

int main () {
    float *ptr1 = (float *)malloc(sizeof(float));

    adicionarPontuacao(ptr1);

    return 0;
}