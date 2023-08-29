#include "lists.h"
/**
 * delete_nodeint_at_index- deletes the node,
 * at index index of a listint_t linked list.
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pointer = *head;
	listint_t *currentNode = NULL;
	unsigned int indx = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(pointer);
		return (1);
	}
	while (indx < index - 1)
	{
		if (!pointer || !(pointer->next))
		{
			return (-1);
		}
		else
		{
			pointer = pointer->next;
			indx++;
		}
	}
	currentNode = pointer->next;
	pointer->next = currentNode->next;
	free(currentNode);
	return (1);
}
