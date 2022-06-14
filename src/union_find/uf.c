#include <stdlib.h>
#include "uf.h"

uf_t* create_uf(int n)
{
    uf_t* uf = malloc(sizeof(uf_t));

    uf->n = n;
    uf->items = malloc(sizeof(int) * n);

    for (int i = 0; i < n; ++i)
    {
        uf->items[i] = i;
    }

    return uf;
}

void delete_uf(uf_t* uf)
{
    free(uf->items);
    free(uf);
}

void union_items(uf_t* uf, int p, int q)
{
    int pid = uf->items[p];
    int qid = uf->items[q];
    for (int i = 0; i < uf->n; ++i)
    {
        if (uf->items[i] == pid)
        {
            uf->items[i] = qid;
        }
    }
}

int connected(uf_t* uf, int p, int q)
{
    return uf->items[p] == uf->items[q];
}

int find_connected_component(uf_t* uf, int p)
{
    return 0;
}

int count_connected_components(uf_t* uf)
{
    return 0;
}