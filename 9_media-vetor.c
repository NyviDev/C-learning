#include <stdio.h>
#include <stdlib.h>

int media(int* v, int nc) {
    int i = 0, soma = 0;

    while (i < nc) {
        soma = soma + v[i];
        i++;
    }
    return soma / nc;
}

int qntNumMaiores (int* v, int nc) {
    int i = 0, qnt = 0;
    while (i < nc) {
        if (v[i] > media(v, nc)) {
            qnt++;
        }
        i++;
    }
    return qnt;
} 

main() {
    int* vetor;
    int nc, i;
    printf("Forneca o numero de colunas: ");
    scanf("%d", &nc);
    vetor = (int*)malloc(sizeof(int[nc]));

    i = 0;
    while (i < nc) {
        printf("Digite o numero da coluna %d: ", i);
        scanf("%d", &vetor[i]);
        i++;
    }

    printf("Media: %d", media(vetor, nc));
    printf("\nQuantidade de elementos que sao maiores que a media do vetor: %d", qntNumMaiores(vetor, nc));

    free(vetor);

}