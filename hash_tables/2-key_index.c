#include "hash_tables.h"

/**
 * key_index - Returns the index at which a key should be stored in the table
 * @key: The key for which the index is calculated
 * @size: The size of the hash table
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
