#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct hash_node
{
	char *key;
	char *value;
	struct hash_node *next;
} hash_node_t;

typedef struct hash_table
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

#endif
