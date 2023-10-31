#include "main.h"
/**
 *
 *
 *
 *
 */
int _strlen(char *s)
{
	int i;
	int total = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		total += 1;
	}
	return (total);
}
