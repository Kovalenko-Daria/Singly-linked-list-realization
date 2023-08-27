#include "singly_linked_list.h"

struct node* init(int num) {
    struct node* new_list = malloc(sizeof(struct node));
    new_list->elem = num;
    new_list->next_elem = NULL;
    return new_list;
}
struct node* add_elem(struct node* elem, int num) {
    struct node* new_elem = init(num);
    new_elem->next_elem = elem->next_elem;
    elem->next_elem = new_elem;
    return new_elem;
}

struct node* find_door(int num, struct node* root) {
    struct node* elem = NULL;
    struct node* search = root;
    while (search) {
        if (search->elem == num) {
            elem = search;
            break;
        }
        search = search->next_elem;
    }
    return elem;
}

struct node* remove_elem(struct node* elem, struct node* root) {
    struct node* new_root = root;
    if (elem == root) {
        new_root = root->next_elem;
        free(elem);
    } else {
        struct node* search = root;
        while (search) {
            if (search->next_elem == elem) {
                search->next_elem = elem->next_elem;
                free(elem);
            }
            search = search->next_elem;
        }
    }
    return new_root;
}

void destroy(struct node* root) {
    struct node* elem = root;
    while (elem) {
        struct node* next_el = elem->next_elem;
        free(elem);
        elem = next_el;
    }
}