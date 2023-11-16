#include <stdint.h>
#include <stdlib.h>
#include "bubble.h"

TInfo bubble_sort(TData data[], int tamanho)
{
    TInfo info;
    TData temp;

    info.comparacao = 0;
    info.movimento = 0;

    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int j = i + 1; j < tamanho; j++)
        {
            info.comparacao++;

            if (data[i].value > data[j].value)
            {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;

                info.movimento++;
            }
        }
    }

    return info;
}
