#include "hash_tables.h"
/**
 *hash_table_set - adds an element to the hash table.
 *@ht: hash_table_t
 *@key: char
 *@value: char
 *Return: 1 or -1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((unsigned char *) key, ht->size);
	hash_node_t *current = ht->array[index];
	hash_node_t *new_node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			if (strcmp(current->value, value) == 0)
				return (1);
	free(current->value);
	current->value = malloc(strlen(value) + 1);

	if (current->value == NULL)
		return (0);
	strcpy(current->value, value);
	return (1);
		}
	current = current->next;
	}

	if (new_node == NULL)
		return (0);
	new_node->key = malloc(strlen(key) + 1);
	new_node->value = malloc(strlen(value) + 1);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
