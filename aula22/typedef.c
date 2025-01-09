#include <stdio.h>
#include <string.h>

typedef int inteiro;
typedef int* ptr_inteiro;


struct Endereco
{
    char rua[100];
    int numero;
    char cidade[50];
    char estado[3];
};

struct Pessoa
{
    char nome[100];
    int idade;
    struct Endereco end;
};

typedef struct Pessoa pessoa;

typedef struct Pessoa {
     char nome[100];
    int idade;
    struct Endereco end;  
} pessoaRes;

int main() {
    inteiro x = 10;
    printf("x = %d.\n", x);

    ptr_inteiro ptr;
    int a = 5;

    ptr = &a;
  
    printf("a: %d.\n", *ptr);

    pessoa p1;

    strcpy(p1.nome, "Carlos");
    p1.idade = 30;

    printf("Nome da pessoa: %s\n", p1.nome);
    printf("Nome da pessoa: %d\n", p1.idade);


}