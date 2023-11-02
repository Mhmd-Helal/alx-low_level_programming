#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - check if memory allocated
 *@b: num of allocated memory
 *Return: return void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
