#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - returns the nth node of the list
 * @head: pointer of the list
 * @index: index of the node we want
 * Return: pointer of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;
	for (i = 0; i < index; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}

	return (temp);
}
