#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted (starting from 0).
 * Return: 1 if the deletion is successful, or -1 if the deletion fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	if (!*head)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (i != index)
	{
		if (!current)
		{
			return (-1);
		}
		prev = current;
		i++;
		current = current->next;
	}

	prev->next = current->next;
	free(current);
	return (1);
}
