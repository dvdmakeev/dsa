#include <stdlib.h>

#include "stack.h"

stack_t* create_stack(int capacity)
{
    stack_t* stack = (stack_t*)malloc(sizeof(stack_t));
    stack->capacity = capacity;
    stack->top = -1;

    stack->items = (int*)malloc(sizeof(int) * capacity);

    return stack;
}

int is_empty(stack_t* stack)
{
    return stack->top < 0;
}

int is_full(stack_t* stack)
{
    return stack->top >= stack->capacity;
}

void push(stack_t* stack, int val)
{
    stack->top++;
    stack->items[stack->top] = val;
}

int pop(stack_t* stack)
{
    return stack->items[stack->top--];
}

int peek(stack_t* stack)
{
    return stack->items[stack->top];
}
