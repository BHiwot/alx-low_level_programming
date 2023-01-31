#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the End of list
 * @head: A pointer to the address of head of the listint_t list.
 * @n: The integer for the new node to contain.
 * Return: NULL. Otherwise - the address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

		listint_t *new, *l;

		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = Null;

		if (*head)
		{
			l = *head;
			while (l->next)
			{
				l = l->next
			}
			l->next = new;
		}
		else
		{
			*head = new;
		}
		return (new);
}
