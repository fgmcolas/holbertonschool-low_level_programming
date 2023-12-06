#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: The size of the array
 * Return: A pointer to the hash table or NULL if error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **array;

	ht = malloc(sizeof(hash_table_t));

	if (!ht)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);

	if (!array)
		return (NULL);

	ht->array = array;
	ht->size = size;

	while (size--)
		ht->array[size] = NULL;

	return (ht);
}
