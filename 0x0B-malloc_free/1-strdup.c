#include "main.h"
#include <stdlib.h>
#include "2-strlen.c"
/**
 *_strdup - cpy str
 *@str: sring which copied
 *Return: pointer a pointer
 */
char *_strdup(char *str)
{
	char *strcpy;
	int i;

	if (str == NULL)
		return (NULL);
	strcpy = malloc(sizeof(char) * _strlen(str) + 1);
	if (strcpy == NULL)
		return (NULL);
	for (i = 0; i < _strlen(str); i++)
		strcpy[i] = str[i];
	return (strcpy);
}
