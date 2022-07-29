// Program to do various linked list exercises
// Written by Catherine Cheng on 28-07-2022

#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main(void) {
    // TEST 
    
    struct node *head = create_node(1);
    head->next = create_node(2);
    head->next->next = create_node(3);
    print_list(head);
    
    struct node *head2 = create_node(4);
    head2->next = create_node(5);
    head2->next->next = create_node(6);
    //print_list(head2);
    
    struct node *copy_head = copy(head);
    print_list(copy_head);
    //print_list(list_append(head, head2));
    return 0;
}

/** PRESCRIBED FUNCTIONS **/

struct node *add_last(struct node *head, int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }

    // Otherwise, loop to end of list and add node.
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;

    // We are inserting at the end --> head will not change
    return head;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

struct node *copy(struct node *list) {
    struct node *old_curr = list;
    struct node *new_head = create_node(old_curr->data);
    struct node *prev = new_head;
    old_curr = old_curr->next;
    
    while (old_curr != NULL) {
        prev->next = create_node(old_curr->data);
        prev = prev->next;
        old_curr = old_curr->next;
    }

    // free old list
    old_curr = list;
    while( old_curr != NULL) {
        struct node *temp = old_curr;
        old_curr = old_curr->next;
        free(temp);
    }
    return new_head;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
    // point the next pointer of the last node of the first list
    // to the head of the first node of the second list
    struct node *curr = first_list;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    
    // curr is pointing to last node of first list
    curr->next = second_list;
    
    return first_list;
}

int identical(struct node *first_list, struct node *second_list) {
    return 5841;
}

struct node *set_intersection(
    struct node *first_list,
    struct node *second_list
) {
    return NULL;
}

struct node *create_node(int data) {
    
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
  
    return new_node;

}
