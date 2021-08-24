#include <stdio.h>
#include <stdlib.h>

int ladosTriangulos(int a, int b, int c) {
    int resultado = 0;
    if (a < (b + c) && b < (a + c) && c < (a + b)) {
        resultado = 1;
    }
    return resultado;
}

int tipoTriangulo(int a, int b, int c) {
    int resultado = 0;
    if ((a == b) && (b == c)) {
        resultado = 3;
    }
    else {
        if ((a != b) && (b != c) && (c != a)) {
        resultado = 1;
        }
        else {
            resultado = 2;
            }
    }
    return resultado;
}

main() {
    int x, y, z;
    printf("Forneca 3 numeros: ");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if (ladosTriangulos(x, y, z)) {
        printf("Constituem um triangulo.");
    }

    switch(tipoTriangulo(x, y, z)) {
        case 0:
            return printf("\nNao eh triangulo");
        case 1: 
            return printf("\nEh Escaleno");
        case 2:
            return printf("\nEh Isoceles");
        case 3:
            return printf("\nEh Equilatero");
    }
}