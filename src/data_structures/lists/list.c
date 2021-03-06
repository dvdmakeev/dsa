#include <stdio.h>
#include <stdlib.h>

#include "list.h"

sl_list_t* create_sl_list_node()
{
    sl_list_t* node = malloc(sizeof(sl_list_t));
    node->next = NULL;

    return node;
}

void delete_sl_list(sl_list_t* head)
{
    sl_list_t* cur = head;
    while (cur != NULL)
    {
        sl_list_t* tmp = cur->next;
        free(cur);
        cur = tmp;
    }
}

sl_list_t* create_sl_list_valued_node(int val)
{
    sl_list_t* node = create_sl_list_node();
    node->val = val;

    return node;
}

sl_list_t* create_sl_list()
{
    return create_sl_list_node();
}

sl_list_t* tail_sl_list(sl_list_t* head)
{
    sl_list_t* cur = head;

    while (cur->next != NULL)
    {
        cur = cur->next;
    }

    return cur;
}

void append_sl_list(sl_list_t* head, int val)
{
    sl_list_t* old_tail = tail_sl_list(head);
    sl_list_t* new_tail = create_sl_list_valued_node(val);

    old_tail->next = new_tail;
}

int size_sl_list(sl_list_t* head)
{
    int size = 0;
    sl_list_t* cur_node = head;
    while (cur_node != NULL)
    {
        cur_node = cur_node->next;
        ++size;
    }

    return size;
}

void print_sl_list(sl_list_t* head)
{
    if (head == NULL)
    {
        printf("[ ]");
    }
    else
    {
        sl_list_t* cur = head;
        printf("[ %d ", cur->val);
        cur = cur->next;
        
        while (cur != NULL)
        {
            printf("-> %d ", cur->val);
            cur = cur->next;
        }
        printf("]");
    }
    printf("\n");
}
