#include <stdio.h>

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

struct PessoaComEndPonteiro
{
    char nome[100];
    int idade;
    struct Endereco *end;
};


int main () {
    struct Endereco end = {"ABC", 123, "Natal", "RN"};
    struct Pessoa p1 = {"João", 25, {"ABC", 123, "Natal", "RN"}};

    struct PessoaComEndPonteiro p2 = {"João", 25, &end};
     
    printf("Nome: %s\n", p1.nome);
    printf("Cidade: %s\n", p1.end.cidade);
   
    printf("Nome 2: %s\n", p2.nome);
    printf("Cidade 2: %s\n", p2.end->cidade);
    
}
