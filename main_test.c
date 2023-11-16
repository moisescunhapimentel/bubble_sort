#include <stdio.h>
#include "tamanhos.h"
#include "bubble.h"

void teste()
{
    for (int i = 0; i < tamanho(); i++)
    {
        TData ordenado[get_tamanhos()[i]];
        TData inversamente_ordenado[get_tamanhos()[i]];
        TData aleatorio[get_tamanhos()[i]];

        criar_vetor_ordenado(ordenado, get_tamanhos()[i]);
        criar_vetor_inverso(inversamente_ordenado, get_tamanhos()[i]);
        criar_vetor_aleatorio(aleatorio, get_tamanhos()[i]);
    }
}

int main()
{
    const int RODADAS = 1;

    for (int i = 0; i < RODADAS; i++)
    {
        teste();
    }
}