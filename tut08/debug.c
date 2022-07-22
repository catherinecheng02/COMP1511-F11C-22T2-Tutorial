#include <stdio.h>

struct node {
    int value;
    struct node *next;
};

int count_length(struct node *list) {
    int length = 0;
    struct node *current = list;
    while (current != NULL) {
        length++;
        current = current->next;
    }
    
    return length;
}

void print_list(struct node *list) {
    struct node *current = list;
    while (current != NULL) {
        printf("%d\n", current->value);
        current = current->next;
    }
   

}
