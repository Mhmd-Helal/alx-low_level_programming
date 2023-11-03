#include "main.h"
#include <stdlib.h>
/**
 *calloc - allocate memory and set value to 0
 *@nmemb: num of elements that allocated
 *@size: size of the element
 *return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
	return (ptr);
}
