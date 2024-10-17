#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   unsigned short int cargaHoraria, faltas;
   float nota1, nota2, nota3, media;
   
   cargaHoraria = atoi(argv[1]);
   faltas = atoi(argv[2]);
   
   if (((cargaHoraria * 60) / 4) < (51 * faltas)) {
    printf("RF");
   } else {
    printf("Nota 1: ");
    scanf("%f", &nota1);

    if ((nota1 >= 0 && nota1 <= 100) == 0) {
       printf("Nota 1 inválida, a nota deve está no intervalo entre 0 e 100");
       return 0;   
    } 
    
    printf("\nNota 2: ");
    scanf("%f", &nota2);

    if ((nota2 >= 0 && nota2 <= 100) == 0) {
       printf("Nota 2 inválida, a nota deve está no intervalo entre 0 e 100");
       return 0;   
    }
  
    fflush(stdin);

    printf("\nNota 3: ");
    scanf("%f", &nota3);
    
    fflush(stdin);

    if ((nota3 >= 0 && nota3 <= 100) == 0) {
       printf("Nota 3 inválida, a nota deve está no intervalo entre 0 e 100");
       return 0;   
    } 

    media = ((nota1 * 4) + (nota2 * 5) + (nota3 * 6)) / 15;
    
    fflush(stdin);

    if (media >= 7) {
        printf("AP");
    } else if (media >= 30 && media < 70) {
      float nota4;
    
      printf("\nAluno em recuperação, digite a nota 4: ");
      scanf("%f", &nota4);

      if ((nota4 >= 0 && nota4 <= 100) == 0) {
       printf("Nota 4 inválida, a nota deve está no intervalo entre 0 e 100");
       return 0;   
      } 

      media = (media + nota4) / 2;

      if (media >= 50) {
        printf("AP");
      } else {
        printf("RN");  
      }
    } else {
      printf("RN");  
    }

   }

   return 0;
}