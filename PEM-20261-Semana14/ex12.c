#include <stdio.h>

// Função de troca de valores
void troca(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

// Retorna menor e maior elemento via ponteiros de retorno
void minMax(int *v, int n, int *min, int *max) {
    *min = *max = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] < *min) *min = v[i];
        if (v[i] > *max) *max = v[i];
    }
}

// Normaliza o vetor dividindo pelo maior valor encontrado
void normalizaVetor(float *v, int n) {
    float maior = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > maior) maior = v[i];
    }
    if (maior > 0) {
        for (int i = 0; i < n; i++) {
            v[i] = v[i] / maior;
        }
    }
}

int main() {
    int x = 10, y = 20;
    printf("Antes da troca: x = %d, y = %d\n", x, y);
    troca(&x, &y);
    printf("Depois da troca: x = %d, y = %d\n\n", x, y);

    int vet[5] = {12, 45, 2, 67, 34};
    int min, max;
    minMax(vet, 5, &min, &max);
    printf("Vetor: Minimo = %d, Maximo = %d\n\n", min, max);

    float vetFloat[4] = {10.0f, 50.0f, 100.0f, 25.0f};
    printf("Antes da normalizacao: %.1f %.1f %.1f %.1f\n", vetFloat[0], vetFloat[1], vetFloat[2], vetFloat[3]);
    normalizaVetor(vetFloat, 4);
    printf("Depois da normalizacao: %.2f %.2f %.2f %.2f\n", vetFloat[0], vetFloat[1], vetFloat[2], vetFloat[3]);

    return 0;
}