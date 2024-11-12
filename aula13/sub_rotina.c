#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int x = 100; //variavel global

void dobrar(int *num) {
    *num = *num * 2;
}

int fat(int n) {
    int x = n;

    while(n > 1) {
       n--; 
       x = x * n;
    }

    return x;
}

//as vezes o math.h não é encontrado
//double pot(double base, double exp) {
  // return pow(base, exp);
//}

int ehPrimo(int n) {
   int primo = 1;
   int vezes = n;

   while(vezes < n){
      if(n%vezes==0){
            primo=1;
       }
      vezes++;
    }
    
    return primo;
}

int trocaPos(int *x, int *y) {
    int aux = *x;
    *x = *y;
    *y = aux;
}

int cont = 0;
void incr() {
    static int localCont = 0; //variavel estatica(local) ela guarda o valor entre as chamadas

    localCont++;
    cont++;
   
    printf("localCont = %d, cont = %d.\n", localCont, cont);
}

int main () {
    int valor = 5;
    printf("Antes: %d\n", valor);
    dobrar(&valor);
    printf("Depois: %d\n", valor);

    printf("fat: %d\n", fat(1));

    printf("primo %d\n", ehPrimo(5));

    int x = 3, y = 10;
    trocaPos(&x,&y);
    printf("troca pos x: %d, y: %d", x,y);

    incr();
    incr();

    int *ptr = (int*) malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Falha na alocação de memória!");
        return 1;
    } 

    *ptr = 42; //atribui valor diretamente a memoria alocada
    printf("valor = %d\n", *ptr);
    free(ptr);

    return 0;
}