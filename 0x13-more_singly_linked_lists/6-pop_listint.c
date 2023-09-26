#include "lists.h"

/**
 * pop_listint - deletes head node on linked lists
 * @head: head node to delete
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *current_node;

	if (head == NULL)
		return (0);

	current_node = *head;
	data = current_node->n;
	*head = current_node->next;

	free(current_node);

	return (data);
}
