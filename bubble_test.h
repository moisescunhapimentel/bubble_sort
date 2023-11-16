#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "bubble.h"

typedef struct
{
    TInfo info;
    double duracao_segundo;

} TInfoETempo;

int rand_int(int menor, int maior);

double tempo_em_segundo(clock_t start, clock_t end);

void criar_vetor_ordenado(TData vetor[], int tamanho);

void criar_vetor_inverso(TData vetor[], int tamanho);

void criar_vetor_aleatorio(TData vetor[], int tamanho);

TInfoETempo tempo_ordenacao(TData vetor[], int tamanho);
