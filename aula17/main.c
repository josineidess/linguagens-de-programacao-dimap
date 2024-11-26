#include <stdio.h>
#include <stdlib.h>
#include "func1.h"
#include "func2.h"

int main() {
    int num = 5;
     //compila cada um de uma vez para testar: gcc -c func1.c -o func1.o, fazer com func2 e com main
     //compilar todo mundo: gcc -o programa main.o func1.o func2.o
     //executa programa: ./programa
     //remove os arquivos o: rm *.o
    //printf("2*%d = %d;", num, dobr(num));
    //printf("3*%d = %d;", num, tripl(num));

    int arr[5] = {1,2,3,4,5};
    int arr2[5] = {}; //todos os elementos são 0
    *(arr + 1) = 8;
    printf("arr1 = %d;",arr[0]);
    printf("arr2 = %d;", arr2[0]);
    printf("arr1 = %d;", *(arr + 1));
    
    return 0;
}
