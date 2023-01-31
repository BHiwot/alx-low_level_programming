#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint_end - Adds a new node at the End of list
 * @head: A pointer to the address of head of the listint_t list.
 * @n: The integer for the new node to contain.
 * Return: NULL. Otherwise - the address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = *head;
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node)
	{
		new_node->n = n;
		new_node->next = NULL;

		if (!(*head))
			*head = new_node;
		else
		{
			while (node->next)
				node = node->next;
			node->next = new_node;
		}
	}
	return (new_node);
}
