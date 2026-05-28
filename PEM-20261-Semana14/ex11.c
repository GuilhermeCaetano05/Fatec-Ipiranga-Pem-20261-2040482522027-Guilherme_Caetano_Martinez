#include <stdio.h>

int main() {
    int vetor[6] = {10, 20, 30, 40, 50, 60};
    int *p = vetor; // Inicializa apontando para o primeiro elemento
    int soma = 0;

    printf("Elementos e Enderecos (Aritmetica de Ponteiros):\n");
    for (int i = 0; i < 6; i++) {
        // Exibe o valor e endereço usando notação exclusiva de ponteiros
        printf("Valor: %d \t Endereco: %p\n", *(p + i), (void*)(p + i));
        soma += *(p + i);
    }

    printf("\nSoma total calculada: %d\n", soma);

    // Dobrar os valores in-place usando desreferenciação
    for (int i = 0; i < 6; i++) {
        *(p + i) = *(p + i) * 2;
    }

    printf("\nValores dobrados no vetor original: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}