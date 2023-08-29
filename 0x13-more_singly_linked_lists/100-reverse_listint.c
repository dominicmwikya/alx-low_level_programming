#include "lists.h"
/**
 * reverse_listint- reverses a listint_t linked list.
 * @head:input list to revesr
 * Returns: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = NULL;
	listint_t *next_temp = NULL;

	while (current != NULL)
	{
		next_temp = current->next;
		current->next = prev;
		prev = current;
		current = next_temp;
	}
	*head = prev;
	return (*head);
}

