#include <stdio.h>

// Função para exibir o tabuleiro formatado como grade
void exibir(int tab[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", tab[i][j]);
        }
        printf("\n");
    }
}

// Função que valida a simetria em relação à diagonal principal
int verificarSimetria(int tab[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (tab[i][j] != tab[j][i]) {
                return 0; // Não é simétrico
            }
        }
    }
    return 1; // É simétrico
}

int main() {
    // Matriz populada manualmente (hardcoded) para testes
    int tab[4][4] = {
        {1, 2, 3, 4},
        {2, 5, 6, 7},
        {3, 6, 8, 1},
        {4, 7, 1, 3}
    };

    printf("Tabuleiro:\n");
    exibir(tab);

    if (verificarSimetria(tab)) {
        printf("\nPares sao simetricos a diagonal principal!\n");
    } else {
        printf("\nNao ha simetria estrita.\n");
    }

    // Exibição das diagonais
    printf("Diagonal Principal: ");
    for (int i = 0; i < 4; i++) printf("%d ", tab[i][i]);
    
    printf("\nDiagonal Secundaria: ");
    for (int i = 0; i < 4; i++) printf("%d ", tab[i][3 - i]);
    printf("\n");

    return 0;
}