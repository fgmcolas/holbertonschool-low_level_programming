#include "lists.h"

/**
 * dlistint_len - Returns the number of elements of the linked list
 * @h: Pointer to the head of the list
 * Return: The number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;

	return (count);
}
