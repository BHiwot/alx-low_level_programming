#include "lists.h"
/**
 * pop_listint - function that delete the head
 * @head: head pointer
 * Return: head node data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int dt;

	if (*head == NULL)
		return (0);

	tmp = *head;
	dt = (*head)->n;
	*head = (*head)->next;

	free(tmp);
	return (dt);
}
