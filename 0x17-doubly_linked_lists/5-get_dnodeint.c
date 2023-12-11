#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node in a doubly linked list
 * @head: head pointer
 * @index: index of node
 * Return: address of nth node (on success), else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int count = 0;

	if (!head)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (index == count)
			return (temp);
		count++;
		temp = temp->next;
	}
	return (NULL);
}
