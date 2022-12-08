#include "lists.h"
/**
 * add_dnodeint_end - Add a node in the tail
 * @head: Pointer to direction of the head
 * @n: The data integer
 * Return: The direction of the tail node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end;

	end = malloc(sizeof(dlistint_t));
	if (end == NULL)
		return (NULL);
	while (*head->next == NULL)
		*head = *head->next;
	*head->next = end;
	end->prev = *head;
	end->n = n;

	return (end);
}
