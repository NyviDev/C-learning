#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float distanciaPonto(float xa, float ya, float xb, float yb) {

    float d;
    d = sqrt(pow(pow(xa - xb, 2)+ pow(ya - yb, 2), 2));
    return d;
}

main() {
    
    float xa, ya, xb, yb, distancia;
    printf("Digite o valor de X no ponto A: ");
    scanf("%f", &xa);
    printf("Digite o valor de Y no ponto A: ");
    scanf("%f", &ya);
    printf("Digite o valor de X no ponto B: ");
    scanf("%f", &xb);
    printf("Digite o valor de Y no ponto B: ");
    scanf("%f", &yb);

    distancia = distanciaPonto(xa, ya, xb, yb);

    printf("Distancia entre dois pontos: %.2f", distancia);
}