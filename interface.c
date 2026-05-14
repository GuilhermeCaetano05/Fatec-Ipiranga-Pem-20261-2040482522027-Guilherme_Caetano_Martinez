#include <stdio.h>
#include "interface.h"
#include "recursao.h"

void menu()
{
    int opcao;
    int numero;
    int base;
    int expoente;

    do
    {
        printf("\n===== CUCC - Calculadora Cientifica =====\n");
        printf("1 - Converter Decimal para Binario\n");
        printf("2 - Calcular Potencia\n");
        printf("3 - Somar Digitos\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                printf("Digite um numero decimal: ");
                scanf("%d", &numero);

                printf("Binario: ");
                decToBin(numero);
                printf("\n");
                break;

            case 2:
                printf("Digite a base: ");
                scanf("%d", &base);

                printf("Digite o expoente: ");
                scanf("%d", &expoente);

                printf("Resultado: %d\n", potencia(base, expoente));
                break;

            case 3:
                printf("Digite um numero inteiro: ");
                scanf("%d", &numero);

                printf("Soma dos digitos: %d\n", somaDigitos(numero));
                break;

            case 0:
                printf("Encerrando o sistema...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 0);
}