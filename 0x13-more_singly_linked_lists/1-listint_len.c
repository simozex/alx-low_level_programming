#include "lists.h"

/**
 * listint_len - Counts the number of elements in a listint_t list.
 * @h: Pointer to the head of the list.
 * Return: Number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	int count = 0;

	while (current)
	{
		current = current->next;
		count++;
	}

	return (count);
}
