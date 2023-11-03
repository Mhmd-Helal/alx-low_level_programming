#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - add two string
 *@s1: first string
 *@s2: second string
 *@n: num of string2
 *Return: pointer to char of new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	int size;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0' && len2 < n)
		len2++;
	size = sizeof(char) * (len1 + len2 + 1);
	t = malloc(size);
	if (!t)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
		t[i] = s1[i];
	for (j = 0; j < n; j++)
		t[i + j] = s2[j];
	t[i + j] = '\0';
	return (t);
}
