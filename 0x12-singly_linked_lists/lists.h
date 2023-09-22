#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct el_list - singly linked list
 * @str: string
 * @len: length of string
 * @next: pointer for next node
 */

typedef struct el_list
{
	char *str;
	unsigned int len;
	struct el_list *next;
}list_t;

size_t print_list(const list_t *h);

#endif
