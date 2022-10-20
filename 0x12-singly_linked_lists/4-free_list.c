#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: Const double pointer of structure list_t for beginning
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *tem;

	for (tem = head; tem != NULL; tem = tem->next)
	{
		free(tem->str);
		free(tem);
	}
}
