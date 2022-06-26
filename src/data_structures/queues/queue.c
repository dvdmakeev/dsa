#include "queue.h"

queue_t* create_queue()
{
    queue_t* queue = malloc(sizeof(queue_t));
    queue->queue_arr = arr_list_create();

    return queue;
}

void delete_queue(queue_t* queue)
{
    if (queue != NULL)
    {
        arr_list_delete(queue->queue_arr);
        free(queue);
    }
}

void enqueue(queue_t* queue, int val)
{
    arr_list_append(val, queue->queue_arr);
}

int dequeue(queue_t* queue)
{
    int first = arr_list_get(0, queue->queue_arr);
    arr_list_remove(0, queue->queue_arr);

    return first;
}

int is_empty(queue_t* queue)
{
    return arr_list_size(queue->queue_arr) > 0;
}