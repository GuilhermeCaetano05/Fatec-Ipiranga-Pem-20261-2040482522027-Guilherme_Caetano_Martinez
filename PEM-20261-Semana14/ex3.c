#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (kg) e a altura (m): ");
    scanf("%f %f", &peso, &altura);

    // Tratamento de entradas inválidas
    if (peso <= 0 || altura <= 0) {
        printf("Erro: Peso e altura devem ser maiores que zero.\n");
        return 1;
    }

    imc = peso / (altura * altura);
    printf("IMC: %.2f - ", imc);

    // Estrutura de decisão if/if-else encadeada
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Peso normal\n");
    } else if (imc < 30.0) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }

    return 0;
}