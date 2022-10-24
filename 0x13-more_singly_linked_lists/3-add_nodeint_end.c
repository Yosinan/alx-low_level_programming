#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - adds new element to the end of the linked list
 * @head: start pointer of linked list
 * @n: new element to be entered to the linked list
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t *));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->n = n;
	new->next = NULL;

	return (new);
}
