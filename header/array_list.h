#ifndef POS_CVICENIE07_ARRAYLIST_ARRAY_LIST_H
#define POS_CVICENIE07_ARRAYLIST_ARRAY_LIST_H

#include <stdio.h>
#include "date.h"

typedef struct array_list {
    int capacity;
    int size;
    DATE* array;
} ARRAY_LIST;

//potrebujeme metodu na inicializaciu a destrukciu struktury
void array_list_init(ARRAY_LIST* list);
void array_list_dispose(ARRAY_LIST* list);
void array_list_add(ARRAY_LIST* list, const DATE* date);

void array_list_print(const ARRAY_LIST* list);

#endif //POS_CVICENIE07_ARRAYLIST_ARRAY_LIST_H
