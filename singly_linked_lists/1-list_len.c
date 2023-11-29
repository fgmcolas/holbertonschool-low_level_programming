#include "lists.h"

/**
 * list_len - Returns the number of elements in the list
 * @h: A pointer to the head of the list.
 * Return: The number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t numb;

	for (numb = 0; h != NULL; numb++)
	{
		h = h->next;
	}
	return (numb);
}
