#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: The hash table
 * @key: The key
 * @value: The value
 * Return: The index of the key
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, i;
	char *copy;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	copy = strdup(value);
	if (copy == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = copy;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (0);
}
