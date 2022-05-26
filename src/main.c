#include "lists/list.h"

int main()
{
    sl_list_t* head = create_sl_list();
    head->val = 10;

    for (int i = 9; i >= 0; --i)
    {
        append_sl_list(head, i);
    }

    print_sl_list(head);

    return 0;
}