#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_list - print list
 *@h: first node of list
 *Return: len of list
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d]: %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
