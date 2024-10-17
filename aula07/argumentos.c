#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a = atoi(argv[1]);
    long int b = atol(argv[2]);
    double c = atof(argv[3]);
    int n = argc;
    printf("Foram digitados %d argumentos.\n", n - 1);
    printf("1 valor = %d;\n", a);
    printf("2 valor = %ld;\n", b);
    printf("3 valor = %.3f.\n", c);
    return 0;
}