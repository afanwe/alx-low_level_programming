#include "lists.h"

/**
 * list_len - calculates and returns the number of elements in linked list
 * @h: pointer to the list
 * Return: number of elements in list h
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
