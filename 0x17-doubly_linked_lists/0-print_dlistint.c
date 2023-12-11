#include "lists.h"
/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: constant head pointer
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count = 0;

	if (h == 0)
		return (0);
	while (temp)
	{
		printf("%d\n", temp->n);
		count += 1;
		temp = temp->next;
	}
	return (count);
}
