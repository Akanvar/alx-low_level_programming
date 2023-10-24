#include "lists.h"
/**
 * add_nodeint_end - adds node at the end of list
 * @head: double pointer to list
 * @n: data to be inserted
 * Return: address of node, else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *tmp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	tmp = *head;
	if (tmp == NULL)
		*head = newnode;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
	}
	return (newnode);
}

