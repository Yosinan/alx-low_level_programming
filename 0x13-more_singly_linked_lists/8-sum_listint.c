#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - sums each node's data and returns the sum
 * @head: pointer to the list
 * Return: sum of the nodes's data
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *temp;

	temp = head;
	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
