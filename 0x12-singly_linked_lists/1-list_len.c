#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *list_len - print len of  list
 *@h: first node of list
 *Return: len of list
 */
size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
