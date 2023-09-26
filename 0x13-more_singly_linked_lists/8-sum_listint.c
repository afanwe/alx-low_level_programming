#include "lists.h"

/**
 * sum_listint - calculates the sum of all data in linked list
 * @head: node holding data
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int data_sum;

	if (head == NULL)
		return (0);

	data_sum = 0;

	while (head != NULL)
	{
		data_sum = head->n;
		head = head->next;
	}

	return (data_sum);
}
