#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "lists.h"
/**
 *listint_len - len the list
 *@h: head of the list
 * Return: len the list
*/
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
