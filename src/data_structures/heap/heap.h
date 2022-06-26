#ifndef HEAP_H
#define HEAP_H

#include "../arrays/array_list.h"

typedef enum {
    ASCENDING,
    DESCENDING
} HEAP_TYPE;

typedef struct heap {
    array_list_t* array;
    HEAP_TYPE type;
} heap_t;

heap_t* create_heap(HEAP_TYPE type);

void delete_heap(heap_t* heap);

void heap_push(heap_t* heap, int value);

int heap_pop(heap_t* heap);

#endif