#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"


LinkedList* __LinkedList_create() {
    return NULL;
}


void __LinkedList_insert(LinkedList* list, int info) {
    if (list == NULL) {
        // list = (LinkedList*) malloc(sizeof(LinkedList));
        list->info = info;
        list->next = __LinkedList_create();

        printf("Valor: %d\n", list->info);
        printf("Next: %d\n", list->next);
        printf("Ponteiro: %d\n", list);
    } else
        __LinkedList_insert(list->next, info);
}


LinkedList* __LinkedList_insertAt(LinkedList* list, int pos, int info) {
    
}


int __LinkedList_size(LinkedList* list) {
    if (list == NULL)
        return 0;
    else
        return __LinkedList_size(list->next);
}





int main() {

    LinkedList* list = __LinkedList_create();

    __LinkedList_insert(list, 3);

    printf("valor2: %d\n", list);

    //printf("valor: %d", list->info);


    // for (int i = 0; i < 10; i++)
        // __LinkedList_insert(list, 0);


    // printf("List size: %d", __LinkedList_size(list));

}
