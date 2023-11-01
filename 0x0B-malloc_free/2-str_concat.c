#include "main.h"
#include "2-strlen.c"
#include <stdlib.h>
/**
 *str_concat - concate of two string
 *@s1: first string
 *@s2: second string
 *Return: pointer to array
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = " ";
		s2 = " ";
	}
	str = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 2));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < _strlen(s1); i++)
		str[i] = s1[i];
	for (j = 0; j < _strlen(s2); j++)
		str[i + j] = s2[j];
	return (str);
}
