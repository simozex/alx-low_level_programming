#include "lists.h"

/**
 * free_listint - Frees the memory occupied by all nodes of a listint_t list.
 * @head: Pointer to the head of the list.
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next = NULL;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
