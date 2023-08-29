#include "lists.h"
/**
 * listint_len- Return number of elements in listint_t list
 * @h: linked list of type listint_t
 * Return: Number of nodes in h
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *pointer = NULL;

	pointer = h;

	while (pointer != NULL)
	{
		count++;
		pointer = pointer->next;
	}
	return (count);
}
