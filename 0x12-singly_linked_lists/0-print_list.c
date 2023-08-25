#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: list list_t
 *
 * Return: number of nodes in h list
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
