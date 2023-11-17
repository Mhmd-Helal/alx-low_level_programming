#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *free_list - free a list
 *@head: first item in list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
