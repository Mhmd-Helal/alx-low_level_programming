#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *add_nodeint_end - add node at begning
 *@head: pointer to head
 *@n: the data
 *Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	while (*head != NULL)
		*head = *head->next;
	*head->next = new;
	return (new);
}
