#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - delete node from the middle of the list
 * @head: head pointer of the list
 * @index: place of the node to be deleted
 * Return: 1 if successfull and -1 if not successfull
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
		return (1);
	}

	for (ptr = *head; index && ptr->next != NULL; index--, ptr = ptr->next)
		prev = ptr;
	if (index)
		return (-1);

	prev->next = prev->next->next;
	free(ptr);
	return (1);
}
