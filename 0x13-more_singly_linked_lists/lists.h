#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct el_list - singly linked list
 * @n: length of string
 * @next: pointer for next node
 */

typedef struct el_list
{
	unsigned int n;
	struct el_list *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
