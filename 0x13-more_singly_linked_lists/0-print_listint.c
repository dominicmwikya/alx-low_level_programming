#include "lists.h"
/**
 * print_listint- Print elements of linked list
 * @h: Linked list of type listint_t to be printed
 * Return: Number of nodes in listint_t
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
