#include "main.h"
/**
 *
 *
 *
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int total;
	int len1 = 0;

	while (s1[len1] != '\0')
		len1++;
	for (i = 0; i < len1; i++)
		if(s1[i] == s2[i])
			total = 0;
		else
			total += 1;
	return (total);
}
