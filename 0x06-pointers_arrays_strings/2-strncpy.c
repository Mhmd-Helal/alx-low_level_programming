#include "main.h"
/**
 *_strncpy - copy of src to dest
 *@dest: dest from copy
 *@src: source of copy
 *@n: elements of source
 *Return: pointer to char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
