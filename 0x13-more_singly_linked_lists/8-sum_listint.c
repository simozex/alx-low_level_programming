#include "lists.h"

/**
 * sum_listint - Calculates the sum of all integer values in a listint_t list.
 * @head: Pointer to the head of the list.
 * Return: The sum of all integer values in the list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
