#include <stdlib.h>
#include <stdlib.h>

int potencia (int base, int expoente) {
    int resultado = base;
    if (expoente < 0) {
        expoente = -(expoente);
    }
    else if (expoente == 0) {
        resultado = 1;
    }

    while (expoente > 1) {
        resultado = resultado * base;
        expoente = expoente - 1;
    } 

    return resultado;
}

main() {
    int b, e;
    char resp;
    do {
        printf("Digite uma base: ");
        scanf("%d", &b);
        printf("Digite um expoente: ");
        scanf("%d", &e);

        if (e < 0) {
            printf("RESULTADO: 1/%d", potencia(b, e));
        }
        else {
            printf("RESULTADO: %d", potencia(b, e));
        }

        printf("\nDigite 'S' se deseja continuar. \n");
        scanf("\n");
        resp = getchar();
        
    } while (resp == 'S' || resp == 's');
}