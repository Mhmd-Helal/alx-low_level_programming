#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *add_nodeint - add node at begning
 *@head: pointer to head
 *@n: the data
 *Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
