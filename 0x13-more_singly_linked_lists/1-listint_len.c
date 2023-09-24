#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to list to check
 * Return: NUmber of elements in list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter;

	counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
