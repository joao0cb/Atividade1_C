#include <stdio.h>

void numero1a100() {
    for (int i = 1; i <= 100; i++) {
        if (i < 100)
            printf("%d, ", i);
        else
            printf("%d\n\n", i);
    }
}

void somatorio() {
    int soma = 0;
    for (int i = 11; i <= 999; i += 2) {
        soma += i;
    }
    printf("Somatório de ímpares entre 10 e 1000: %d\n\n", soma);
}

void multiplos3() {
    int primeiroNumero = 1;
    for (int i = 3; i <= 200; i += 3) {
        if (i % 10 != 3) {
            if (!primeiroNumero) {
                printf(", ");
            }
            printf("%d", i);
            primeiroNumero = 0;
        }
    }
    printf("\n");
}

int main() {
    numero1a100();
    somatorio();
    multiplos3();

    return 0;
}