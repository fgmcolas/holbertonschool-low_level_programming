#include "lists.h"

/**
 * print_list - Print all elements of the list
 * @h: Pointer to the head of the list
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t numb = 0;

	for (numb = 0; h != NULL; numb++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
	}
	return (numb);
}
