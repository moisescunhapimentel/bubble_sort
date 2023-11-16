#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "bubble_test.h"

/**
 * Intervalo fechado [menor, maior]
 */
int rand_int(int menor, int maior)
{
    return (rand() % (maior - menor + 1)) + menor;
}

double tempo_em_segundo(clock_t start, clock_t end)
{
    return ((double)(end - start)) / CLOCKS_PER_SEC;
}

void criar_vetor_ordenado(TData vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i].value = 1 + i;
    }
}

void criar_vetor_inverso(TData vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i].value = tamanho - i;
    }
}

void criar_vetor_aleatorio(TData vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i].value = rand_int(1, tamanho);
    }
}

TInfoETempo tempo_ordenacao(TData vetor[], int tamanho)
{
    TInfoETempo info_tempo;

    clock_t start, end;

    start = clock();

    info_tempo.info = bubble_sort(vetor, tamanho);

    end = clock();

    info_tempo.duracao_segundo = tempo_em_segundo(start, end);

    return info_tempo;
}