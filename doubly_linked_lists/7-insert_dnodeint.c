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
	dlistint_t *new;
	dlistint_t *temp;

	temp = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*h = new;
		return (new);
	}

	while (idx > 1)
	{
		temp = temp->next;
		idx--;
		if (!temp)
		{
			free(new);
				return (NULL);
		}
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
