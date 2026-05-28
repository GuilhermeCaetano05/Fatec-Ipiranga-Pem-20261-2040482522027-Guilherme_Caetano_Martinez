#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    /* 1. Verificação da Desigualdade Triangular */
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Triangulo Valido!\n");

        /* 2. Classificação quanto aos lados */
        if (a == b && b == c) {
            printf("Classificacao: Equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("Classificacao: Isosceles\n");
        } else {
            printf("Classificacao: Escaleno\n");
        }

        /* 3. Classificação quanto aos ângulos usando os quadrados dos lados */
        float a2 = a*a, b2 = b*b, c2 = c*c;
        if (a2 == b2 + c2 || b2 == a2 + c2 || c2 == a2 + b2) {
            printf("Angulo: Retangulo\n");
        } else if (a2 > b2 + c2 || b2 > a2 + c2 || c2 > a2 + b2) {
            printf("Angulo: Obtusangulo\n");
        } else {
            printf("Angulo: Acutangulo\n");
        }
    } else {
        printf("Erro: Os lados informados nao formam um triangulo valido.\n");
    }

    return 0;
}