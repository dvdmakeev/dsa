#include "heap.h"
#include "../arrays/array_list.h"

heap_t* create_heap(HEAP_TYPE type)
{
    heap_t* heap = malloc(sizeof(heap_t));
    heap->array = arr_list_create();
    heap->type = type;

    return heap;
}

void delete_heap(heap_t* heap)
{
    arr_list_delete(heap->array);
    free(heap);
}

void heap_push(heap_t* heap, int value)
{

}

int heap_pop(heap_t* heap)
{
    
}
