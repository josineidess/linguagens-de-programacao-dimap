#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a,b,c;
    printf("Digite um número: ");
    scanf("%d", &a);
    printf("\nDigite um número: ");
    scanf("%d", &b);
    printf("\nDigite um número: ");
    scanf("%d", &c);

    printf("\n%d\n",a + b * c);

    return 0;
}