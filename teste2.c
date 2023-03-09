//Programa faz verificaçao se numero pertence ou nao a sequencia de Fibonacci.
//por Thayssa A. Silva 2023

#include <stdio.h>

int main() {
    int num, a = 0, b = 1, fib = 0;
    int verifica = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num == a || num == b) {
        verifica = 1;
    }

    while (fib < num) {
        fib = a + b;
        a = b;
        b = fib;

        if (num == fib) {
            verifica = 1;
            break;
        }
    }

    if (verifica) {
        printf("%d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}

