#include "opcao.h"
#include <stdio.h>
#include <stdlib.h>
#include "tamanhos.h"

TEntrada opcao()
{
    TEntrada entrada;

    while (1)
    {
        printf("Tamanhos disponiveis: %d", get_tamanhos()[0]);

        for (int i = 1; i < tamanho(); i++)
        {
            printf(", %d", get_tamanhos()[i]);
        }

        putchar('\n');

        printf("Digite o tamanho do vetor: ");
        scanf("%d", &entrada.tamanho);

        int ehTamanho = 0;

        for (int i = 0; i < tamanho(); i++)
        {
            if (entrada.tamanho == get_tamanhos()[i])
            {
                ehTamanho = 1;
                break;
            }
        }

        if (ehTamanho)
        {
            break;
        }

        printf("Tamanho inválido!\n\n");
    }

    putchar('\n');

    while (1)
    {
        printf("1 - Ordenado\n");
        printf("2 - Inversamente Ordenado\n");
        printf("3 - Aleatorio\n");

        printf("Digite o tipo da odernação: ");
        scanf("%d", &entrada.tipo_ordenacao);

        if (entrada.tipo_ordenacao >= 1 && entrada.tipo_ordenacao <= 3)
        {
            break;
        }

        printf("Opção inválida!\n\n");
    }

    printf("%d - %d\n", entrada.tipo_ordenacao, entrada.tamanho);

    return entrada;
}