#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "lists.h"
/**
 *sum_listint - print sum of list
 *@head: head of the list
 * Return: sum of item in the list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
