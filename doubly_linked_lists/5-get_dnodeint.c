#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node of list
 * @head: Pointer to the head of the list
 * @index: Index of the node
 * Return: The node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current = head;

	for (count = 0; current != NULL; count++)
	{
		if (count == index)
			return (current);

		current = current->next;
	}

	return (NULL);
}
