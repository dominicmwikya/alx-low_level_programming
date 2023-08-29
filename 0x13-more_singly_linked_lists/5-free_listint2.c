#include "lists.h"
/**
 * free_listint2- frees a listint_t list.
 * @head: list to free
 */

void free_listint2(listint_t **head)
{
	listint_t *pointer;

	while (*head != NULL)
	{
		pointer = (*head)->next;
		free(*head);
		*head = pointer;
	}
	*head = NULL;
}
