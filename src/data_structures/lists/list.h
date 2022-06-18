#ifndef LIST_H
#define LIST_H

typedef struct sl_list {
    int val;
    struct sl_list* next;
} sl_list_t;

sl_list_t* create_sl_list();

void delete_sl_list(sl_list_t* head);

sl_list_t* tail_sl_list(sl_list_t* head);

void append_sl_list(sl_list_t* head, int val);

void print_sl_list(sl_list_t* head);

#endif