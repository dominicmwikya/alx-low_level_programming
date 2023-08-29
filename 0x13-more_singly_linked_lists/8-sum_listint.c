#include "lists.h"
/**
 * sum_listint- returns the sum of all the data (n) of a listint_t linked list.
 * @head: first node of the list
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *pointer = head;

	while (pointer)
	{
		sum += pointer->n;
		pointer = pointer->next;
	}
	return (sum);
}
