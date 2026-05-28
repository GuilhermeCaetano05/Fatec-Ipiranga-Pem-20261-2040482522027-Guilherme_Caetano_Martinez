#include <stdio.h>

int main() {
    float vet[10];
    float soma = 0, media, maior, menor, somaAcimaMedia = 0;

    printf("Digite 10 elementos reais:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vet[i]);
    }

    // Passagem única (loop único) para coletar estatísticas básicas
    maior = menor = vet[0];
    for (int i = 0; i < 10; i++) {
        soma += vet[i];
        if (vet[i] > maior) maior = vet[i];
        if (vet[i] < menor) menor = vet[i];
    }
    media = soma / 10.0f;

    // Cálculo da soma dos valores estritamente acima da média calculada
    for (int i = 0; i < 10; i++) {
        if (vet[i] > media) {
            somaAcimaMedia += vet[i];
        }
    }

    printf("\nMedia aritmetica: %.2f\n", media);
    printf("Maior valor: %.2f | Menor valor: %.2f\n", maior, menor);
    printf("Soma dos valores acima da media: %.2f\n", somaAcimaMedia);

    return 0;
}