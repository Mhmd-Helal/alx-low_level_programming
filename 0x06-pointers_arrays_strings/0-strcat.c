#include "main.h"

/**
 *
 *
 *
 *
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int len1 = 0 ,len2 = 0;
	
	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
		len2++;
	for (i = 0; i < len2; i++)
		dest[len1 + i] = src[i];
	dest[len1 + len2] = '\0';
	return (dest);
}
