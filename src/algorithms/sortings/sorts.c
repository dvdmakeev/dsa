#include "sorts.h"

void swap(int* arr, int i, int j)
{
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

void selection_sort(int* arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        int to_swap = i;
        for (int j = i; j < size; ++j)
        {
            if (arr[to_swap] < arr[j])
            {
                to_swap = j;
            }
        }

        swap(arr, to_swap, i);
    }
}

void insertion_sort(int* arr, int size)
{
    for (int i = 1; i < size; ++i)
    {
        for (int j = i; j > 0; --j)
        {
            if (arr[j] > arr[j - 1])
            {
                swap(arr, j, j - 1);
            }
            else
            {
                break;
            }
        }
    }
}