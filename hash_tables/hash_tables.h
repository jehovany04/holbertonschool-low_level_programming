#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <string.h>

/* Structure for a hash node */
typedef struct hash_node
{
	char *key;
	char *value;
	struct hash_node *next;
} hash_node_t;

/* Structure for a hash table */
typedef struct hash_table
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* Function prototypes */
hash_table_t *hash_table_create(unsigned long int size);

#endif /* HASH_TABLES_H */

