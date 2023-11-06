#include "main.h"

/**
 *_strncat - concate two string with n byte of second string
 *@dest: first string
 *@src: second string
 *@n: num of byte from second string
 *Return: pointer to char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len1 = 0;

	while (dest[len1] != '\0')
		len1++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len1 + i] = src[i];
	dest[len1 + n] = '\0';
	return (dest);
}

