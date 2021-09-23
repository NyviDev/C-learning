#include <stdio.h>
#include <stdlib.h>

void ordemCrescente(int** m, int nl, int nc) {
    int tam, i, j, aux, tv;
    int* v;
    tam = 0;
    tv = nl*nc;
    v = (int *)malloc(sizeof(v[tam]));

    i = 0;
    while (i < nl) {
        j = 0;
        while (j < nc) {
            v[tam] = m[i][j];
            tam++;
            j++;
        }
        i++;
    }

    i = 0;
    while (i < tv) {
        j = 0;
        while (j < tv) {
            if (v[i] < v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
            j++;
        }
        i++;
    }
    
    i = 0;
    tam = 0;
    while (i < nl) {
        j = 0;
        while (j < nc) {
            m[i][j] = v[tam];
            tam++;
            j++;
        }
        i++;
    }

    i = 0;
    printf("passei aqui 1");
    while (i < nl) {
        j = 0;
        while (j < nc) {
            printf("\nmatriz[%d, %d]: %d", i, j, m[i][j]);
            j++;
        }
        i ++;
    }

    free(v);
}

main() {
    int** matriz;
    int nl, nc, i, j;
    printf("Digite numero de linhas: ");
    scanf("%d", &nl);
    printf("Digite o numero de colunas: ");
    scanf("%d", &nc);

    matriz = (int **) malloc(sizeof(int[nl]));
    i = 0;
    while (i < nl) {
        matriz[i] = (int *)malloc(sizeof(int[nc]));
        j = 0;
        while (j < nc) {
            printf("matriz[%d, %d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            j++;
        }
        i ++;
    }

    ordemCrescente(matriz, nl, nc);

    i = 0;
    while (i < nl) {
        free(matriz[i]);
        i++;
    }
    free(matriz);
}