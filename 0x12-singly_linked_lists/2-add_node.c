#include "lists.h"

/**
 * add_node - adds a new node at the head of the linked list
 * @head: pointer to the list
 * @str: string to add to node
 * Return: the memory location of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int index;

	index = 0;

	while (str[index])
	{
		index++;
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = index;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}




