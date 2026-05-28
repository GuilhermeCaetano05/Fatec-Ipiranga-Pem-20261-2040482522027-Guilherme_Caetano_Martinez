#include <stdio.h>

int main() {
    // Declaração de variáveis conforme especificado no enunciado
    double n1, n2, n3, media;
    int p1, p2, p3;

    printf("Digite a nota 1 e seu peso: ");
    scanf("%lf %d", &n1, &p1);
    printf("Digite a nota 2 e seu peso: ");
    scanf("%lf %d", &n2, &p2);
    printf("Digite a nota 3 e seu peso: ");
    scanf("%lf %d", &n3, &p3);

    // Cálculo da média ponderada
    media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

    printf("\nMedia Ponderada: %.2f\n", media);
    
    // Exibição do tamanho em bytes usando sizeof
    printf("Tamanho de double (notas): %lu bytes\n", sizeof(double));
    printf("Tamanho de int (pesos): %lu bytes\n", sizeof(int));

    return 0;
}