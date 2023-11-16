#include <stdio.h>
#include "tamanhos.h"

#define TAMANHO 4

const int TAMANHOS[TAMANHO] = {100, 1000, 10000, 100000};

int tamanho()
{
    return TAMANHO;
}

const int *get_tamanhos()
{
    return TAMANHOS;
}