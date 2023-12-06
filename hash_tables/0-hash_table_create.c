#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: The size of the array
 * Return: A pointer to the hash table or NULL if error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));

	if (!ht)
		return (NULL);

	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;

	while (size--)
		ht->array[size] = NULL;

	return (ht);
}
