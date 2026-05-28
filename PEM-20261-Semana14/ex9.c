#include <stdio.h>

int main() {
    int A[3][3], B[3][3], C[3][3];

    printf("Preencha a Matriz A (3x3):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &A[i][j]);

    printf("Preencha a Matriz B (3x3):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &B[i][j]);

    /* Inicialização e cálculo do produto matricial com Loop Triplo */
    /* i mapeia as linhas de A, j mapeia as colunas de B e k faz o somatorio produto */
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Exibição formatada e alinhada
    printf("\nMatriz Resultante C (A x B):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}