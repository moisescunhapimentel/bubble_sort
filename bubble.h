#include <stdio.h>

typedef struct
{
    int comparacao;
    int movimento;
} TInfo;

typedef struct
{
    int value;
} TData;

TInfo bubble_sort(TData data[], int tamanho);
