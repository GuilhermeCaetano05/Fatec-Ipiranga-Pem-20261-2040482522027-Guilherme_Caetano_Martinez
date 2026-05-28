#include <stdio.h>
#define N 8

int main() {
    int original[N], inverso[N];
    int maior, indMaior = 0, menor, indMenor = 0;
    int pares = 0, impares = 0;
    int buscaChave, encontrado = -1;

    printf("Digite %d numeros inteiros:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &original[i]);
    }

    // Inicialização das variáveis de controle
    maior = menor = original[0];

    printf("\nVetor original: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", original[i]);
        
        // Validação de Maior e Menor e seus índices
        if (original[i] > maior) {
            maior = original[i];
            indMaior = i;
        }
        if (original[i] < menor) {
            menor = original[i];
            indMenor = i;
        }

        // Contagem de Pares e Ímpares
        if (original[i] % 2 == 0) pares++;
        else impares++;

        // Geração do vetor inverso
        inverso[N - 1 - i] = original[i];
    }

    printf("\nVetor invertido: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", inverso[i]);
    }

    printf("\n\nMaior valor: %d no indice [%d]", maior, indMaior);
    printf("\nMenor valor: %d no indice [%d]", menor, indMenor);
    printf("\nPares: %d | Impares: %d", pares, impares);

    // Execução da busca linear
    printf("\n\nDigite um valor para buscar no vetor: ");
    scanf("%d", &buscaChave);
    for (int i = 0; i < N; i++) {
        if (original[i] == buscaChave) {
            encontrado = i;
            break;
        }
    }

    if (encontrado != -1) {
        printf("Valor encontrado no indice: %d\n", encontrado);
    } else {
        printf("O valor nao existe no vetor.\n");
    }

    return 0;
}