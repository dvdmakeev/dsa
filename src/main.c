#include "arrays/array_list.h"

#include <stdio.h>

int main()
{
    array_list_t* arr = arr_list_create();

    for (int i = 0; i < 15; ++i)
    {
        arr_list_append(i, arr);
    }

    arr_list_print(arr);

    return 0;
}