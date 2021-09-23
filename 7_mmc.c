#include <stdio.h>
#include <stdlib.h>

void menorMaior(int* num1, int* num2) {
    int numx;
    if (*num2 < *num1) {
        numx = *num1;
        *num1 = *num2;
        *num2 = numx; 
    }
}

int quantidadeDeDivisores(int numx) {
    int qtddivisores = 0, i = 1;

    while (i <= numx) {
        if (numx % i == 0) {
            qtddivisores ++;
        }
        i ++;
    }
    return qtddivisores;
}

int primo(int numx) {
    int resultado = 0;
    if (quantidadeDeDivisores(numx) == 2) {
        resultado = 1;
    }
    return resultado;
}

int menorDivisorPrimo(int numx) {
    int menorPrimo = numx, i = 1;
    while( i <= numx) {
        if (numx % i == 0) {
            if (primo(i) == 1) {
                if ( i <= menorPrimo) {
                    menorPrimo = i;
                }
            }
        }
        i ++;
    }
    return menorPrimo;
}

int mmc(int num1, int num2) {
    int resp = 1, div, a = num1, b = num2;
    if (a != 1 && b != 1) {
        while(div != 0) {
            div = a % b;
            a = b;
            b = div;
        }
    }
    resp = (num1 * num2) / a;
    return resp;
}

main() {
    int num1, num2;
    printf("Entre com o 1o. numero: ");
    scanf("%d", &num1);
    printf("Entre com o 2o. numero: ");
    scanf("%d", &num2);

    menorMaior(&num1, &num2);

    printf("\nMenor numero entre %d e %d: %d", num1, num2, num1);
    printf("\nMaior numero entre %d e %d: %d", num1, num2, num2);
    printf("\nQuantidade de divisores de %d: %d", num1, quantidadeDeDivisores(num1));
    printf("\nQuantidade de divisores de %d: %d", num2, quantidadeDeDivisores(num2));

    if (primo(num1)){
        printf("\nPrimalidade de %d: VERDADE", num1);
    }
    else {
        printf("\nPrimalidade de %d: FALSA", num1);
    }

    if (primo(num2)) {
        printf("\nPrimalidade de %d: VERDADE", num2);
    }
    else {
        printf("\nPrimalidade de %d: FALSA", num2);
    }
    
    printf("\nMenor dividor primo de %d: %d", num1, menorDivisorPrimo(num1));
    printf("\nMenor dividor primo de %d: %d", num2, menorDivisorPrimo(num2));
    printf("\nMenor Multiplo Comum entre %d e %d: %d", num1, num2, mmc(num1, num2));
}