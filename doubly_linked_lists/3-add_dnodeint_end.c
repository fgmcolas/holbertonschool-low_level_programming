#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of the list
 * @head: Pointer to the pointer to the head of the list
 * @n: Value to be stored in the new node
 * Return: The address of the new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = newnode;
		newnode->prev = temp;
	}

	return (newnode);
}
