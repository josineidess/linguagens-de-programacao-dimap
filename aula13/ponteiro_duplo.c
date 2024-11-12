#include <stdio.h>
#include<stdlib.h>

int main () {
    int x = 43;
    int *ptr1 = &x;

    int **ptr2 = &ptr1; //ponteiro duplo

    printf("valor de x %d\n", x);
    printf("endereço de x %p\n", &x);
    printf("valor de ptr1(endereço de x) %p\n", ptr1);
    printf("valor de apontado por ptr1(x) %d\n", *ptr1);
    printf("endereço de ptr1 = %p\n", &ptr1);
    printf("valor de ptr2(endereço de ptr1) %p\n", ptr2);
    printf("valor apontado por ptr2(endereço de x) %p\n", *ptr2);
    printf("valor apontado por *ptr2(valor de x) %d\n", **ptr2);

    return 0;
}