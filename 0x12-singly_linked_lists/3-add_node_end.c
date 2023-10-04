#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 * @head: pointer to pointer to the linked list
 * @str: string to add to new node
 * Return: returns new element address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	unsigned int length;

	tmp = *head;
	length = 0;

	while (str[length])
		length++;
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
