#include <stdlib.h>

#include "stack.h"

stack_t* create_stack()
{
    stack_t* stack = malloc(sizeof(stack_t));
    stack->top = NULL;

    return stack;
}

void delete_stack(stack_t* stack)
{
    if (stack != NULL)
    {
        delete_sl_list(stack->top);
        free(stack);
    }
}

void push(stack_t* stack, int val)
{
    sl_list_t* new_top = create_sl_list_valued_node(val);
    new_top->next = stack->top;
    stack->top = new_top;
}

int pop(stack_t* stack)
{
    sl_list_t* top = stack->top;
    sl_list_t* new_top = top->next;
    stack->top = new_top;

    return top->val;
}

int peek(stack_t* stack)
{
    return stack->top->val;
}

int is_empty(stack_t* stack)
{
    return stack->top == NULL;
}

int size(stack_t* stack)
{
    return size_sl_list(stack->top);
}
