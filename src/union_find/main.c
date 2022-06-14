#include <stdio.h>
#include "uf.h"

int test_base()
{
    uf_t* uf = create_uf(10);

    union_items(uf, 1, 2);
    union_items(uf, 1, 3);
    union_items(uf, 1, 4);

    union_items(uf, 5, 6);
    union_items(uf, 5, 7);

    if (connected(uf, 1, 5))
    {
        return -1;
    }

    if (!connected(uf, 1, 3))
    {
        return -1;
    }

    if (!connected(uf, 5, 7))
    {
        return -1;
    }

    if (connected(uf, 8, 9))
    {
        return -1;
    }

    if (!connected(uf, 1, 1))
    {
        return -1;
    }

    if (!connected(uf, 9, 9))
    {
        return -1;
    }

    return 0;
}

int main()
{
    if (test_base() != 0)
    {
        printf("failed\n");
    }
    else
    {
        printf("success\n");
    }
}