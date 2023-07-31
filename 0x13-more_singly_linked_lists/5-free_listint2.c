#include "lists.h"

/**
 * free_listint2 - Frees the memory occupied by all nodes of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
