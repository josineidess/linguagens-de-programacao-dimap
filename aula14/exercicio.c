#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int adicionarPontuacao(float *ptr1) {
    
    if (ptr1 == NULL) {
        printf("Falha na alocação de memória!");
        return 1;
    } 
    
    printf("Digite um número: ");
    scanf("%f", ptr1); 
    printf("Você digitou: %.2f\n", *ptr1);
     

    return 0;
}

float exibirPontuacao(float *ptr) {
     
    if (ptr == NULL) { 
        printf("Nenhuma pontuação foi cadastrada."); //perguntar ao professor como validar se tem algum valor na variável
        return 1;
    } 
  
    return (*ptr);
}

int liberaMemoria(float *ptr) {
   if (ptr == NULL) {
      printf("Nenhum valor foi cadastrado.");
      return 1;
   }

   free(ptr);

   ptr = NULL;

    if (ptr == NULL) {
      printf("Memória liberada com sucesso.");
      return 0;
   }

}

int main () {
    float *ptr1 = (float *)malloc(sizeof(float));
    float *ptr2 = (float *)malloc(sizeof(float));

    *ptr2 = 9.1;

    adicionarPontuacao(ptr1);
    printf("teste %.2f \n", exibirPontuacao(ptr1));
    
    liberaMemoria(ptr2);

    //menu do 4 exercicio
    int sair = 0;
    float *nota = (float *)malloc(sizeof(float));
    int opcao = 0;
    while (sair == 0) {
       printf("\nSelecione o que deseja fazer: \n");
       printf("1. Adicionar/atualizar pontuação \n");
       printf("2. Exibir pontuação atual \n");
       printf("3. Sair \n");

       scanf("%d", &opcao);

       switch (opcao)
       {
       case 1:
        adicionarPontuacao(nota);
        break;
       case 2:
        printf("Pontuação atual : %.2f\n", exibirPontuacao(nota));
        break;
       case 3:
        sair = 1;
        exit(1);
        break;
       default:
        printf("Digite uma opção válida!\n");
        break;
       }
 
    }

    return 0;
}