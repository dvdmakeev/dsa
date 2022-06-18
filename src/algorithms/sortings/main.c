#include <stdio.h>
#include "sorts.h"

int is_sorted(int* arr, int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        if (arr[i] > arr[i + 1])
        {
            return 0;
        }
    }

    return 1;
}

int test_base()
{
    int array [7] = { 21, 34, 23, 1, 2, 3, 59 };

    selection_sort(array, 7);

    return is_sorted(array, 7);
}

int main()
{
    if (test_base() == 0)
    {
        printf("Success\n");
    }
    else
    {
        printf("Failed\n");
    }
}