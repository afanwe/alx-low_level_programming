#include "lists.h"

/**
 * free_listint2 - frees emory used by linked list
 * @head: linked list using memory
 */

void free_listint2(listint_t **head)
{
	if (*head == NULL || head == NULL)
	{
		return;
	}

	listint_t *current_node;
	listint_t *next_node;

	current_node = *head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	*head = NULL;
}
