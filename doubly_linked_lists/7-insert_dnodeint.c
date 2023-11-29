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
	unsigned int i;
	dlistint_t *new;
	dlistint_t *head;
	dlistint_t *temp;

	head = *h;

	if (idx != 0)
	{
		temp = head;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
			temp = temp->next;

		if (temp == NULL)
			return (NULL);
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = head;
		*h = new;
	}
	else
	{
		new->next = temp->next;
		temp->next = new;
	}

	return (new);
}
