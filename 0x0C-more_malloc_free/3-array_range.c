#include "main.h"
#include <stdlib.h>
/**
 *array_range - create array
 *@min: min of num
 *@max: max of num
 *Return: pointer to intger
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; i < ((max - min) + 1); i++)
		ptr[i] = min + i;
	return (ptr);
}
