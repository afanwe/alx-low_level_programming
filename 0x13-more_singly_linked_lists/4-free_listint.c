#include "lists.h"

/**
 * free_listint - frees emory used by linked list
 * @head: linked list using memory
 */

void free_listint(listint_t *head)
{
	listnt_t *current_node;
	listnt_t *next_node;

	current_node = head;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}
