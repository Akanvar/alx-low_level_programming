#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginning of a doubly linked list
 * @head: Double head pointer
 * @n: constant integer to be added
 *
 * Return: address of new element(success)
 *         NULL (on failure)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;

	return (*head);
}
