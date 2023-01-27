#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_nodeint - add new nodes to the list
 * @head: current place in the list
 * @str: int to add to the list
 * Return: pointer to current position in list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	if (!(head))
		return (NULL);
	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);
	if (str)
		new_head->str = strdup(str);
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
