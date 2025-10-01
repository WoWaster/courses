#include <stdio.h>
#include <stdlib.h>

typedef struct ListElement {
    int value;
    struct ListElement* next;
} ListElement;

int main(void)
{
    ListElement* element1 = malloc(sizeof(ListElement));
    element1->value = 1;
    ListElement* element2 = malloc(sizeof(ListElement));
    element2->value = 2; element2->next = NULL;
    element1->next = element2;

    printf("%i - %i", element1->value, element1->next->value);

    free(element1); free(element2);

    return 0;
}
