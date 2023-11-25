#include "main.h"
#include <stddef.h>
/**
 *binary_to_uint - convert bin to unsignedint
 *@b: char of bin is 1 or 0
 *Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	int i;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	for (i = 0; b[i] != '\0'; i++)
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
		{
			sum += (b[len - 1] - '0') * _pow(2, i);
			len--;
		}
	return (sum);
}
