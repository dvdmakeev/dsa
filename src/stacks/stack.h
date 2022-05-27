#ifndef STACK_H
#define STACK_H

typedef struct stack {
    int* items;
    int capacity;
    int top;
} stack_t;

stack_t* create_stack(int capacity);

void push(stack_t* stack, int val);

int pop(stack_t* stack);

int peek(stack_t* stack);

int is_empty(stack_t* stack);

int is_full(stack_t* stack);

#endif