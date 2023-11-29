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
	dlistint_t *newnode;
	dlistint_t *temp;

	temp = *h;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = temp;
		*h = newnode;
		return (*h);
	}

	while (idx > 1)
	{
		temp = temp->next;
		idx--;
		if (!temp)
		{
			free(newnode);
			return (NULL);
		}
	}

	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
