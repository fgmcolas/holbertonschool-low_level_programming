#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of the list
 * @head: A pointer to a pointer to the head of the list
 * @str: The string to be stored in the new node
 * Return: The address of the new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp;

	if (str == NULL)
		return (NULL);

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
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;

	else
	{
		temp = *head;

			while (temp->next != NULL)
				temp = temp->next;

		temp->next = newnode;
	}

	return (newnode);
}
