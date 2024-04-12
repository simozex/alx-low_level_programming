#include "hash_tables.h"

/**
 *hash_table_print - prints a hash table
 *@ht: hash_table_t
 *Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int printed;

	if (ht == NULL)
		return;

	printf("{");

	printed = 0;

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			if (printed > 0)
			{
				printf(", ");
			}

			printf("'%s' : '%s'", current->key, current->value);
			printed++;
			current = current->next;
		}
	}
	printf("{\n");
}
