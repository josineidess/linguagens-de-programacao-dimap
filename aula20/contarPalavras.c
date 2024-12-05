#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int cont = 0;
    char espaco = ' ';  


    for (int i = 1; i < argc; i++) {
        
        if (argv[i][0] == espaco) {
            cont++;
        }
    }

    printf("Número de argumentos que começam com espaço: %d\n", cont);

    return 0;
}
