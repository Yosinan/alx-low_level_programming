#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - deletes the head and returns head node's data
 * @head: input pointer
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *f;
	int d;

	if (*head == NULL)
	{
		return (0);
	}

	d = (*head)->n;
	f = (*head)->next;
	free(*head);
	*head = f;
	return (d);
}
