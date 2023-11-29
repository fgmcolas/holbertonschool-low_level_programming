#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of the list
 * @head: Pointer to the pointer to the head of the list
 * @n: Value to be stored in the new node
 * Return: The address of the new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
		(*head)->prev = newnode;

	*head = newnode;

	return (newnode);
}
