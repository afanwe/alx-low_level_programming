#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the linked list.
 * @head: linked list to add to
 * @n: element to add
 * Return: new linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node != NULL)
	{
		node->n = n;
		node->next = *head;
		*head = node;
	}
	else
		return (NULL);

	return (node);
}
