#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int exemplo();
int exemplo2();
int exemplo3();

int main() {
    //tipo **matriz = (tipo **)malloc(linhas * sizeof(tipo*)) //alocando memoria para as linhas

    //matriz[i] = (tipo *)malloc(colunas*sizeof(tipo)); alocando memoria para as colunas

    //liberando memoria, free(matriz[i]), depois free(matriz)


    char c;
    exemplo3();
    exemplo2();
    exemplo();
    printf("Digite um caractere: ");
    c = getchar();
    putchar(c);
    putchar('\n');
    
    fflush(stdin);

    char v1[20], v2[20];
    printf("Fgets");
    fgets(v1, 20, stdin);
    printf("%s",v1);
    printf("\nScanf\n");
    scanf("%s", &v2);
    printf("%s", v2); 
   
    int i,j,arr[3][2] = {
        {0,1},
        {2,3},
        {4,5}
    };

    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 2; j++) {
            printf("arr[%d][%d] : %d", i,j,arr[i][j]);
        }
        printf("\n");
    }

    int ii,jj,arr1[6] = {0,1,2,3,4,5};

    for (ii = 0; ii < 3; ii++) {
        for (jj = 0;jj < 2; j++) {
            printf("arr[%d][%d] : %d", ii,jj,arr1[ii* 2 + jj]); //ii * numero de colunas que tem embaixo dele
        }
    }

    return 0;
}


int exemplo() {

    int i,j,k,arr[12] = {0,1,2,3,4,5,6,7,8,9,10,11};

    for (i = 0; i < 2; ++i) {
        for (j = 0; j < 3; ++j) {
            for (k = 0; k < 2; ++k) {
                printf("arr[%i][%i][%i] = %d", i, j, k, arr[i * 3 * 2 + j*2+ k]);
                printf("\n");
            }
        }
    }

    return 0;
}

int exemplo2() {
    char nome[3][100];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Digite o nome %d: ", i);
        scanf("%s", nome[i]); //só precisa apontar para 
    }

    for (i = 2; i>= 0; i--) 
      printf("%s\n", nome[i]);

    return(0);  
}

int exemplo3() {
   int i,j,lin=3, col=4;

   int **matriz = (int **)malloc(lin*sizeof(int*));

   if (matriz == NULL) {
    printf("Falha na alocação!");
    return 1;
   }

   for (int i = 0; i < lin; i++) {
    matriz[i] = (int *)malloc(col* sizeof(int));

    if (matriz[i] == NULL) {
       printf("Falha na alocação!");
       return 1;
    }
   }

   for (int i = 0; i < lin; i++) {
    for (int j = 0; j < col; j++) {
        matriz[i][j] = i*col*j;
    }
   }

   for (int i = 0; i < lin; i++) {
    for (int j = 0; j < col; j++) {
        printf("%3d", matriz[i][j]);
    }
    printf("\n");
   }

   for(int i = 0; j < lin; j++) {
    free(matriz[i]);
   }

   free(matriz);

   return 0;
}

