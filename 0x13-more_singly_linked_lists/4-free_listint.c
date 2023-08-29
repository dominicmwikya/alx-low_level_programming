#include "lists.h"
/**
 * free_listint-  frees a listint_t list.
 * @head: list of type listint_t to be freed
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *pointer;

	while (head != NULL)
	{
		pointer = head->next;
		free(head);
		head = pointer;
	}
}

