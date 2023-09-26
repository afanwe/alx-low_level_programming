#include "lists.h"

/**
 * get_nodeint_at_index - finds nth node at the linked list
 * @head: node to start at
 * @index: index of node to find
 * Return: NULL if index is not found and node if found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}
