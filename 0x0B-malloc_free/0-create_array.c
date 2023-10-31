#include "main.h"
#include <stdlib.h>
/**
 *create_array - function allocate memory
 *@size: size of allocated memory
 *@c: value char that is allocate in this memory
 *Return: pointer of array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t;

	if (size <= 0)
		return (NULL);
	t = malloc(sizeof(char) * size);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		t[i] = c;
	return (t);
}
