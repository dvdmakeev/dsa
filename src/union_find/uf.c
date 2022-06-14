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

int root(uf_t* uf, int p)
{
    while (uf->items[p] != p)
    {
        p = uf->items[p];
    }

    return p;
}

void union_items(uf_t* uf, int p, int q)
{
    int root_p = root(uf, p);
    int root_q = root(uf, q);

    uf->items[root_p] = root_q;
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