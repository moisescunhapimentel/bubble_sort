#include <stdio.h>
#include "opcao.h"
#include "tamanhos.h"
#include "bubble_test.h"

int main()
{
    TEntrada entrada = opcao();

    TData vetor[entrada.tamanho];

    printf("%d - %d\n", entrada.tipo_ordenacao, entrada.tamanho);

    if (entrada.tipo_ordenacao == 1)
    {
        criar_vetor_ordenado(vetor, entrada.tamanho);
    }
    else if (entrada.tipo_ordenacao == 2)
    {
        criar_vetor_inverso(vetor, entrada.tamanho);
    }
    else
    {
        criar_vetor_aleatorio(vetor, entrada.tamanho);
    }

    TInfoETempo infoTempo = tempo_ordenacao(vetor, entrada.tamanho);

    printf("%f\n", infoTempo.duracao_segundo);
    printf("Movimentos: %d | Comparações: %d\n", infoTempo.info.movimento, infoTempo.info.comparacao);

    return 0;
}