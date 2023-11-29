#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in the list
 * @h: Pointer to the pointer to the head of the list
 * @idx: Index of the list
 * @n: Value to be stored in the new node
 * Return: The address of the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp = *h;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *h;
		if (*h)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = temp->next;
	newnode->prev = temp;

	if (temp->next)
		temp->next->prev = newnode;
	temp->next = newnode;
	return (newnode);
}
