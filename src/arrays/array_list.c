#include <stdio.h>
#include <stdlib.h>

#include "array_list.h"

array_list_t* arr_list_create()
{
    array_list_t* arr_list = malloc(sizeof(array_list_t));
    arr_list->array = malloc(sizeof(int) * INITIAL_SIZE);
    
    arr_list->size = INITIAL_SIZE;
    arr_list->last_i = -1;

    return arr_list;
}

void arr_list_delete(array_list_t* arr_list)
{
    free(arr_list->array);
    free(arr_list);
}

int arr_list_get(int i, array_list_t* arr_list)
{
    return arr_list->array[i];
}

void arr_list_set(int i, int n, array_list_t* arr_list)
{
    arr_list->array[i] = n;
}

void increase_capacity_if_needed(array_list_t* arr_list)
{
    if (arr_list->last_i + 1 >= arr_list->size)
    {
        int new_size = arr_list->size * INCREASE_STEP;
        arr_list->array = realloc(arr_list->array, sizeof(int) * new_size);
        arr_list->size = new_size;
    }
}

void arr_list_append(int n, array_list_t* arr_list)
{
    increase_capacity_if_needed(arr_list);

    arr_list->last_i += 1;
    arr_list->array[arr_list->last_i] = n;
}

void arr_list_insert(int i, int n, array_list_t* arr_list)
{
}

void arr_list_remove(int i, array_list_t* arr_list)
{
}

int arr_list_size(array_list_t* arr_list)
{
    return arr_list->last_i + 1;
}

void arr_list_print(array_list_t* arr_list)
{
    printf("[ ");

    int size = arr_list_size(arr_list);
    for (int i = 0; i < size - 1; ++i)
    {
        printf("%d, ", arr_list->array[i]);
    }

    if (size > 0)
    {
        printf("%d ", arr_list->array[size - 1]);
    }

    printf("]\n");
}