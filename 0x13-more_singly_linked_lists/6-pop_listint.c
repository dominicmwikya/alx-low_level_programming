#include "lists.h"
/**
 * pop_listint- deletes the head node of a listint_t linked list
 * @head - pointer to first list element
 *
 * Return: returns the head node’s data (n).0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *pointer;
	int data;

	if (!head || !*head)
	{
		return (0);
	}
	data = (*head)->n;
	pointer = (*head)->next;
	free(*head);
	*head = pointer;

	return (data);
}
