#include <stdio.h>

int main() {
    int cm;
    // Justificativa dos tipos: float/double para precisão decimal na conversão de grandes distâncias
    float metros;
    double km, milhas;

    printf("Digite a distancia em centimetros: ");
    scanf("%d", &cm);

    // Controle de Overflow e Validação
    if (cm < 0) {
        printf("Erro: O valor informado deve ser positivo.\n");
        return 1; 
    }

    metros = cm / 100.0f;
    km = cm / 100000.0;
    milhas = km / 1.60934;

    printf("\nMetros: %.2fm\n", metros);
    printf("Quilometros: %.5fkm\n", km);
    printf("Milhas: %.5f milhas\n", milhas);

    return 0;
}