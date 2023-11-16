/**
 * Classe que contém o teste que foi utilizado para popular nossa tabela.
 */

// #include <stdio.h>
// #include "tamanhos.h"
// #include "bubble_test.h"

// const int RODADAS = 10;

// void copy(TData vetorA[], TData vetorB[], int tamanho)
// {
//     for (int i = 0; i < tamanho; i++)
//     {
//         vetorB[i] = vetorA[i];
//     }
// }

// void teste(TData vetor[], int tamanho)
// {
//     double soma = 0;

//     for (int i = 0; i < RODADAS; i++)
//     {
//         printf("RODADA: %d\n", i + 1);

//         TData copia[tamanho];
//         copy(vetor, copia, tamanho);

//         double duracao = tempo_ordenacao(copia, tamanho).duracao_segundo;

//         printf("%f segundos\n", duracao);

//         soma += duracao;
//     }
//     printf("Média %f\n", soma / RODADAS);

//     putchar('\n');
// }

// int main()
// {
//     for (int i = 0; i < tamanho(); i++)
//     {
//         printf("TAMANHO ATUAL: %d\n\n", get_tamanhos()[i]);

//         TData ordenado[get_tamanhos()[i]];
//         criar_vetor_ordenado(ordenado, get_tamanhos()[i]);
//         printf("TESTE ORDENADO\n");
//         teste(ordenado, get_tamanhos()[i]);

//         TData inversamente_ordenado[get_tamanhos()[i]];
//         criar_vetor_inverso(inversamente_ordenado, get_tamanhos()[i]);

//         printf("TESTE inversamente_ordenado\n");
//         teste(inversamente_ordenado, get_tamanhos()[i]);

//         TData aleatorio[get_tamanhos()[i]];
//         criar_vetor_aleatorio(aleatorio, get_tamanhos()[i]);

//         printf("TESTE aleatorio\n");
//         teste(aleatorio, get_tamanhos()[i]);
//     }
// }