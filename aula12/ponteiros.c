
#include <stdio.h>
#include <stdlib.h>

void exemplos();
void diferencas();

int main() {

    diferencas();
    
    return 0;
}

void basico() {
    1 > 9 ? printf("eh maior\n") : printf("num é maior\n");
   
    int x = 42;
    printf("valor de x = %d.\n", x);
    printf("valor de x = %p.\n", (void*)&x); //(void*)&x talvez seja preciso fazer dessa forma, para que o compilador entenda
    
    int *endereco = &x;

    printf("endereco de x = %p\n", endereco);
    printf("valor de x = %d\n", *(&x));


    int y = 41;
    int *ptr = NULL;
    ptr = &y;
    *ptr = 45;

    printf("Endereço armazenado em ptr = %p.\n", ptr);
    printf("Valor armazenado por ptr = %d.\n", *ptr); //imprime 45

   printf("Valor armazenado por ptr = %d.\n", *ptr); 
}

void exemplos() {
    int x = 10, y = 20, z = 30;

    int *ptr = &x;
    printf("Endereço armazenado em ptr = %p\n", ptr);
    printf("Valor em ptr = %p\n", ptr); 
    
    ptr = &y;

    printf("Endereço armazenado em ptr = %p. \n", ptr);
    printf("Valor apontado por ptr = %d. \n", *ptr);

    ptr++;

    printf("Endereço armazenado em ptr = %p. \n", ptr);
    printf("Valor apontado por ptr = %d. \n", *ptr);
    
    *ptr = 40;

    printf("Endereço armazenado em ptr = %p. \n", ptr);
    printf("Valor apontado por ptr = %d. \n", *ptr);
    
    *ptr++;
    printf("Valor apontado por ptr = %d. \n", *ptr);
}

void diferencas() {
    int arr1 = 10, arr2 = 20, *ptr = &arr1;

    ptr++;
    printf("ptr aponta para o valor: %d\n", *ptr);

    ptr = &arr1;

    int value = *ptr++;
    printf("Valor obtido por *ptr++: %d\n", value);
    printf("ptr agora aponta para o valor: %d\n", *ptr);
}

