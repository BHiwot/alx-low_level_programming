#include "lists.h"
/**
 * get_nodeint_at_index - return nth node
 * @head: ..
 * @index: ..
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	while (node < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		node++;
	}
	return (head);
}
