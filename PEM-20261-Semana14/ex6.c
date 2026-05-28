#include <stdio.h>

int main() {
    int n, passos = 0;

    printf("Digite um inteiro positivo para a Sequencia de Collatz: ");
    scanf("%d", &n);

    // Controle de entrada para rejeitar <= 0
    if (n <= 0) {
        printf("Erro: Entrada invalida. Digite apenas numeros maiores que zero.\n");
        return 1;
    }

    printf("Sequencia: %d", n);

    // Execução dos passos até atingir 1
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2; // Caso seja par
        } else {
            n = 3 * n + 1; // Caso seja ímpar
        }
        printf(" -> %d", n);
        passos++;
    }

    printf("\nNumero de passos necessarios: %d\n", passos);
    return 0;
}