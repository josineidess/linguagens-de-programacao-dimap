#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char nome[5];
    char prog[9] = {'p','r','o','g','r','a','m','a'};

    scanf("%s", nome);

    printf("testes %s\n", nome);
    printf("prog %s\n", prog);

    char s1[100], s2[100];
    strcpy(s1,s2); //copia s1 em s2
    strcat(s1,s2); // concatena s2 ao final de s1 e guarda em s1

    strchr(s1,'d'); //retorna um ponteiro para a primeira ocorrência de d em s1 e 0/NULL se não houver
    strstr(s1,s2); //retorna ponteiro para a primeira ocorrência de s2 em s1

    char s1[100], s2[100];

    printf("Digite a primeira string: ");
    scanf("%s", s1);
    
    printf("Digite a segunda string:");
    scanf("%s", s2);
    
    printf("tamanho %d", strlen(s1));

    if (strcmp(s1,s2) == 0)
      printf("as string são iguais");


    strcat(s1,s2);
    printf("s1 agora é %s\n",s1);

    char str[] = "Esta é uma string simples";
    char *sh;
    printf("pesquisa por 's' em %s.\n", str);

    sh = strchr(str, 's');

    while(sh != NULL) {
        printf("encontrado na posição %ld.\n", sh - str + 1); //soma 1 porque ele quer saber a posição e não o indice da ocorrência
        sh = strchr(sh + 1, 's');
    }

    char str1[] = "Um real é pouco dinheiro!";
    char* sh1, str2[100];

    printf("String 1 e \n %s", str1);

    scanf("%s", str2);

    printf("pesquisando por '%s' em '%s'.\n", str2, str1);

    sh = strstr(str1, str2);

    if (sh == NULL) {
        printf("não há ocorrências");
        exit(1);
    }
   
    printf("substring é %s\n", sh);

    return 0; 
}