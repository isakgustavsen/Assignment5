#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/*
 * List implementation
 */

typedef struct listnode listnode_t;

struct listnode {
    listnode_t  *next;
    void        *item;
};

struct list {
    listnode_t *head;
    int numitems;
};

/*
 * Returns a newly created, empty list.
 */
list_t *list_create(void)
{
    /* Implement me */
}

/*
 * Frees the list; list and nodes, but not the items it holds.
 */
void list_destroy(list_t *list)
{
    /* Implement me */
}

/*
 * Adds an item first in the provided list.
 */
void list_addfirst(list_t *list, void *item)
{
    /* Implement me */
}

/*
 * Adds an item last in the provided list.
 */
void list_addlast(list_t *list, void *item)
{
    /* Implement me */
}

/*
 * Removes an item from the provided list, only freeing the node.
 */
void list_remove(list_t *list, void *item)
{
    /* Implement me */
}

/*
 * Return the number of items in the list.
 */
int list_size(list_t *list)
{
    /* Implement me */
}



/*
 * Iterator implementation
 */
 

struct list_iterator {
    listnode_t *next;
    list_t *list;
};


/*
 * Return a newly created list iterator for the given list.
 */
list_iterator_t *list_createiterator(list_t *list)
{
    /* Implement me */
}


/*
 * Free the memory for the given list iterator.
 */
void list_destroyiterator(list_iterator_t *iter)
{
    /* Implement me */
}


/*
 * Move iterator to next item in list and return current.
 */
void *list_next(list_iterator_t *iter)
{
    /* Implement me */
}


/*
 * Let iterator point to first item in list again.
 */
void list_resetiterator(list_iterator_t *iter)
{
    /* Implement me */
}
