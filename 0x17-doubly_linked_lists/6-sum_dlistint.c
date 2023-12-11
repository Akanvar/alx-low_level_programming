#include "lists.h"
/**
 * sum_dlistint - returns sum of all data in a doubly linked list
 * @head: pointer to list;
 *
 * Return: sum of data, else 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;
	int result = 0;

	if (!head)
		return (0);

	temp = head;
	while (temp)
	{
		result += temp->n;
		temp = temp->next;
	}
	return (result);
}
