#include "lists.h"
/**
 * list_len - returns number of elements in list
 * @h: pointer to nodes
 * Return: number of list elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
