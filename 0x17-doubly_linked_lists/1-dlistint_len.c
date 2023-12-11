#include "lists.h"
/**
 * dlistint_len - returns number of elements in a doubly linked list
 * @h: constant head pointer
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t len = 0;

	if (h == NULL)
		return (len);
	while (temp)
	{
		len += 1;
		temp = temp->next;
	}

	return (len);
}
