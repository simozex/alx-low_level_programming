#include "lists.h"

/**
 * print_list - Prints the elements of a linked list.
 * @h: Pointer to the head of the list.
 * Return: The number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		count++;
		current = current->next;
	}

	return (count);
}
