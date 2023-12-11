#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at index
 * @h: double pointer to list
 * @idx: index of new node
 * @n: value of new node
 * Return: address of new node (on success), else NULL;
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = NULL, *temp = NULL, *temp2 = NULL;

	if (idx == 0)
		newnode = add_dnodeint(h, n);
	else
	{
		temp = *h;
		while (idx > 1)
		{
			if (temp->next == NULL)
			{
				newnode = add_dnodeint_end(h, n);
				return (newnode);
			}
			temp = temp->next;
			idx--;
		}
		temp2 = temp->next;
		if (!temp2)
			newnode = add_dnodeint_end(h, n);
		else
		{
			newnode = malloc(sizeof(dlistint_t));
			if (!newnode)
				return (NULL);

			newnode->n = n;
			temp->next = newnode;
			temp2->prev = newnode;
			newnode->prev = temp;
			newnode->next = temp2;
		}
	}

	return (newnode);
}
