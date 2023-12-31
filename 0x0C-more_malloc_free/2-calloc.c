#include "main.h"
#include <stdlib.h>
/**
 *_calloc - allocate memory and set value to 0
 *@nmemb: num of elements that allocated
 *@size: size of the element
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (ptr);
}
