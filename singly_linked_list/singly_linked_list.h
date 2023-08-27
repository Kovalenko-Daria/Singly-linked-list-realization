#ifndef SINGLY_LINKED_LIST_H

#define SINGLY_LINKED_LIST_H

#include <stdlib.h>

struct node {
    int elem;
    struct node* next_elem;
};

struct node* init(int num);
struct node* add_elem(struct node* elem, int num);
struct node* find_elem(int num, struct node* root);
struct node* remove_elem(struct node* elem, struct node* root);
void destroy(struct node* root);

#endif