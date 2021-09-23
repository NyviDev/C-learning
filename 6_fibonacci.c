int fibonacci(int numero) {
    int resultado = 1, f1 = 1, f2 = 1, i = 3;
    while (numero >= i) {
        resultado = f1 + f2;
        f1 = f2;
        f2 = resultado;
        i = i + 1;

    }

    return resultado;
}

main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O %d termo da sequencia fibonacci e': %d", num, fibonacci(num));
}