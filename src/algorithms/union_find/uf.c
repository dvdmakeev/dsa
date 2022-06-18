#include <stdlib.h>
#include "uf.h"

uf_t* create_uf(int n)
{
    uf_t* uf = malloc(sizeof(uf_t));

    uf->n = n;
    uf->items = malloc(sizeof(int) * n);
    uf->size = malloc(sizeof(int) * n);

    for (int i = 0; i < n; ++i)
    {
        uf->items[i] = i;
        uf->size[i] = 1;
    }

    return uf;
}

void delete_uf(uf_t* uf)
{
    free(uf->items);
    free(uf->size);
    free(uf);
}

int root(uf_t* uf, int p)
{
    while (uf->items[p] != p)
    {
        uf->items[p] = uf->items[uf->items[p]];
        p = uf->items[p];
    }

    return p;
}

void union_items(uf_t* uf, int p, int q)
{
    int root_p = root(uf, p);
    int root_q = root(uf, q);

    if (uf->size[p] < uf->size[q])
    {
        uf->items[root_p] = root_q;
        uf->size[root_p] += uf->size[root_q];
    }
    else
    {
        uf->items[root_q] = root_p;
        uf->size[root_q] += uf->size[root_p];
    }
}

int connected(uf_t* uf, int p, int q)
{
    return root(uf, p) == root(uf, q);
}

int find_connected_component(uf_t* uf, int p)
{
    return 0;
}

int count_connected_components(uf_t* uf)
{
    return 0;
}