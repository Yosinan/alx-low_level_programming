#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: linked list pointer
 * @n: new element to be entered
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t *));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	*head = new;
	new->n = n;

	return (new);
}
