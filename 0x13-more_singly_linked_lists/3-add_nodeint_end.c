#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: linked list to add to
 * @n: element to end
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *next_node = malloc(sizeof(listint_t));

	if (next_node != NULL)
	{
		next_node->n = n;
		next_node->next = NULL;

		if (*head != NULL)
		{
			listint_t *current_node = *head;

			while (current_node->next != NULL)
				current_node = current_node->next;
			current_node->next = next_node;
		}
		else
			*head = next_node;
	}
	else
		return (NULL);

	return (next_node);
}
