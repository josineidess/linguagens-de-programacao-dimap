#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimeMatriz(int matriz[3][3]);
void imprimeMatrizGeneralizada(int lin, int col, int mat[lin][col]);
void imprimeMatrizComLinhasVariadas(int lin, int col, int mat[][col]);
void alocaMatriz(int ***matriz, int linhas, int colunas);
void liberaMatriz(int **matriz, int linhas);
void imprimeMatrizAlocada(int **matriz, int linhas, int colunas);
void acrescentaElementos(int **matriz, int linhas, int colunas);
void acrescentaElementosVetorSimulado(int *vetorSimulado, int linhas, int colunas);
void imprimeVetorSimulado(int *vetorSimulado, int linhas, int colunas);

int main() {
    int matriz[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};
    
    int *vetor = (int *) malloc(6 * sizeof(int));
    

    imprimeMatriz(matriz);    
    imprimeMatrizGeneralizada(3,3,matriz);                        
    imprimeMatrizComLinhasVariadas(2,3,matriz);

    int **mat = NULL;
    alocaMatriz(&mat, 2,3);
    //acrescentaElementos(mat, 2, 3);
    acrescentaElementosVetorSimulado(vetor,2,3);
    imprimeVetorSimulado(vetor, 2,3);
    //imprimeMatrizAlocada(mat, 2,3);
    liberaMatriz(mat,2);

    return 0;
}

void imprimeMatriz(int matriz[3][3]) {
    int i,j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3;j ++) {
            printf("%2d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}

void imprimeMatrizGeneralizada(int lin, int col, int mat[lin][col]) {
    int i,j;

    for (i = 0; i < lin; i++) {
        for (j = 0; j < col;j ++) {
            printf("%2d", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

void imprimeMatrizComLinhasVariadas(int lin, int col, int mat[][col]) {
    int i,j;

    for (i = 0; i < lin; i++) {
        for (j = 0; j < col;j ++) {
            printf("%2d", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}

void alocaMatriz(int ***matriz, int linhas, int colunas) {
    int i;

    *matriz = (int **) malloc(linhas * sizeof(int *));

    if (matriz == NULL) {
        printf("Falha na alocação de linhas da matriz!");
        exit(1);
    }

    for (i = 0; i < linhas; i ++) {
        (*matriz)[i] = (int *) malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Falha na alocação de coluna da matriz!");
            exit(1);
        }
    }
}


void liberaMatriz(int **matriz, int linhas) {
    int i;
    for (i = 0; i < linhas; i++) {
        free(matriz[i]);
    }

    free(matriz);
}


void imprimeMatrizAlocada(int **matriz, int linhas, int colunas) {
    int i, j;

    for ( i = 0; i < linhas;i ++) {
        for (j = 0; j < colunas; j++) {
          printf("%2d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void acrescentaElementos(int **matriz, int linhas, int colunas) {
   int i, j;

    for ( i = 0; i < linhas;i ++) {
        for (j = 0; j < colunas; j++) {
            printf("Elemento %d%d: ", i, j);
            scanf("%d",&(matriz[i][j]));
        }
    }
}

void acrescentaElementosVetorSimulado(int *vetorSimulado, int linhas, int colunas) {
   int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0;j < colunas; j++) {
            printf("Elemento %d%d: ", i, j);
            scanf("%d", &(vetorSimulado[i * 2 + j]));
        }
    }

}

void imprimeVetorSimulado(int *vetorSimulado, int linhas, int colunas) {
   int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0;j < colunas; j++) {
            printf("%2d", (vetorSimulado[i * 2 + j]));
        }
        printf("\n");
    }
    printf("\n");

}

//refazer exercicio de alocacao de matriz para matriz 3d