#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given index in a
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index at which the new node should be inserted (starting from 0).
 * @n: Integer value to be stored in the new node.
 * Return: Address of the newly inserted node, or NULL if the insertion fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *newnode = malloc(sizeof(listint_t));
	unsigned int x = 0;

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while (current)
	{
		if (x == idx - 1)
		{
			newnode->next = current->next;
			current->next = newnode;
			return (newnode);
		}
		x++;
		current = current->next;
	}

	free(newnode);
	return (NULL);
}
