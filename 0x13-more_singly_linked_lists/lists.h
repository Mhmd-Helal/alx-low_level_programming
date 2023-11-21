#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct node - singly linked list
 * @n: num - (malloc'ed num)
 * @next: points to the next node
 */
typedef struct node
{
	int n;
	struct node *next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int sum_listint(listint_t *head);
#endif
