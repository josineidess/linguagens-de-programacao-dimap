#include <stdio.h>
#include <string.h>

typedef struct Data
{
    int dia;
    int mes;
    int ano;
} data;

typedef struct Evento {
    char nome[100];
    data data;
} evento;

typedef struct Produto {
  char nome[100];
  float preco;
} produto;

typedef struct Loja {
    char nome[100];
    produto *prod;
} loja;

int main () {
    
    evento ev;
    strcpy(ev.nome, "Brincar");

    data dt = {14,02,2000};

    ev.data = dt;

    printf("nome evento: %s\n", ev.nome);
    printf("data evento %d/%d/%d: ", ev.data.dia, ev.data.mes, ev.data.ano);

    return 0;
}
