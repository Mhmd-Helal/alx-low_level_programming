#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "lists.h"
/**
 *print_listint - print a list 
 *@h: head of the list
 * Return: num of item in the list
*/
size_t print_listint(const listint_t *h)
{
	int count = 0;
	if (h == NULL)
	{
		printf("list is empty");
		return (count);
	}
	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
