#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 *arry_iterator - print elements of array
 *@array: array that are printed
 *@size: size of array
 *action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	
	if (array == NULL || action == NULL)
		exit(98);
	for (i = 0; i < size; i++)
		action(array[i]);
}

