#include "../header/array_list.h"
#include <stdlib.h>

#define MIN_CAPACITY 4


static void array_list_increase_capacity(ARRAY_LIST* list) {
    list->capacity = list->capacity > 0 ? 2 * list->capacity : MIN_CAPACITY;
    list->array = realloc(list->array, 2 * list->capacity);
}

void array_list_init(ARRAY_LIST* list) {
    list->size = 0;
    list->capacity = MIN_CAPACITY;
    list->array = calloc(MIN_CAPACITY, sizeof(DATE));
}

void array_list_dispose(ARRAY_LIST* list) {
    list->capacity = 0;
    list->size = 0;
    free(list->array);
    list->array = NULL;
}

void array_list_add(ARRAY_LIST* list, const DATE* date) {
    if (list->size >= list->capacity) {
        array_list_increase_capacity(list);
    }

    for (int i = list->size - 1; i >= 0; i--) {
        if (date_compare(list->array[i], *date) < 0) {
            list->array[i + 1] = *date;
            list->size++;
            return;
        }
        else {
            list->array[i + 1] = list->array[i];
        }
    }

    list->array[0] = *date;
    list->size++;
}

void array_list_print(const ARRAY_LIST* list) {
    for (int i = 0; i < list->size; ++i) {
        date_print(list->array[i]);
        printf(" ");
    }
    printf("\n");
}
