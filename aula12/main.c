#include <stdio.h>
#include <stdlib.h>

int main() {
    if (-1L < 1U) //verdadeiro
      printf("Teste1\n");

    if((unsigned long int) - 1L < (unsigned long int) 1U) //falso, pois ao fazer cast do -1 para unsigned long int o número muda e a condicação não é mais satisfeita
      printf("Teste2\n");

    if((long int) - 1L < (long int) 1U) //verdadeiro
      printf("Teste3\n"); 

    if(-1L > 1UL) //verdadeiro
      printf("Teste4\n"); 

    if((long int) - 1L > 1UL) //verdadeiro
       printf("Teste5\n"); 
    
    
    return 0;
}