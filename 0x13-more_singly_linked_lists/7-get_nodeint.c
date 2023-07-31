#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at the given index of a
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve (starting from 0).
 * Return: Pointer to the node at the specified index, or NULL if the
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current)
	{
		if (i == index)
			return (current);
		i++;
		current = current->next;
	}

	return (NULL);
}
