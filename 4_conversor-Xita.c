#include <stdio.h>
#include <stdlib.h>

main() {
    int n, resp;

    printf("Forneca um valor na moeda Xito: X$");
    scanf("%d",  &n);

    if (n >= 500) {
        resp = n / 500;
        printf("\n%d cedula de X$500", resp);
        n = n - (500 * resp);
    }

    if (n >= 100) {
        resp = n / 100;
        printf("\n%d cedula de X$100", resp);
        n = n - (100 * resp);
    }

    if (n >= 50) {
        resp = n / 50;
        printf("\n%d cedula de X$50", resp);
        n = n - (50 * resp);
    }

    if (n >= 10) {
        resp = n / 10;
        printf("\n%d cedula de X$10", resp);
        n = n - (10 * resp);
    }
    
    if (n >= 5) {
        resp = n / 5;
        printf("\n%d cedula de X$5", resp);
        n = n - (5 * resp);
    }

    if (n >= 1) {
        resp = n / 1;
        printf("\n%d cedula de X$1", resp);
        n = n - (1 * resp);
    }
    
}