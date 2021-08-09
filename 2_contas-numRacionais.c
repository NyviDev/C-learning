#include <stdio.h>
#include <stdlib.h>

void numRacionaisSoma(int xn, int xd, int yn, int yd, int *respn, int *respd) {

    *respn = (xn * yd) + (yn * xd);
    *respd = (xd * yd);
}

void numRacionaisSub(int xn, int xd, int yn, int yd, int *respn, int *respd) {

    *respn = (xn * yd) - (yn * xd);
    *respd = (xd * yd);
}

void numRacionaisMult(int xn, int xd, int yn, int yd, int *respn, int *respd) {

    *respn = (xn * yn);
    *respd = (xd * yd);
}

void numRacionaisDiv(int xn, int xd, int yn, int yd, int *respn, int *respd) {

    *respn = (xn * yd);
    *respd = (xd * yn);
}

main() {
    
    int xn, xd, yn, yd, respostaN, respostaD;
    printf("Numerador de X: ");
    scanf("%d", &xn);
    printf("Denominador de X: ");
    scanf("%d", &xd);
    printf("Numerador de Y: ");
    scanf("%d", &yn);
    printf("Denominador de Y: ");
    scanf("%d", &yd);

    numRacionaisSoma(xn, xd, yn, yd, &respostaN, &respostaD);
    printf("Soma de %d/%d + %d/%d: %d/%d", xn, xd, yn, yd, respostaN, respostaD);

    numRacionaisSub(xn, xd, yn, yd, &respostaN, &respostaD);
    printf("\nSubtracao de %d/%d - %d/%d: %d/%d", xn, xd, yn, yd, respostaN, respostaD);

    numRacionaisMult(xn, xd, yn, yd, &respostaN, &respostaD);
    printf("\nMultiplicacao de %d/%d * %d/%d: %d/%d", xn, xd, yn, yd, respostaN, respostaD);
    
    numRacionaisDiv(xn, xd, yn, yd, &respostaN, &respostaD);
    printf("\nDivisao de %d/%d / %d/%d: %d/%d", xn, xd, yn, yd, respostaN, respostaD);
    
}