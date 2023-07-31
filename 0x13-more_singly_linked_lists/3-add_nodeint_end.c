#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of the linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @n: The integer data to be stored in the new node.
 * Return: A pointer to the new node, or NULL on failure.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		listint_t *current = *head;

		while (current->next)
		{
			current = current->next;
		}

		current->next = newnode;
	}

	return (newnode);
}
