#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include <stdlib.h>

#define INITIAL_SIZE 2
#define INCREASE_STEP 2

typedef struct array_list {
    int* array;
    int last_i;
    int size;
} array_list_t;

array_list_t* arr_list_create();

void arr_list_delete(array_list_t* arr_list);

int arr_list_get(int i, array_list_t* arr_list);

void arr_list_set(int i, int n, array_list_t* arr_list);

void arr_list_append(int n, array_list_t* arr_list);

void arr_list_insert(int i, int n, array_list_t* arr_list);

void arr_list_remove(int i, array_list_t* arr_list);

int arr_list_size(array_list_t* arr_list);

void arr_list_print(array_list_t* arr_list);

#endif