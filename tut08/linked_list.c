// Linked list demo
// Written by Catherine Cheng z5310517
// 21-07-2022
#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next; // address of the next node
};

struct node *create_node(int val, struct node *n);
int main (void) {
    // Why are linked lists useful?
    // - easier to add elements in a certain position
    // - easier to remove elements 
    // - don't have to know the size of your data set 
   
   
    // How can we create a node?
    struct node *head = create_node(8, NULL);
    // printf("%d\n", head->value);
    // How do I add a node at the head
    head = create_node(7, head);
    //printf("%d\n", head->value);
    //printf("%d\n", head->next->value);
 
    
    // How to go through a linked list?
    struct node *curr = head; // int i = 0;
    while(curr != NULL) { // i < size;
        //printf("%d\n", curr->value); // do something
        curr = curr->next; // i++;
    }
    
   
    // Printing the last element
    struct node *curr2 = head;
    while (curr2->next != NULL) {
        curr2 = curr2->next;
    
    }
    printf("%d\n", curr2->value);
  

}

struct node *create_node(int val, struct node *n) {
    struct node *new_node = malloc(sizeof(struct node));
    (*new_node).value = val;
    new_node->next = n;
    return new_node;

}




