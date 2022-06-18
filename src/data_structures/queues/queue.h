#ifndef QUEUE_H
#define QUEUE_H

#include "../arrays/array_list.h"

typedef struct queue{
    array_list_t* queue_arr;
} queue_t;

queue_t* create_queue();

void delete_queue(queue_t* queue);

void enqueue(queue_t* queue, int val);

int dequeue(queue_t* queue);

int is_empty(queue_t* queue);

#endif