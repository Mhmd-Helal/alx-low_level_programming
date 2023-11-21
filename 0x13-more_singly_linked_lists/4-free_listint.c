#include "lists.h"
#include <stdlib.h>
/**
 *free_listint - free a list
 *@head: first item in list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
