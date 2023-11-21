#include "lists.h"
#include <stdlib.h>
/**
 *free_listint2 - free a list
 *@head: first item in list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		free(*head);
		*head = tmp->next;
	}
	*head = NULL;
}
