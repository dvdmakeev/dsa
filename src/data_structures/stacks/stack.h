#ifndef STACK_H
#define STACK_H

#include "../lists/list.h"

typedef struct stack {
    sl_list_t* top;
} stack_t;

stack_t* create_stack();

void delete_stack(stack_t* stack);

void push(stack_t* stack, int val);

int pop(stack_t* stack);

int peek(stack_t* stack);

int is_empty(stack_t* stack);

int size(stack_t* stack);

#endif