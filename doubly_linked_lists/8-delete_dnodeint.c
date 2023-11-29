#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of thr list
 * @head: Double pointer to the head of the list
 * @index: Index of the node
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	else
	{
		for (i = 0; i < index; i++)
		{
			if (current == NULL)
				return (-1);
			current = current->next;
		}

		if (current == NULL)
			return (-1);

		if (current->prev != NULL)
			current->prev->next = current->next;
		if (current->next != NULL)
			current->next->prev = current->prev;

		free(current);
	}

	return (1);
}
