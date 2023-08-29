#include "lists.h"
/**
 * insert_nodeint_at_index-  inserts a new node at a given position.
 * @head: pointer to first node
 * @idx: index where the node is to be inserted
 * @n: data for the new node
 * Returns: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 0;
	listint_t *pointer = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		
		return (new_node);
	}
	for (index = 0; pointer && index <idx; index++)
	{
		if (index == idx - 1)
		{
			new_node->next = pointer->next;
			pointer->next = new_node;
			return (new_node);
		}
		else
		{
			pointer = pointer->next;
		}
	}
	return (NULL);
}
