#include <stdio.h>
#include "arr_utils.h"

void print_arr(int* arr, int size)
{
    if (arr == NULL)
    {
        printf("[NULL]\n");
        return;
    }

    if (size == 0)
    {
        printf("[ ]\n");
        return;
    }

    printf("[ %d", arr[0]);

    for (int i = 1; i < size; ++i)
    {
        printf(",%d ", arr[i]);
    }

    printf("]\n");
}