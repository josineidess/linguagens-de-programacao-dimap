#include <stdio.h>
#include <stdlib.h>

int media();

int tam(int *arr) {
   return sizeof(arr)/sizeof(int);
}

int maiorValor(int *arr);

int main(int argc, char *argv[]) {
    /*//void* calloc(size_t num,size_t size) número de elementos a serem colocados e tamanho dos elementos
    int *arr,n,i;

    printf("Insira o número de notas\n");
    scanf("%d,",&n);

    arr =  (int*) calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Memória não alocada!\n");
        return 1;
    }

    for (i = 0; i< n; i++) {
        printf("%d°: ", i + 1);
        scanf("%d", arr+i); //&arr[i]
     } 

    for (i = 0; i< n; i++) {
        printf("Nota %d: %d\n", i + 1, arr[i]);
     } 

    for (int i = 0; i < n; i++) {
        arr = (int *) realloc(arr, (i + 1)*sizeof(int)); //exemplo de alocação, aloca mais 5 espaços
        arr[i] = i;
        printf("arr[%d] = %d\n", i + 1, arr[i]);
    }

  
    free(arr);
*/

    //int mediaNt = media();
//    printf("media: %d", mediaNt);
    
    int *vt = (int *) malloc(3 * sizeof(int));
   
    vt[0] = 5;
    vt[1] = 8;
    vt[2] = 10;

   int tamanho = sizeof(&vt)/sizeof(int); //porque isso não dá certo?

    printf("tams %d", tamanho);
  //  printf("maior: %d", maiorValor(vt));

    return 0;
}


int media() {
    int n;
    printf("Insira o número de notas\n");
    scanf("%d,",&n);

    int *arr = (int *) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memória não alocada!\n");
        return 1;
    }

    int soma = 0;

    for (int i = 0; i < n; i++) {
        printf("Digite a %d nota: ", i+1);
        scanf("%d", arr+i);
        soma += *(arr+i);
    }

    return soma / n;
}

int maiorValor(int *arr) {
    int maior = 0;

    for (int i = 0; i < tam(arr); i++) {
       if (i == 0)
          maior = arr[i];
       else {
          if (arr[i] > maior) {
            maior = arr[i];
          }
        }   
    }     

    return maior;
}