#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of the list
 * @head: A pointer to a pointer to the head of the list
 * @str: The string to be stored in the new node
 * Return: The address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
