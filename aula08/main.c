#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   float u1 = atof(argv[1]);
   float u2 = atof(argv[2]);
   
   float media = (u1 + u2) / 2;
   if (media >= 7)
     printf("Media = %.2f, Aluno aprovado. Parabéns! \n", media);
    else
      printf("Media = %.2f, Aluno em recuperação! \n", media);
   return 0;
}

