#include <stdio.h>
#include <stdlib.h>

int main () {

    //exercicio 1
    int x = 10;

    int *ptr = &x;

    printf("%d\n", *ptr);

    //exercicio 2
    float y = 14;
    float *ptr2 = &y;
    
    *ptr2 = 50;

    printf("mudou variavel %f\n", y);

    //exercicio 3
    int a = 4;
    int b = 5;

    int *ptr4 = &a;
    int *ptr5 = &b;

    if (*ptr4 > *ptr5) {
        printf("%d\n", *ptr4);
    } else {
        printf("%d\n", *ptr5);
    }

    //exercio 4
    int c = 5;
    int d = 5;
    
    int* ptr6 = &c;
    int* ptr7 = &d;

    printf("soma: %d\n", *ptr6 + *ptr7);

    //exercicio 5
    int *ptr8 = NULL;
    if (ptr8 == NULL) {
        printf("valor nulo");
    } 

    //exercicio 6
    int t = 6;
    int *ptr9 = &t;
    int **ptr10 = &ptr9;
    
    printf("valor ponteiro duplo %d\n", **ptr10);

    //execicio 7
    float q = 4;
    float *ptr11 = &q;
    float **ptr12 = &ptr11;

    **ptr12 = 35;
    printf("valor mod %f", q);

    //exercicio 8
    //exercicio 9

    return 0;
}