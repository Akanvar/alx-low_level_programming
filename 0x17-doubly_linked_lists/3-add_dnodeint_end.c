#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: double head pointer
 * @n: constant integer to be added
 *
 * Return: address of new element (on success)
 *         NULL (on failure)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
		newnode->prev = temp;
		newnode->next = NULL;
	}
	else
	{
		newnode->prev = NULL;
		newnode->next = NULL;
		*head = newnode;
	}

	return (newnode);
}
