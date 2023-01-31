#include "lists.h"
/**
 * sum_listint - sum of all data of linked list
 * @head: ..
 * Return: sum of all data or 0
 */
int sum_listint(listint_t *head)
{
	int sm = 0;

	while (head)
		sum += head->n;
		head = head->next;
	return (sm);
}
