#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head:First Node of the list
 * @index: index of the node to be returned
 *
 * Return: Pointer to nth node, NULL if does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (count == index)
	{
		return (current);
	}
	return (NULL);
}

