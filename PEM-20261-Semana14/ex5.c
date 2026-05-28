#include <stdio.h>

int main() {
    char opcao;

    // do-while externo controla a interação de repetição do programa inteiro
    do {
        // Laço externo para os multiplicandos (1 a 10) usando 'for'
        for (int i = 1; i <= 10; i++) {
            printf("Tabuada do %d:\n", i);
            int j = 1;
            // Laço interno para os multiplicadores usando 'while'
            while (j <= 10) {
                printf("%d x %d = %d\t", i, j, i * j);
                j++;
            }
            printf("\n\n");
        }

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &opcao);

    } while (opcao != 'N' && opcao != 'n');

    return 0;
}