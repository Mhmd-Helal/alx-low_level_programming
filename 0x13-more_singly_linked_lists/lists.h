#ifndef LISTS_H
#define LISTS_H
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
#endif
